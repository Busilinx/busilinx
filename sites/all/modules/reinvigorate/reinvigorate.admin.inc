<?php
// $Id: reinvigorate.admin.inc,v 1.1.2.1 2010/10/20 17:09:59 devkinetic Exp $


/**
 * Implementation of hook_admin_settings() for configuring the module
 */
function reinvigorate_admin_settings_form(&$form_state) {
  $form = array();
  $form['reinvigorate_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Reinvigorate account number'),
    '#default_value' => variable_get('reinvigorate_account', ''),
    '#size' => 25,
    '#maxlength' => 25,
    '#required' => TRUE,
    '#description' => t('The account number is unique to this websites domain.'),
  );
  /* Removed - why not just use the SSL capable version as it switches automatically based on the url?
  $form['reinvigorate_ssl'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable SSL Support'),
    '#default_value' => variable_get('reinvigorate_ssl', 0),
  );
  */
  // Caching - borrowed from GA module
  $form['reinvigorate_cache'] = array(
    '#type' => 'checkbox',
    '#title' => t('Cache tracking code file locally'),
    '#description' => t("Tracking code file is retrieved from Reinvigorate and cached locally every 24 hours. "),
    '#default_value' => variable_get('reinvigorate_cache', 0),
  );
  if (variable_get('file_downloads', FILE_DOWNLOADS_PUBLIC) == FILE_DOWNLOADS_PRIVATE) {
    $form['reinvigorate_cache']['#disabled'] = TRUE;
    $form['reinvigorate_cache']['#description'] .= ' '. t('<a href="@url">Public file transfers</a> must be enabled to allow local caching.', array('@url' => url('admin/settings/file-system', array('query' => drupal_get_destination()))));
  }
  // Name Tags
  $form['reinvigorate_name_tags_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Name Tags settings'),
    '#collapsible' => TRUE,
  );
  $form['reinvigorate_name_tags_settings']['reinvigorate_name_tags'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Name Tags'),
    '#default_value' => variable_get('reinvigorate_name_tags', 0),
    '#description' => t('Name Tags are an easy way to identify exactly who your visitors are.'),
  );
  $form['reinvigorate_name_tags_settings']['reinvigorate_name_tags_name_tag'] = array(
    '#type' => 'radios',
    '#title' => t('Name Tag'),
    '#default_value' => variable_get('reinvigorate_name_tags_name_tag', 1),
    '#options' => array(
      t('User ID'),
      t('Name'),
      t('Mail'),
      t('Session ID'),
      t('Hostname'),
    ),
  );
  $form['reinvigorate_name_tags_settings']['reinvigorate_name_tags_context_tag'] = array(
    '#type' => 'radios',
    '#title' => t('Context Tag'),
    '#default_value' => variable_get('reinvigorate_name_tags_context_tag', 0),
    '#options' => array(
      t('Disable'),
      t('User ID'),
      t('Name'),
      t('Mail'),
      t('Session ID'),
      t('Hostname'),
    ),
  );
  // Role specific visibility
  $form['reinvigorate_role_visibility'] = array(
    '#type' => 'fieldset',
    '#title' => t('Role Specific Visibility'),
    '#collapsible' => TRUE,
  );
  $roles = user_roles();
  $role_options = array();
  foreach ($roles as $rid => $name) {
    $role_options[$rid] = $name;
  }
  $form['reinvigorate_role_visibility']['reinvigorate_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Remove script for specific roles'),
    '#default_value' => variable_get('reinvigorate_roles', array()),
    '#options' => $role_options,
    '#description' => t('Remove script only for the selected role(s). If none of the roles are selected, all roles will have the script. If a user has none of the roles checked, that user will have the script.'),
  );
  // Page specific visibility configurations.
  $form['reinvigorate_page_visibility'] = array(
    '#type' => 'fieldset',
    '#title' => t('Page specific script settings'),
    '#collapsible' => TRUE,
  );
  $access = user_access('execute PHP');
  $visibility = variable_get('reinvigorate_visibility', 0);
  $pages = variable_get('reinvigorate_pages', '');
  if ($visibility == 2 && !$access) {
    $form['reinvigorate_page_visibility'] = array();
    $form['reinvigorate_page_visibility']['visibility'] = array('#type' => 'value', '#value' => 2);
    $form['reinvigorate_page_visibility']['pages'] = array('#type' => 'value', '#value' => $pages);
  }
  else {
    $options = array(t('Add to every page except the listed pages.'), t('Add to the listed pages only.'));
    $description = t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>'));

    if ($access) {
      $options[] = t('Add if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only).');
      $description .= ' '. t('If the PHP-mode is chosen, enter PHP code between %php. Note that executing incorrect PHP-code can break your Drupal site.', array('%php' => '<?php ?>'));
    }
    $form['reinvigorate_page_visibility']['reinvigorate_visibility'] = array(
      '#type' => 'radios',
      '#title' => t('Add script to specific pages'),
      '#options' => $options,
      '#default_value' => $visibility,
    );
    $form['reinvigorate_page_visibility']['lreinvigorate_pages'] = array(
      '#type' => 'textarea',
      '#title' => t('Pages'),
      '#default_value' => $pages,
      '#description' => $description,
      '#wysiwyg' => FALSE,
    );
  }
  return system_settings_form($form);
}
