<?php
// $Id: mvf.views.inc,v 1.1.2.1 2009/08/02 21:57:23 crea Exp $

/**
 * @file
 * Defines MVF Views data and plugins.
 * 
 */

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function mvf_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'mvf') .'/includes',
      ),
    'handlers' => array(
      'mvf_filter_handler' => array(
        'parent' => 'content_handler_filter_float',
      ),
    ),
  );
}
