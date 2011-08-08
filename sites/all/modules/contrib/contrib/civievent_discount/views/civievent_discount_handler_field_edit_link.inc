<?php

/**
 * Handler to create an edit link to the discount code.
 */
class civievent_discount_handler_field_edit_link extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['cid'] = 'cid';
  }
  
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $cid = $values->cid;
    
    return l(t('edit'), 'admin/settings/civievent_discount/edit/' . $cid, array('query' => drupal_get_destination()));
  }
}
