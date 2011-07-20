<?php

/**
 * @file
 *   Form settings include file
 *
 * @version
 *   $Id: nodeaccess_autoreference.admin.inc,v 1.1.2.3 2009/07/16 15:30:59 kenorb Exp $
 *
 * @developers
 *   Rafal Wieczorek <kenorb@gmail.com>
 *   Konrad Wieczorek <kw.keth@gmail.com>
 */

/**
 * Menu callback for the settings form.
 */
function nodeaccess_autoreference_admin_form() {

  $form['nodeaccess_autoreference'] = array(
    '#type' => 'fieldset',
    '#title' => t('Form Settings'),
    '#description' => t('Addition permission for edit and delete operations you can find in Drupal Permissions table.'),
    '#collapsible' => TRUE,
  ); 

  $form['nodeaccess_autoreference']['nodeaccess_autoreference_via_owner'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check permission via owners.'),
    '#description' => t('Select if you want to enable checking permissions through owners.'),
    '#default_value' => variable_get('nodeaccess_autoreference_via_owner', FALSE),
  );

  $form['nodeaccess_autoreference_log'] = array(
    '#type' => 'fieldset',
    '#title' => t('Debug stuff'),
    '#description' => t('Use those settings only for testing purposes!.'),
    '#collapsible' => TRUE,
  ); 

  $form['nodeaccess_autoreference_log']['nodeaccess_autoreference_log'] = array(
    '#type' => 'checkbox',
    '#title' => t('Log all permission changes.'),
    '#description' => t('Select if you want to log all permission changes.'),
    '#default_value' => variable_get('nodeaccess_autoreference_log', FALSE),
  );
  $form['nodeaccess_autoreference_log']['nodeaccess_autoreference_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show connection messages.'),
    '#description' => t('Select if you want to show messages with connections.'),
    '#default_value' => variable_get('nodeaccess_autoreference_debug', FALSE),
  );
  $form['nodeaccess_autoreference_log']['nodeaccess_autoreference_disable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable changing the permissions.'),
    '#description' => t('Select if you want temporary to disable giving the permissions if referenced path has been found.'),
    '#default_value' => variable_get('nodeaccess_autoreference_disable', FALSE),
  );
  //$form['#validate'] = array('nodeaccess_autoreference_admin_form_validate');

  return system_settings_form($form); 
}
 
/**
 * Form API callback to validate the settings form.
 */
function nodeaccess_autoreference_admin_form_validate($form, &$form_state) {
  $values = &$form_state['values'];
} 

