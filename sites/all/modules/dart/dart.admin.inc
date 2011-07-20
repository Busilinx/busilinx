<?php
// $Id: dart.admin.inc,v 1.18 2010/09/09 14:21:50 bleen18 Exp $

/**
 * @file
 * Admin form handling for the DART module.
 */

/**
 * Form builder; Configure dart settings for this site.
 *
 * @ingroup forms
 */
function dart_admin_settings() {
  // Default tag settings.
  $form['default_tag_settings'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Default Tag Settings'),
    '#weight'       => -20,
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['default_tag_settings']['dart_prefix'] = array(
    '#type'           => 'textfield',
    '#title'          => t('DART prefix'),
    '#default_value'  => variable_get('dart_prefix', ''),
    '#required'       => TRUE,
    '#description'    => t('Typically a short version of your company/organization\'s name (provided by Doubleclick).'),
    '#maxlength'      => 32,
  );
  $form['default_tag_settings']['dart_sitezone'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Default DART site/zone'),
    '#default_value'  => variable_get('dart_sitezone', ''),
    '#required'       => TRUE,
    '#description'    => t('The value to use when no "site/zone" is specified on a given page. Example: pets/dogs.'),
    '#maxlength'      => 32,
  );
  $form['default_tag_settings']['dart_slug'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Slug'),
    '#default_value'  => variable_get('dart_slug', '<none>'),
    '#required'       => FALSE,
    '#description'    => t('Slug all ads with the following with this label. Use <none> for no slug. Example: Advertisement'),
    '#maxlength'      => 64,
  );

  // Gloabal key/val pairs
  $form['gloabl_key_vals'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Global Key|Value Pairs'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['gloabl_key_vals']['dart_special_kvs'] = array(
    '#type'           => 'checkboxes',
    '#title'          => t('Special key|val pairs'),
    '#default_value'  => variable_get('dart_special_kvs', array('tile' => 'tile', 'ord' => 'ord')),
    '#options'        => array(
                          'tile' => t('tile (value auto-increments on each tag)'),
                          'ord'  => t('ord (value changes on each page request)')),
    '#description' => t('Include these special values in all of your ad tags.'),
  );
  $form['gloabl_key_vals']['dart_kvs'] = array(
    '#type'           => 'textarea',
    '#title'          => t('key|value pairs'),
    '#description'    => t('Add key|value pairs that should be included on every ad tag (one per line). If you need a value to be evaluated by javascript append "|eval" to the pair. <br/>Examples: <ul><li>dcopt|ist</li><li>randomNum|Math.random()|eval</li><li>var|varDefinedIn<em>InjectJavascript</em>FieldBelow|eval</li></ul>'),
    '#default_value'  => variable_get('dart_kvs', ''),
    '#rows' => 5,
  );

  // Global display options.
  $form['display_options'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Global Display Options'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['display_options']['dart_noscript'] = array(
    '#type'           => 'checkbox',
    '#title'          => t('display &lt;noscript&gt; tags'),
    '#default_value'  => variable_get('dart_noscript', '1'),
    '#description'    => t('Check this to display &lt;noscript&gt; tags along with you javascript DART tags.'),
  );

  // Global display rules.
  $form['display_rules'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Global Display Rules'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['display_rules']['users'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('User Rules'),
    '#collapsible'  => TRUE,
    '#collapsed'    => TRUE,
  );
  $form['display_rules']['users']['dart_display_rule_roles'] = array(
    '#type'           => 'checkboxes',
    '#title'          => t('Hide DART ads from the following user roles'),
    '#default_value'  => variable_get('dart_display_rule_roles', array()),
    '#options'        => user_roles(),
  );
  $form['display_rules']['dart_display_rule_admin'] = array(
    '#type'           => 'checkbox',
    '#title'          => t('Hide DART ads from admin pages'),
    '#default_value'  => variable_get('dart_display_rule_admin', 0),
  );

  // Javascript.
  $form['javascript'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Inject Javascript'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['javascript']['dart_js'] = array(
    '#type'           => 'textarea',
    '#title'          => t('Inject javascript'),
    '#description'    => t('Inject this javascript into the &lt;head&gt; on each page request. You do not need to add code to create a random number for use as the ORD if you checked "Include ord value" above. <br/>This javascript will be injected above the key|value pairs you enter in the field below, so you can declare variables here that you will include as part of a key|value pair there.'),
    '#default_value'  => variable_get('dart_js', ''),
    '#rows'           => 5,
  );

  // Add vertical tabs display if available.
  $form['#pre_render'][] = 'vertical_tabs_form_pre_render';

  return system_settings_form($form);
}

/**
 * List all tags in a table.
 */
function dart_admin_tag_list() {
  $output = '';

  $header = array(
    array('data' => t('Active')),
    array('data' => t('Tag ID'), 'field' => 'dtid'),
    array('data' => t('Tag Name'), 'field' => 'name'),
    array('data' => t('Pos'), 'field' => 'pos'),
    array('data' => t('Size')),
    array('data' => t('Display Code')),
    array('data' => t('Operation')),
  );
  $result = db_query("SELECT active, dtid, name, pos, sz FROM {dart_tags}" . tablesort_sql($header));
  $rows = array();

  while ($tag = db_fetch_array($result)) {
    $tag['name'] = l($tag['name'], 'admin/build/adtag/' . $tag['dtid'] . '/edit');
    $tag['active'] = $tag['active'] ? '&#10004;' : '&#10006;';
    $tag[] = "<code>" . check_plain("print dart_tag(" . $tag['dtid'] . ");") . "</code>";
    $tag[] = l(t('edit'), 'admin/build/adtag/' . $tag['dtid'] . '/edit');


    $classes = $tag['active'] ? 'active' : 'inactive';
    $rows[] = array(
      'data' => $tag,
      'class' => $classes,
    );
  }
  if (empty($rows)) {
    $rows[] = array(array('data' => '<em>'. t('There are currently no DART tags.') .'</em>', 'colspan' => 7));
  }
  else {
    $output .= '<p>' . t('In order to display any of the tags below you must add the provided display code to one of your .tpl files or theme override functions positioned in your markup wherever you would like the tag to appear. If you have chosen to display the tag as a block you can go to !admin-blocks instead of using the provided display code.', array('!admin-blocks' => l('admin/build/blocks', 'admin/build/blocks'))) . '</p>';
  }

  return $output . theme('table', $header, $rows);
}

/**
 * Form builder; Create an ad tag.
 *
 * @ingroup forms
 * @see dart_admin_tag_validate()
 * @see dart_admin_tag_submit()
 */
function dart_admin_tag(&$form_state, $edit=array()) {
  // Set some messages to explain why tags may not be displaying.
  if (empty($form_state['post'])) {
    if (!$edit['active']) {
      drupal_set_message('This tag is currently set as inactive.', 'warning');
    }
  }

  $form['active'] = array(
    '#type'           => 'checkbox',
    '#title'          => t('Check here to make this tag active.'),
    '#default_value'  => isset($edit['active']) ? $edit['active'] : 'active',
  );

  // Tag settings.
  $form['tag_settings'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Default Tag Settings'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['tag_settings']['name'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Tag Name'),
    '#description'    => t('A unique name for this ad tag.'),
    '#required'       => TRUE,
    '#maxlength'      => 128,
    '#default_value'  => isset($edit['name']) ? $edit['name'] : '',
  );
  $form['tag_settings']['pos'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Tag Position (pos)'),
    '#description'    => t('Example: rt_rail_box1'),
    '#required'       => TRUE,
    '#maxlength'      => 32,
    '#default_value'  => isset($edit['pos']) ? $edit['pos'] : '',
  );
  $form['tag_settings']['sz'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Tag Size (sz)'),
    '#description'    => t('Example: 300x600,300x250'),
    '#required'       => TRUE,
    '#maxlength'      => 64,
    '#default_value'  => isset($edit['sz']) ? $edit['sz'] : '',
  );
  $form['tag_settings']['overrides'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('DART Overrides'),
    '#collapsible'  => TRUE,
    '#collapsed'    => TRUE,
    '#description'  => t('Override the !settings for this ad tag.', array('!settings' => l('default settings', 'admin/configure/dart'))),
  );
  $form['tag_settings']['overrides']['site'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Tag Site (site)'),
    '#description'    => t('In rare circumstances you may want a tag to use an alternate DART site regardless of the page it appears on.'),
    '#required'       => FALSE,
    '#maxlength'      => 32,
    '#default_value'  => isset($edit['settings']['site']) ? $edit['settings']['site'] : '',
  );
  $form['tag_settings']['overrides']['zone'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Tag Zone (zone)'),
    '#description'    => t('In rare circumstances you may want a tag to always use an alternate DART zone regardless of the page it appears on.'),
    '#required'       => FALSE,
    '#maxlength'      => 32,
    '#default_value'  => isset($edit['settings']['zone']) ? $edit['settings']['zone'] : '',
  );
  $form['tag_settings']['overrides']['slug'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Slug'),
    '#description'    => t('Override the default slug for this ad tag. Use !none for no slug. Leave this field empty to use the default slug. Example: Advertisement', array('!none' => check_plain('<none>'))),
    '#required'       => FALSE,
    '#maxlength'      => 64,
    '#default_value'  => isset($edit['settings']['slug']) ? $edit['settings']['slug'] : '',
  );

  // Display options.
  $form['display_options'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Display Options'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['display_options']['block'] = array(
    '#type'           => 'checkbox',
    '#title'          => t('Create a block for this tag'),
    '#description'    => t('Checking this will create a block (configurable on admin/build/block) in which this ad tag is displayed.'),
    '#default_value'  => isset($edit['block']) ? $edit['block'] : '',
  );
  $form['display_options']['scriptless'] = array(
    '#type'           => 'checkbox',
    '#title'          => t('This tag is scriptless'),
    '#description'    => t('Check this if this tag should be rendered without javascript. Use this option for email based tags.'),
    '#default_value'  => isset($edit['settings']['options']['scriptless']) ? $edit['settings']['options']['scriptless'] : '',
  );
  $form['display_options']['method'] = array(
    '#type'           => 'radios',
    '#title'          => t('Tag method'),
    '#description'    => t('If you are unsure, use "adj" and/or contact doubleclick.'),
    '#default_value'  => isset($edit['settings']['options']['method']) ? $edit['settings']['options']['method'] : 'adj',
    '#options'        => array('adj' => t('&lt;script&gt; (adj)'), 'adi' => t('&lt;iframe&gt; (adi)')),
  );

  // Display rules.
  $form['display_rules'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Display Rules'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['display_rules']['nodes_paths'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Nodes & Paths'),
    '#collapsible'  => TRUE,
    '#collapsed'    => TRUE,
  );
  $form['display_rules']['nodes_paths']['paths'] = array(
    '#type'           => 'select',
    '#title'          => t('For what paths should this tag appear'),
    '#options'        => array(
                           'all_paths'  => t('Display on any path'),
                           'all_nodes'  => t('Display only on /node/% paths'),
                           'non_nodes'   => t('Display only on non- /node/% paths')),
    '#default_value'  => isset($edit['settings']['rules']['paths']) ? $edit['settings']['rules']['paths'] : 'all_paths',
    '#description'    => t('URL aliases are ignored when determining the current path.'),
  );
  $options = node_get_types('names');
  $form['display_rules']['nodes_paths']['node_types'] = array(
    '#type'           => 'checkboxes',
    '#title'          => t('On what node types should tag appear'),
    '#default_value'  => isset($edit['settings']['rules']['node_types']) ? $edit['settings']['rules']['node_types'] : array_keys($options),
    '#options'        => $options,
  );

  if (module_exists('domain')) {
    $options = array();
    $available_domains = domain_domains();
    foreach ($available_domains as $key => $domain) {
      $options[$domain['domain_id'] === 0 ? 'zero' : $domain['domain_id']] = $domain['subdomain'];
    }
    $form['display_rules']['domain_group'] = array(
      '#type'         => 'fieldset',
      '#title'        => t('Domains/Subdomains'),
      '#collapsible'  => TRUE,
      '#collapsed'    => TRUE,
    );
    $form['display_rules']['domain_group']['domains'] = array(
      '#type'           => 'checkboxes',
      '#title'          => t('On which domains/subdomains should this tag appear'),
      '#default_value'  => isset($edit['settings']['rules']['domains']) ? $edit['settings']['rules']['domains'] : array_keys($options),
      '#options'        => $options,
    );
  }
  $form['display_rules']['taxonomy_group'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Taxonomy'),
    '#description'  => t('Only display this ad tag on nodes that are tagged with the terms entered below. Leave all vocabularies blank to display ad tags on all nodes.'),
    '#collapsible'  => TRUE,
    '#collapsed'    => TRUE,
  );
  $form['display_rules']['taxonomy_group']['taxonomy'] = array(
    '#tree'         => TRUE,
  );
  $options = array();
  $vocabularies = taxonomy_get_vocabularies();
  foreach ($vocabularies as $vocabulary) {
    $form['display_rules']['taxonomy_group']['taxonomy'][$vocabulary->vid] = array(
      '#type' => 'textfield',
      '#default_value' => isset($edit['settings']['rules']['taxonomy'][$vocabulary->vid]) ? $edit['settings']['rules']['taxonomy'][$vocabulary->vid] : '',
      '#maxlength' => 100,
      '#autocomplete_path' => 'taxonomy/autocomplete/'. $vocabulary->vid,
      '#title' => $vocabulary->name,
      '#description' => t('A comma-separated list of terms describing this content (Example: funny, bungie jumping, "Company, Inc.").')
    );
  }

  // Key/val pairs.
  $form['key_vals'] = array(
    '#type'         => 'fieldset',
    '#title'        => t('Key|val pairs'),
    '#collapsible'  => TRUE,
    '#collapsed'    => FALSE,
  );
  $form['key_vals']['keyvals'] = array(
    '#type'           => 'textarea',
    '#title'          => t('Tag specific key|value pairs'),
    '#description'    => t('Add key|value pairs that should be included on <strong>this tag only</strong> (one per line). If you need a value to be evaluated by javascript append "|eval" to the pair. <br/>Examples: <ul><li>dcopt|ist</li><li>randomNum|Math.random()|eval</li></ul>'),
    '#default_value'  => isset($edit['settings']['options']['keyvals']) ? $edit['settings']['options']['keyvals'] : '',
    '#rows'           => 5,
  );

  // Form buttons.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Create Tag')
  );

  if (isset($edit['dtid'])) {
    $form['submit']['#value'] = t('Save Tag');
    $form['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete Tag')
    );
    $form['dtid'] = array(
      '#type' => 'value',
      '#value' => $edit['dtid']
    );
  }

  // Add vertical tabs display if available.
  $form['#pre_render'][] = 'vertical_tabs_form_pre_render';

  return $form;
}

/**
 * Form validation function for admin tag form.
 */
function dart_admin_tag_validate($form, &$form_state) {
  // Ensure that "name" is unique.
  $results = db_query("SELECT dtid FROM {dart_tags} WHERE name = '%s'", $form_state['values']['name']);
  while ($dtid = db_result($results)) {
    if ($dtid != $form_state['values']['dtid']) {
      form_set_error('name', t('The tag name %name already exists. Please choose another name for this tag.', array('%name' => $form_state['values']['name'])));
      break;
    }
  }
}

/**
 * Form submit function for admin tag form.
 */
function dart_admin_tag_submit($form, &$form_state) {
  // Prepare form data to be saved in the database.
  $settings = dart_tag_settings($form_state['values']);
  $form_state['values']['settings'] = serialize($settings);

  switch ($form_state['values']['op']) {
    case t('Create Tag'):
      drupal_write_record('dart_tags', $form_state['values']);
      drupal_set_message(t('The DART tag has been created.'));
      watchdog('DART', 'Created DART tag: %name.', array('%name' => $form_state['values']['name']), WATCHDOG_NOTICE);
      break;
    case t('Save Tag'):
      drupal_write_record('dart_tags', $form_state['values'], 'dtid');
      drupal_set_message(t('The DART tag has been saved.'));
      watchdog('DART', 'Edited DART tag: %name.', array('%name' => $form_state['values']['name']), WATCHDOG_NOTICE);
      break;

  }
  $form_state['redirect'] = 'admin/build/adtag';
}

function dart_tag_settings($values) {
  $settings = array();
  $settings['options']['scriptless']   = $values['scriptless'];
  $settings['options']['keyvals']      = addcslashes($values['keyvals'], "\n\r");
  $settings['options']['method']       = $values['method'];
  $settings['site']                    = $values['site'];
  $settings['zone']                    = $values['zone'];
  $settings['slug']                    = $values['slug'];
  $settings['rules']['domains']        = $values['domains'];
  $settings['rules']['paths']          = $values['paths'];
  $settings['rules']['node_types']     = $values['node_types'];
  $settings['rules']['taxonomy']       = $values['taxonomy'];

  drupal_alter('dart_settings', $settings, $values);
  return $settings;
}

/**
 * Form builder for the DART tag delete confirmation form.
 *
 * @ingroup forms
 * @see dart_tag_confirm_delete_submit()
 */
function dart_admin_tag_confirm_delete(&$form_state, $dart_tag) {
  $form['dtid'] = array(
    '#type' => 'value',
    '#value' => $dart_tag->dtid,
  );
  $question = t("Are you sure you want to delete the '%name' DART tag?", array('%name' => $dart_tag->name));
  $path = 'admin/build/adtag';
  $description = t('This action cannot be undone.');
  return confirm_form($form, $question, $path, $description, t('Delete Tag'), t('Cancel'));
}

/**
 * Submit handler to delete a DART tag after confirmation.
 *
 * @see dart_tag_confirm_delete()
 */
function dart_admin_tag_confirm_delete_submit($form, &$form_state) {
  dart_tag_delete($form_state['values']['dtid']);
  drupal_set_message(t('Deleted DART tag.'));
  watchdog('DART', 'Deleted DART tag: %dtid.', array('%dtid' => $form_state['values']['dtid']), WATCHDOG_NOTICE);
  $form_state['redirect'] = 'admin/build/adtag';
  return;
}
