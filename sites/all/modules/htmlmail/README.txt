HTML Mail

   [1]HTML Mail lets you theme your outgoing messages the same way you
   theme the rest of your website.

Requirements

     * [2]Echo
     * [3]Mail MIME
     * [4]Mail System

Installation

   [5]Install as usual.

   The following additional modules, while not required, are highly
   recommended:
     * [6]Emogrifier
     * [7]Pathologic
     * [8]Filter transliteration
       Also available as a [9]patch.

Configuration

   Visit the [10]Mail System settings page at admin/settings/mailsystem to
   select which parts of Drupal will use [11]HTML Mail instead of the
   [12]default [13]mail system.

   Visit the [14]HTML Mail settings page at admin/settings/htmlmail to
   select a theme, pre-filter, and post-filter for your messages.

Theming

   The email message text goes through four transformations before
   sending:
    1. The Text format pre-filter from the module settings page is
       applied. This should be the same text format that your website uses
       for contributed content such as comments or blog postings. For
       consistency and security, it should include the the [15]Correct
       faulty and chopped off HTML from [16]filter.module, or a better
       replacement such as [17]HTML Purifier or [18]htmLawed.
    2. A theme template is applied. The default template is the included
       htmlmail.tpl.php file. You may copy this file to your theme
       directory and use it to customize the contents and formatting of
       your messages. The comments within the file contain complete
       documentation on its usage.
    3. The message may be wrapped in a website theme selected on the
       module settings page. Creating an email-specific sub-theme lets you
       use the full power of the [19]drupal theme system to format your
       messages.
    4. The Text format post-filter from the module settings page is
       applied. For best results, this should be an email-specific input
       format containing the following text format filters:
          + [20]Transliteration
          + [21]Emogrifier
          + [22]Pathologic
          + [23]Correct faulty and chopped off HTML

Troubleshooting

   Visit the [24]issue queue for support and feature requests.

Related Modules

   Emogrifier
          http://drupal.org/project/emogrifier

   HTML Purifier
          http://drupal.org/project/htmlpurifier

   htmLawed
          http://drupal.org/project/htmlawed

   Mail MIME
          http://drupal.org/project/mailmime

   Mail System
          http://drupal.org/project/mailsystem

   Pathologic
          http://drupal.org/project/pathologic

   Transliteration
          http://drupal.org/project/transliteration

Documentation

   filter.module
          D6:
          http://api.drupal.org/api/drupal/modules--filter--filter.module/
          6
          D7:
          http://api.drupal.org/api/drupal/modules--filter--filter.module/
          7

   Installing contributed modules
          D6:
          http://drupal.org/documentation/install/modules-themes/modules-5
          -6
          D7:
          http://drupal.org/documentation/install/modules-themes/modules-7

   Theming guide
          http://drupal.org/documentation/theme

Original Author

     * [25]Chris Herberte

Current Maintainer

     * [26]Bob Vincent

References

   1. http://drupal.org/project/htmlmail
   2. http://drupal.org/project/echo
   3. http://drupal.org/project/mailmime
   4. http://drupal.org/project/mailsystem
   5. http://drupal.org/documentation/install/modules-themes/modules-5-6
   6. http://drupal.org/project/emogrifier
   7. http://drupal.org/project/pathologic
   8. http://drupal.org/project/filter_transliteration
   9. http://drupal.org/node/1095278#comment-4219530
  10. http://drupal.org/project/mailsystem
  11. http://drupal.org/project/htmlmail
  12. http://api.drupal.org/api/drupal/modules--system--system.mail.inc/class/DefaultMailSystem/7
  13. http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail_system/7
  14. http://drupal.org/project/htmlmail
  15. http://api.drupal.org/api/drupal/modules--filter--filter.module/function/_filter_htmlcorrector/6
  16. http://api.drupal.org/api/drupal/modules--filter--filter.module/6
  17. http://drupal.org/project/htmlpurifier
  18. http://drupal.org/project/htmlawed
  19. http://drupal.org/documentation/theme
  20. http://drupal.org/project/filter_transliteration
  21. http://drupal.org/project/emogrifier
  22. http://drupal.org/project/pathologic
  23. http://api.drupal.org/api/drupal/modules--filter--filter.module/function/_filter_htmlcorrector/6
  24. http://drupal.org/project/issues/htmlmail
  25. http://drupal.org/user/1171
  26. http://drupal.org/user/36148
