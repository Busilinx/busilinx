<?php
/**
 * @file
 * Parses and formats emails for sending using the MailMIME class.
 *
 * This is a minimal-effort backport of the 7.x-2.x code, which implements
 * MailSystemInterface.
 *
 * @see http://api.drupal.org/api/drupal/includes--mail.inc/interface/MailSystemInterface/7
 * @see http://drupal.org/project/mailmime
 */

// Always load the class because drupal 6 doesn't have class autoload.
module_load_include('inc', 'mailmime');

/**
 * Implements MailSystemInterface.
 */
class HTMLMailSystem implements MailSystemInterface {
  /**
   * Format emails according to module settings.
   *
   * Parses the message headers and body into a MailMIME object.  If another module
   * subsequently modifies the body, then format() should be called again before
   * sending.  This is safe because the $message['body'] is not modified.
   *
   * @param $message
   *   An associative array with at least the following parts:
   *   - headers: An array of (name => value) email headers.
   *   - body: The text/plain or text/html message part.
   *
   * @return
   *   The formatted $message, ready for sending.
   */
  public function format(array $message) {
    // Collapse the message body array.
    $message['body'] = MailMIME::concat($message['body']);
    // Build a full email message string.
    $email = MailMIME::encodeEmail($message['headers'], $message['body']);
    // Parse it into MIME parts.
    if (!($mime = MailMIME::parse($email))) {
      watchdog(
        'HTMLMailSystem',
        'Could not parse email message.',
        array(),
        WATCHDOG_ERROR
      );
      return $message;
    }
    // Work on a copy so that the original $message['body'] remains unchanged.
    $email = $message;
    if ( !($email['body'] = $mime->getHTMLBody())
      && !($email['body'] = $mime->getTXTBody()) ) {
      $email['body'] = '';
    }
    // Theme with htmlmail.tpl.php.
    $body = theme('htmlmail', $email);
    // Store the plaintext version.
    $mime->setTXTBody(drupal_html_to_text($body));
    // Check to see whether recipient allows non-plaintext.
    if ( !($recipient = user_load(array('mail' => $message['to'])))
      || empty($recipient->htmlmail_plaintext) ) {
      // Optionally apply the selected web theme.
      if ($theme = htmlmail_get_selected_theme($message)) {
        $body = echo_themed_page($message['subject'], $body, $theme);
      }
      // Optionally apply the selected output filter.
      if ($filter = variable_get('htmlmail_postfilter', FILTER_FORMAT_DEFAULT)) {
        $body = check_markup($body, $filter);
      }
      // Store the fully-themed HTML body.
      $mime->setHTMLBody($body);
    }
    // Store the MailMIME object.
    $message['MailMIME'] = &$mime;
    return $message;
  }

  /**
   * Send an email message.
   *
   * @param $message
   *   An associative array containing at least:
   *   - headers: An associative array of (name => value) email headers.
   *   - body: The text/plain or text/html message body.
   *   - MailMIME: The message, parsed into a MailMIME object.
   */
  public function mail(array $message) {
    // If message was not parsed into a MailMIME object, abort.
    if (!isset($message['MailMIME'])) {
      watchdog(
        'HTMLMailSystem',
        '%mailmime part of %message array not set; aborting send.',
        array('%mailmime' => 'MailMIME', '%message' => '$message'),
        WATCHDOG_ERROR
      );
      return FALSE;
    }
    $mime = &$message['MailMIME'];
    // Extract headers and body parts.
    list($headers, $body) = $mime->toEmail($message['headers']);
    // Ensure that subject is non-null.
    $message += array('subject' => t('(No subject)'));
    // Check for empty recipient.
    if (empty($message['to'])) {
      if (empty($headers['To'])) {
        watchdog(
          'HTMLMailSystem',
          'Cannot send email about %subject without a recipient.',
          array('subject' => $message['subject']),
          WATCHDOG_ERROR
        );
        return FALSE;
      }
      $message['to'] = $headers['To'];
    }
    // Check for empty body.
    if (empty($body)) {
      watchdog(
        'HTMLMailSystem',
        'Refusing to send a blank email to %recipient about %subject.',
        array('%recipient' => $message['to'], '%subject' => $message['subject']),
        WATCHDOG_WARNING
      );
      return FALSE;
    }
    $extra = (
      isset($headers['Return-Path'])
      && !ini_get('safe_mode')
      && !strpos(ini_get('sendmail_path'), ' -f')
    ) ? '-f ' . $headers['Return-Path']
      : '';
    return mail(
      $mime->encodeHeader('to', $message['to']),
      $mime->encodeHeader('subject', $message['subject']),
      $body,
      $mime->txtHeaders($headers),
      $extra
    );
  }
}
