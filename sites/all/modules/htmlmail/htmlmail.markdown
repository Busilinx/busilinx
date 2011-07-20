When formatting an email message, Drupal determines the active template
directory by looking for `htmlmail.tpl.php` file in the following locations:

*    [`path_to_theme()`](http://api.drupal.org/api/drupal/includes--theme.inc/function/path\_to\_theme/6)
*    [`drupal_get_path(`](http://api.drupal.org/api/drupal/includes--common.inc/function/drupal_get_path/6)"module", [$installed_profile](http://api.drupal.org/api/drupal/developer--globals.php/global/installed_profile/6))
*    [`drupal_get_path(`](http://api.drupal.org/api/drupal/includes--common.inc/function/drupal_get_path/6)"module", ["htmlmail"](http://drupal.org/project/htmlmail))

Once the active template directory is found, Drupal looks in that directory
for template files in order from most specific to most general.

For example, if `example_module` sends mail with:

    drupal_mail("example_module", "outgoing_message" ...)

the possible template file names would be:

*    `htmlmail-example_module_outgoing_message.tpl.php`
*    `htmlmail-example_module_outgoing.tpl.php`
*    `htmlmail-example_module.tpl.php`
*    `htmlmail.tpl.php`

The `$theme_hook_suggestions` variable contains an array of suggested
[theme](http://api.drupal.org/api/drupal/includes--theme.inc/function/theme/6)
[hooks](http://api.drupal.org/api/drupal/developer--hooks--core.php/function/hook_theme/6),
in reverse priority order.  For the above example, it would contain:

*    `htmlmail`
*    `htmlmail-example_module`
*    `htmlmail-example_module_outgoing`
*    `htmlmail-example_module_outgoing_message`

For another example, to customize the
[password reset](http://api.drupal.org/api/drupal/modules--user--user.pages.inc/function/user_pass_submit/6)
messages sent by the
[user module](http://api.drupal.org/api/drupal/modules--user--user.module/6),
copy `htmlmail.tpl.php` to your theme directory, and also
copy it to `htmlmail-user_password_reset.tpl.php`, then modify the
latter file. Remember that you will need to put *both* files in your theme
directory for this to work.

Template files are cached, so remember to clear the cache by visiting
<u>admin/settings/performance</u>
after creating, copying, or editing any `.tpl.php` files.

The following variables are also available in this template:

**`$body`**
:   The message body text.

**`$module`**
:   The sending module name, usually the first parameter to
[`drupal_mail()`](http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail/6).

**`$key`**
:   The message key, usually the second parameter to
[`drupal_mail()`](http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail/6).

**`$id`**
:   The email message id, usually `"{$module}_{$key}"`.

**`$theme`**
:   The name of the email-specific theme used to embed the message body into a
    fully-themed webpage.

    **Note:** This may be different from the default website theme.  Theme
    suggestion templates such as `html.tpl.php` should be copied to the
    *website theme directory*, not the *email theme directory*.

**`$directory`**
:   The relative path to the website theme template directory.

**`$theme_url`**
:   The absolute URL to the website theme directory.

**`$debug`**
:   `TRUE` if debugging info should be printed.

The module calling
[`drupal_mail()`](http://api.drupal.org/api/drupal/includes--mail.inc/function/drupal_mail/6)
may set other variables.  For instance, the
[Webform module](http://drupal.org/project/webform)
sets a `$node` variable which may be very useful.

Other modules may also add or modify theme variables by implementing a
`MODULENAME_preprocess_htmlmail(&$variables)` hook function.
