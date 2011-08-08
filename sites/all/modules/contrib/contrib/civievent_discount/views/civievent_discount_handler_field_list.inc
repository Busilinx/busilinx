<?php

/**
 * Handler to unserialize data and create a list with markup
 */
class civievent_discount_handler_field_list extends views_handler_field {
  function construct() {
    parent::construct();
  }
  
  function render($values) {
    $value = $values->{$this->field_alias};
    $data = unserialize($value);
    
    require_once(drupal_get_path('module', 'civievent_discount') . '/civievent_discount.admin.inc');
    
    switch($this->field_alias) {

      case 'civievent_discount_memberships':
        $memberships = _get_membership_types();
        foreach ($data as $v) {
          $label = $memberships[$v]['name'];
          $d .= $label ."<br />";
        }
        
        return $d;
        break;

      case 'civievent_discount_events':
        $events = _get_civicrm_events();
        $events = array_intersect_key($events, $data);
        foreach ($events as $k => $v) {
          $d .= $v ."<br />";
        }

        return $d;
        break;

      case 'civievent_discount_autodiscounts':
        return 'There are autodiscounts';
        break;

      case 'civievent_discount_pricesets':
        $pricesets = _get_pricesets();
        if (!empty($pricesets) && !empty($data)) {
          foreach ($data as $psid) {
            $label = $pricesets[$psid]['ps_label'] ." :: ". $pricesets[$psid]['item_label'];
            $d .= $label ."<br />";
          }
        }

        return $d;
        break;
    }
  }
}
