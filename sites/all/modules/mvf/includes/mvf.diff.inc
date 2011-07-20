<?php
// $Id: mvf.diff.inc,v 1.1.2.1 2009/08/09 19:03:27 crea Exp $

/**
 * @file
 * Integration of Measured Value Field with Diff module.
 */

/**
 * Implementation of hook_content_diff_values()
 */
function mvf_content_diff_values($node, $field, $items) {
  $element = array(
    '#field_name' => $field['field_name'],
    '#type_name' => $node->type,
    '#formatter' => 'default',
  );
  $result = array();
  foreach ($items as $item) {
    $element['#item'] = $item;
    $result[] = theme('mvf_formatter_default', $element);
  }
  return $result;
}
