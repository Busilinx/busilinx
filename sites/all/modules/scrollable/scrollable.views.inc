<?php

/**
 * @file
 *  Provides the views plugin information.
 */

/**
  * Implementation of hook_views_plugin().
  */
function scrollable_views_plugins() {
  return array(
    'module' => 'scrollable',
    'style' => array(
      'scrollable' => array(
        'title' => t('Scrollable views'),
        'theme' => 'scrollable_view',
        'help' => t('Display rows in a scrollable box.'),
        'handler' => 'scrollable_style_plugin',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}