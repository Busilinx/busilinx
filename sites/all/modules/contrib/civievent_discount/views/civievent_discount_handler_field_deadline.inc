<?php

/**
 * Original: civicrm_handler_field_datetime()
 */
class civievent_discount_field_deadline extends views_handler_field_date {
  // Convert the DATETIME from the database into unixtime then allow
  // views_handler_field_date to render as usual.
  // Also trick php into thinking the time is in the same timezone, no
  // matter the default timezone
  function render($values) {
    // get default time zone form Drupal
    $timezone = variable_get('date_default_timezone', 0);
    $value = $values->{$this->field_alias};
        
    if (is_string($value) && strpos($value,"-")) {
      $date = new DateTime($value);
      $gmt = $date->getOffset();
      $value = strtotime($value);
      $value = $value + $gmt;
      $value = $value - $timezone;

      if ($value) {
        $values->{$this->field_alias} = $value;
      }
    }

    return parent::render($values);
  }
}
