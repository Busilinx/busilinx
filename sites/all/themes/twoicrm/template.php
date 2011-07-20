<?php 
// $Id: template.php,v 1.1.2.6 2009/12/24 01:47:01 jmburnz Exp $
// adaptivethemes.com

/**
 * @file template.php
 */

// Don't include custom functions if the database is inactive.
if (db_is_active()) {
  // Include base theme custom functions.
  include_once(drupal_get_path('theme', 'adaptivetheme') .'/inc/template.custom-functions.inc');
}

/**
 * Add the color scheme stylesheet if color_enable_schemes is set to 'on'.
 * Note: you must have at minimum a color-default.css stylesheet in /css/theme/
 */
if (theme_get_setting('color_enable_schemes') == 'on') {
  drupal_add_css(drupal_get_path('theme', 'twoicrm') .'/css/theme/'. get_at_colors(), 'theme');
}

/**
 * USAGE
 * 1. Rename each function to match your subthemes name,
 *    e.g. if you name your theme "themeName" then the function
 *    name will be "themeName_preprocess_hook".
 * 2. Uncomment the required function to use. You can delete the
 *    "sample_variable".
 */

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
/*
function twoicrm_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
*/

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
/*
function twoicrm_preprocess_page(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
*/

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
/*
function twoicrm_preprocess_node(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
*/

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
/*
function twoicrm_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
*/

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
/*
function twoicrm_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
*/

function twoicrm_content_view_multiple_field($items, $field, $values) {
  $output = '';
  $i = 0;
  foreach ($items as $item) {
    if (!empty($item) || $item == '0') {
      $output .= '<div class="multivalue-field-item field-item-'. $i .'">'. $item .'</div>';
      $i++;
    }
  }
  return $output;
}

/**
 * Implementation of theme_menu_item_link().
 *
 * Integrates Menu Class
 */
function phptemplate_menu_item_link($link) {
  if (function_exists('menuclass_to_link')) {
    menuclass_to_link($link);
  }
  return theme_menu_item_link($link);
}

/**
* Implementation of HOOK_username().
*/
function twoicrm_username($object) {

  if ($object->uid && $object->name) {

    $db = db_query('SELECT con.first_name, con.nick_name, con.last_name FROM {civicrm_uf_match} uf, {civicrm_contact} con
                                    WHERE uf.uf_id = %d AND uf.contact_id = con.id', $object->uid );

    $contact = db_fetch_array( $db );
   
    if( $contact['nick_name'] )
        $name = $contact['nick_name'].' '.$contact['last_name'];
    elseif( $contact['first_name'] )
        $name = $contact['first_name'].' '.$contact['last_name'];
    else
        $name = $object->name;

    // 20 characters is too short, let's set it to 30.
    if (drupal_strlen($name) > 30)
      $name = drupal_substr($name, 0, 28) .'...';

    if (user_access('access user profiles')) {
      $output = l($name, 'user/'. $object->uid, array('attributes' => array('title' => 'View user profile.')));
    }
    else {
      $output = check_plain($name);
    }
  }
  elseif ($object->name) {
 
    if (!empty($object->homepage)) {
      $output = l($object->name, $object->homepage, array('attributes' => array('rel' => 'nofollow')));
    }
    else {
      $output = check_plain($object->name);
    }

  }
  else {
    $output = 'Visitor';
  }

  return $output;
}