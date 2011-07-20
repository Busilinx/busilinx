<?php
// $Id: webform-mail.tpl.php,v 1.1.2.5 2009/11/06 00:59:47 quicksketch Exp $

/**
 * @file
 * Customize the e-mails sent by Webform after successful submission.
 *
 * This file may be renamed "webform-mail-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-mail.tpl.php" to affect all webform e-mails on your site.
 *
 * Available variables:
 * - $form_values: The values submitted by the user.
 * - $node: The node object for this webform.
 * - $user: The current user submitting the form.
 * - $ip_address: The IP address of the user submitting the form.
 * - $sid: The unique submission ID of this submission.
 * - $cid: The component for which this e-mail is being sent.
 *
 * The $cid can be used to send different e-mails to different users, such as
 * generating a reciept-type e-mail to send to the user that filled out the
 * form. Each form element in a webform is assigned a CID, by doing special
 * logic on CIDs you can customize various e-mails.
 */
?>

<img src="https://gsl.tv/sites/default/files/gsl-seclend-awards-logo-200px.jpg" />

<?php print t('Please reply to this email to confirm your votes in the Securities Lending Industry Awards 2010<br>') ?>

<?php print t('Please visit <a href="http://gsl.tv/securities-lending-industry-awards-2010">http://gsl.tv/awards</a> to keep up to date with the latest news and announcements on the Securities Lending Industry Awards 2010<br>') ?>

<?php print t('The details of your votes are') ?>:

<?php
  // Print out all the Webform fields. This is purposely a theme function call
  // so that you may remove items from the submitted tree if you so choose.
  // unset($form_values['submitted_tree']['element_key']);
  print theme('webform_mail_fields', 0, $form_values['submitted_tree'], $node);
?>

<?php if ($user->uid): ?>
<?php print t('Submitted by user: @username [@ip_address]', array('@username' => $user->name, '@ip_address' => $ip_address)) ?>
<?php else: ?>
<?php print t('Submitted by anonymous user: [@ip_address]', array('@ip_address' => $ip_address)) ?>
<?php endif; ?>

