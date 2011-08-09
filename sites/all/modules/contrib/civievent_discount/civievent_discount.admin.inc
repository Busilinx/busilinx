<?php

/**
 * Callback
 *
 * If the user is editing a code, the values are populated in the form
 * and an edit flag is passed along with the other form values.
 */
function civievent_discount_add(&$form_state, $type, $cid) {
  $form = array();

  list($code, $amount, $amount_type, $count) = array(NULL, NULL, NULL);
  $form['#edit'] = 0;
  if ($type == 'edit' || $type == 'clone') {
    $cid = db_fetch_object(db_query(_sql_get_code(), $cid));
    if ($cid) {
      $code = $cid->code;
      $desc = $cid->description;
      $amount = $cid->amount;
      $amount_type = $cid->amount_type;
      $count = $cid->count_max;
      $eids = unserialize($cid->events);
      $psids = unserialize($cid->pricesets);
      $mids = unserialize($cid->memberships);
      $orgid = $cid->organization;
      $adids = unserialize($cid->autodiscount);
      $expires = $cid->expiration;
    }
    if ($type == 'edit') { $form['#edit'] = 1; }
  }

  // Configuration fieldset
  $form['fsa'] = array(
      '#type' => 'fieldset',
      '#description' => t('Use the configuration settings to specify details about the discount code.'),
      '#title' => t('Configuration'), 
      '#weight' => -10, 
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
  );

  $div = "<div id='generate-code-error' class='messages error' style='display:none'></div>";
  $form['fsa']['code'] = array(
      '#type' => 'textfield',
      '#title' => t('Discount code'),
      '#description' => _get_chars(),
      '#field_suffix' => l(t('Random'), '', array('attributes' => array('id' => 'generate-code', 'onclick' => 'return false;'), 'fragment' => ' ', 'external' => TRUE)) . $div,
      '#size' => 25,
      '#maxlength' => 255,
      '#required' => TRUE,
      '#default_value' => check_plain($code),
  );  

  $form['fsa']['description'] = array(
      '#type' => 'textfield',
      '#title' => t('Description'),
      '#description' => t('A description of the code.'),
      '#size' => 25,
      '#maxlength' => 255,
      '#required' => TRUE,
      '#default_value' => check_plain($desc),
  );

  // Disable the textfield since a code can't be edited, only the other fields.
  if ($form['#edit'] == 1) {
    $form['fsa']['code']['#required'] = FALSE;
    $form['fsa']['code']['#type'] = 'markup';
    $form['fsa']['code']['#value'] = '<b>Code:</b> '. check_plain($code);
    $form['cid'] = array('#type' => 'hidden', '#value' => $cid->cid);
  }

  $form['fsa']['amount'] = array(
      '#type' => 'textfield',
      '#title' => t('Discount'),
      '#description' => t('The amount (monetary or percentage) of the discount.'),
      '#size' => 3, 
      '#maxlength' => 10,
      '#required' => TRUE,
      '#default_value' => $amount,
  );  

  $form['fsa']['amount_type'] = array(
      '#type' => 'select',
      '#title' => t('Amount Type'),
      '#required' => TRUE,
      '#multiple' => FALSE,
      '#options' => array('P' => 'Percentage', 'M' => 'Monetary'),
      '#default_value' => $amount_type,
  );

  $form['fsa']['count'] = array(
      '#type' => 'textfield',
      '#title' => t('Usage'),
      '#description' => t('How many times can this code be used? Use 0 for unlimited.'),
      '#size' => 3, 
      '#maxlength' => 10,
      '#required' => TRUE,
      '#default_value' => $count
  );

  $form['fsa']['expires'] = array(
      '#date_year_range' => '-0:+3',
      '#date_format' => 'm/d/Y H:i',
      '#title' => t('Expires on'),
      '#default_value' => $expires,
      '#description' => t('The date which this code will expire.'),
      '#required' => FALSE,
  );

  if (module_exists('date_popup')) { $form['fsa']['expires']['#type'] = 'date_popup'; }
  else { $form['fsa']['expires']['#type'] = 'date_select'; }

  if (!module_exists('date_api')) {
    $form['fsa']['expiration']['#type'] = 'markup';
    $form['fsa']['expiration']['#value'] = '<div class="messages warning">Expirations are disabled. Date must be enabled to set an expiration date.</div>';
  }

  $form['fsa']['organizations'] = array(
      '#type' => 'select',
      '#title' => t('Organization'),
      '#description' => t('The selected organization will be able to manage and view reports for this code.'),
      '#multiple' => FALSE,
  );

  $form['fsa']['autodiscount'] = array(
      '#type' => 'select',
      '#title' => 'Automatic discount',
      '#description' => t('Anyone in the selected memberships will automatically have the discount code applied.'),
      '#multiple' => TRUE,
  );

  // Get a listing of memberships
  $memberships = _get_membership_types();
  if (empty($memberships)) {
    $form['fsa']['autodiscount']['#type'] = 'markup';
    $form['fsa']['autodiscount']['#value'] = '<div class="messages warning">There are no active memberships.</div>';
  } else {
    $a = array();
    foreach ($memberships as $m) {
      $a[$m['id']] = $m['name'];
    }
    $form['fsa']['autodiscount']['#options'] = $a;
    $form['fsa']['autodiscount']['#default_value'] = $adids;
  }

  // Get a listing of organizations
  $orgs = _get_organizations();
  if (empty($orgs)) {
    $form['fsa']['organizations']['#type'] = 'markup';
    $form['fsa']['organizations']['#value'] = '<div class="messages warning">There are no organization contact types defined.</div>';
  } else {
    $a = array(0 => '');
    foreach ($orgs as $o) {
      $a[$o['id']] = $o['name'];
    }
    $form['fsa']['organizations']['#options'] = $a;
    $form['fsa']['organizations']['#default_value'] = $orgid;
  }

  // Assignments fieldset
  $form['fsb'] = array(
      '#type' => 'fieldset',
      '#description' => t('Use the assignments settings to specify how the discount code can be used.'),
      '#title' => t('Assignments'), 
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
  );

  $form['fsb']['events'] = array(
      '#type' => 'select',
      '#title' => 'Upcoming events',
      '#description' => t('Allow discounts to be used on the selected events. If you use price sets in your events, you must also select a price set below.'),
      '#multiple' => TRUE,
  );

  // Get a listing of events and populate the form values.
  $events = _get_civicrm_events();
  if (empty($events)) {
    $form['fsb']['events']['#type'] = 'markup';
    $form['fsb']['events']['#value'] = '<div class="messages warning">There are no upcoming events.</div>';
  } else {
    $form['fsb']['events']['#options'] = $events;
    $form['fsb']['events']['#default_value'] = $eids;
  }

  $form['fsb']['pricesets'] = array(
      '#type' => 'select',
      '#title' => 'Price sets',
      '#description' => t('Allow discounts to be used on the selected price sets.'),
      '#multiple' => TRUE,
  );

  // Get a listing of price sets and populate the form values.
  $pricesets = _get_pricesets();
  if (empty($pricesets)) {
    $form['fsb']['pricesets']['#type'] = 'markup';
    $form['fsb']['pricesets']['#value'] = '<div class="messages warning">There are no active price sets.</div>';
  } else {
    $a = array();
    foreach ($pricesets as $ps) {
      $a[$ps['item_id']] = $ps['ps_label'] ." :: ". $ps['pf_label'] ." :: ". $ps['item_label'];
    }
    $form['fsb']['pricesets']['#options'] = $a;
    $form['fsb']['pricesets']['#default_value'] = $psids;
  }

  $form['fsb']['memberships'] = array(
      '#type' => 'select',
      '#title' => 'Memberships',
      '#description' => t('Allow discounts to be used on the selected memberships.'),
      '#multiple' => TRUE,
  );

  // Get a listing of memberships and populate the form values.
  if (empty($memberships)) {
    $form['fsb']['memberships']['#type'] = 'markup';
    $form['fsb']['memberships']['#value'] = '<div class="messages warning">There are no active memberships.</div>';
  } else {
    $a = array();
    foreach ($memberships as $m) {
      $a[$m['id']] = $m['name'];
    }
    $form['fsb']['memberships']['#options'] = $a;
    $form['fsb']['memberships']['#default_value'] = $mids;
  }

  // Add JS and fields to lookup random code generation info
  drupal_add_js(drupal_get_path('module', 'civievent_discount') .'/civievent_discount.js');
  $result = db_query(_sql_get_codes());
  $codes = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) { $codes[$row->code] = $row->code; }
  $form['code-all'] = array('#type' => 'hidden', '#value' => json_encode($codes));
  $form['code-chars'] = array('#type' => 'hidden', '#value' => _get_chars());
  $form['code-chars-len'] = array('#type' => 'hidden', '#value' => _get_chars_len());

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save settings'));

  return $form;
}

/**
 * Implementation of hook_validate()
 */
function civievent_discount_add_validate($form, &$form_state) {
  if ($form['#edit'] != 1) {
    $code = check_plain($form_state['values']['code']);
    $result = db_fetch_object(db_query(_sql_get_code_by_name(), $code));
    if ($result) {
      form_set_error('code', t('Discount code %code already exists.', array('%code' => $code)));
    }
    require_once('civievent_discount.module');
    $chars = _get_chars();
    if (_ignore_case()) { $chars = strtolower($chars); }
    $code = preg_split('//', $code, -1, PREG_SPLIT_NO_EMPTY);
    $err = array();
    foreach ($code as $char) {
      if (_ignore_case()) { $char = strtolower($char); }
      if (!strstr($chars, $char)) { $err[$char] = $char; }
    }

    if (!empty($err)) {
      form_set_error('err', t('Discount code contains invalid character(s) %err.', array('%err' => implode($err, ','))));
    }
  }

  $amount = check_plain($form_state['values']['amount']);
  if (!is_numeric($amount)) {
    form_set_error('amount', t('Amount value %amount is not a number.', array('%amount' => $amount)));
  }

  $amount_type = check_plain($form_state['values']['amount_type']);
  if ($amount_type == "P") {
    if ($amount > 100 || $amount < 1) { 
      form_set_error('amount', t('Percent value %amount is outside of range 1 to 100.', array('%amount' => $amount)));
    }
  }

  $count = $form_state['values']['count'];
  if (!is_numeric($count)) {
    form_set_error('count', t('Count value %count is not a number.', array('%count' => $count)));
  }
}

/**
 * Implementation of hook_submit()
 *
 * Update the CiviEvent tables to add/remove the discount code.
 */
function civievent_discount_add_submit($form, $form_state) {
  $code = $form_state['values']['code'];
  $desc = $form_state['values']['description'];
  $count = $form_state['values']['count'];
  $amount = $form_state['values']['amount'];
  $amount_type = $form_state['values']['amount_type'];
  $cid = $form_state['values']['cid'];
  $eids = $form_state['values']['events'];
  $psids = $form_state['values']['pricesets'];
  $mids = $form_state['values']['memberships'];
  $orgid = $form_state['values']['organizations'];
  $adids = $form_state['values']['autodiscount'];
  $expires = $form_state['values']['expires'];

  if ($form['#edit'] == 1) {
    $code = $form['fsa']['code']['#default_value'];
    $result = db_query(_sql_update_code(), $desc, $amount, $amount_type, serialize($eids), serialize($psids), serialize($mids), $orgid, serialize($adids), $expires, $count, $cid); 
    drupal_set_message(t('%code has been updated.', array('%code' => $code)));
    drupal_goto('admin/settings/civievent_discount/list');
  } else {
    $result = db_query(_sql_set_code(), $desc, $amount, $amount_type, serialize($eids), serialize($psids), serialize($mids), $orgid, serialize($adids), $expires, $count, $code);
    drupal_set_message(t('%code has been saved.', array('%code' => $code)));
    drupal_goto('admin/settings/civievent_discount/add');
  }
}

/**
 * Callback
 *
 * Displays a list of codes and the events they are tied to.
 */
function civievent_discount_list() {
  $header = array(t('Code'), t('Discount'), t('Usage'), t('Event'), t('Price set'), t('Membership'), array('data' => t('Operations'), 'colspan' => 3));
  $result = db_query(_sql_get_tracking_count_all());
  $tracker = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) {
    $tracker[$row['id']] = $row['count'];
  }
  $result = db_query(_sql_get_codes());
  $codes = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) {
    if ($row['count_max'] == 0) { $row['count_max'] = t('Unlimited'); }
    if (in_array($row['cid'], array_keys($tracker))) {
      $row['count_use'] = l($row['count_use'], 'admin/settings/civievent_discount/usage/code/'. $row['cid']);
    }
    $code = array(
        'code' => $row['code'] ."<br />". $row['description'],
        'id' => $row['cid'],
        'count' => $row['count_use'] ." / ". $row['count_max'],
        'amount_type' => $row['amount_type'],
        'edit' => l('edit', 'admin/settings/civievent_discount/edit/'. $row['cid']),
        'delete' => l('delete', 'admin/settings/civievent_discount/delete/'. $row['cid']),
        'clone' => l('clone', 'admin/settings/civievent_discount/clone/'. $row['cid']),
    );
    if ($row['amount_type'] == "M") { $code['amount'] = number_format($row['amount'], 2); }
    else { $code['amount'] = $row['amount'] ."%"; }

    // Match the id against an event to get the title
    $eids = unserialize($row['events']);
    if ($eids == NULL) { $eids = array(); }
    $events = _get_civicrm_events();
    $events = array_intersect_key($events, $eids);
    foreach ($events as $k => $v) {
      $code['title'] .= l($v, 'civicrm/event/info', array('query' => 'id='. $k .'&reset=1')) ."<br />";
    }

    // Match the id against a priceset to get the title
    $psids = unserialize($row['pricesets']);
    if ($psids == NULL) { $psids = array(); }
    $pricesets = _get_pricesets();
    if (!empty($pricesets)) {
      foreach ($psids as $psid) {
        // $label = $pricesets[$psid]['ps_label'] ." :: ". $pricesets[$psid]['pf_label'] ." :: ". $pricesets[$psid]['item_label'];
        $label = $pricesets[$psid]['ps_label'] ." :: ". $pricesets[$psid]['item_label'];
        $code['priceset'] .= l($label, 'civicrm/admin/price', array('query' => 'reset=1')) ."<br />";
      }
    }

    // Match the id against a membership to get the title
    $mids = unserialize($row['memberships']);
    if ($mids == NULL) { $mids = array(); }
    $memberships = _get_membership_types();
    foreach ($mids as $mid) {
      $label = $memberships[$mid]['name'];
      $code['membership'] .= l($label, 'civicrm/admin/member/membershipType', array('query' => 'reset=1')) ."<br />";
    }

    $codes[] = $code;
  }

  $rows = array();
  foreach ($codes as $code) {
    $rows[] = array($code['code'], $code['amount'], $code['count'], $code['title'], $code['priceset'], $code['membership'], $code['edit'], $code['delete'], $code['clone']);
  }

  if (!empty($rows)) { return theme('table', $header, $rows); }
  else {
    return t("No active discount codes. You need to ".
        l(t('add one'), 'admin/settings/civievent_discount/add') ." before you can assign it to an event.");
  }
}

/**
 * Callback
 *
 * Deletes a discount code.
 */
function civievent_discount_delete() {
  $cid = arg(4);
  $cid = db_fetch_object(db_query(_sql_get_code(), $cid));
  if ($cid) {
    $form['code'] = array('#type' => 'hidden', '#value' => $cid->code);
    $form['cid'] = array('#type' => 'hidden', '#value' => $cid->cid);

    return confirm_form($form, t('Are you sure you want to delete the discount code %code?', array('%code' => $cid->code)), 'admin/settings/civievent_discount', NULL, t('Delete'), t('Cancel'));
  } else {
    drupal_set_message(t('Cowardly refusing to delete nonexistent discount code (%id).', array('%id' => arg(4))), $type='warning');
    drupal_goto('admin/settings/civievent_discount');
  }
}

/**
 * Implementation of hook_submit()
 *
 * Deletes a discount code.
 */
function civievent_discount_delete_submit($form, $form_state) {
  db_query(_sql_del_code(), $form_state['values']['cid']);
  drupal_set_message(t('Deleted discount code %code.', array('%code' => $form_state['values']['code'])));
  drupal_goto('admin/settings/civievent_discount');

  return;
}

/**
 * Callback
 *
 * Manage settings for discount codes.
 */
function civievent_discount_settings() {
  $form = array();

  $form['fsa'] = array(
      '#type' => 'fieldset',
      '#title' => t('Event registration'),
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
  );

  $form['fsa']['civievent_discount_multiple_participants'] = array(
      '#type' => 'checkbox',
      '#title' => t('Allow multiple participants?'),
      '#description' => t('If checked, the discount code will be applied to all participants and will be counted as a <b>single use</b>.'),
      '#default_value' => _get_allow_multiple(),
  );

  $form['fsb'] = array(
      '#type' => 'fieldset',
      '#title' => t('Validation and random code generation'),
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
  );

  $form['fsb']['civievent_discount_chars'] = array(
      '#type' => 'textfield',
      '#title' => t('Characters'),
      '#description' => t('Characters to use in validation and random code generation. Not case-sensitive.'),
      '#size' => 40,
      '#maxlength' => 255,
      '#default_value' => _get_chars(),
  );

  $form['fsb']['civievent_discount_ignore_case'] = array(
      '#type' => 'checkbox',
      '#title' => t('Ignore case?'),
      '#description' => t('If checked, case will be ignored when checking for a valid code.'),
      '#default_value' => _get_ignore_case(),
  );

  $form['fsb']['civievent_discount_chars_len'] = array(
      '#type' => 'textfield',
      '#title' => t('Length'),
      '#description' => t('Length of string to generate.'),
      '#size' => 1,
      '#maxlength' => 3,
      '#default_value' => _get_chars_len(),
  );

  return system_settings_form($form);
}

/**
 * Callback
 *
 * Present a table of discount code usage for an organization.
 *
 * Load all of the tracking information and display for each usage. Groups
 * all the codes together, new codes starting with a new count. This gives
 * the total used for each code an organization may own.
 */
function civievent_discount_report($id = 0) {
  if ($id == 0) { return; }
  $header = array();
  $rows = array();
  $msg = '';
  $title = '';
  $result = _get_code_assigned_to_org($id);
  $header = array('#', 'Code', 'Description');
  $count = 1;
  foreach ($result as $row) {
    $rows[] = array($count, $row['code'], $row['description']);
    $count++;
  }
  if (!empty($rows)) { print theme('table', $header, $rows); }

  $rows = array();
  $header = array('#', 'Code', 'Who', 'What', 'When');
  $result = _get_code_tracking_by_org($id);
  foreach ($result as $row) {
    $count = 1;
    foreach ($row as $item) {
      $rows[] = array(
        $count,
        $item['code'] .'<br />'. $item['desc'],
        l($item['name'], 'civicrm/contact/view', array('html' => true, 'query' => 'reset=1&cid='. $item['id'])),
        $item['track_type'] .'<br />'. $item['track_desc'],
        $time = format_date($item['time'], 'small', '', variable_get('date_default_timezone', 0))
      );
      $count++;
    }
  }
  if (!empty($rows)) { print theme('table', $header, $rows); }

  exit;
}

/**
 * Callback
 *
 * Present a table of discount code usage by code or user.
 *
 * User returns an HTML snippet (via print)
 * Code returns full HTML page (via return)
 */
function civievent_discount_usage($cmd = 'user', $id = 0) {
  if ($id == 0) { return; }
  $header = array();
  $rows = array();
  $msg = '';
  $title = '';
  if ($cmd == 'user') {
    $result = _get_code_tracking_details($id);
    $header = array('Code', 'What', 'When');
    foreach ($result as $row) {
      $time = format_date($row['time'], 'small', '', variable_get('date_default_timezone', 0));
      $rows[] = array($row['code'] .'<br />'. $row['desc'], $row['track_type'] .'<br />'. $row['track_desc'], $time);
    }
    if (!empty($rows)) {
      print theme('table', $header, $rows);
    } else {
      print t("The user has not redeemed any discount codes.");
    }
  } else if ($cmd == 'code') {
    $header = array('Who', 'What', 'When');
    $code = db_fetch_object(db_query(_sql_get_code(), $id));
    $title = '<h3>'. $code->code .'<br />'. $code->description .'</h3><br />';
    $result = _get_code_tracking_details(0, $id);
    foreach ($result as $row) {
      $time = format_date($row['time'], 'small', '', variable_get('date_default_timezone', 0));
      $lineitem = array();
      $lineitem[] = l($row['name'], 'civicrm/contact/view', array('html' => true, 'query' => 'reset=1&cid='. $row['id']));

      // XXX: Is there a way to link directly to membership just like participants?
      if ($row['track_type'] == 'Membership') {
        if (!empty($row['track_id'])) {
          $lineitem[] =
              $row['track_type'] .'<br />'.
              l($row['track_desc'], 'civicrm/contact/view/membership', array('html' => true, 'query' => 'reset=1&id='. $row['track_id'] .'&cid='. $row['id'] .'&action=view'));
        } else {
          $lineitem[] = $row['track_type'] .'<br />'. $row['track_desc'];
        }
      } else if ($row['track_type'] == 'Event') {
        $lineitem[] = 
            $row['track_type'] .'<br />'.
            l($row['track_desc'], 'civicrm/contact/view/participant', array('html' => true, 'query' => 'reset=1&id='. $row['track_id'] .'&cid='. $row['id'] .'&action=view'));
      } else {
        $lineitem[] = $row['track_type'] .'<br />'. $row['track_desc'];
      }
      $lineitem[] = $time;
      $rows[] = $lineitem;
    }
    if (!empty($rows)) {
      return $title . theme('table', $header, $rows);
    } else {
      return $title . t("The discount code has not been redeemed by anyone.");
    }
  } else { return; }
  exit;
}

function _get_civicrm_contacts() {
  if (!civicrm_initialize()) { return; }
  $sql = "SELECT id, display_name AS name FROM civicrm_contact WHERE is_deleted = 0";
  $dao =& CRM_Core_DAO::executeQuery($sql, array(), $i18nRewrite = TRUE);
  $contacts = array();
  while ($dao->fetch()) {
    $contacts[$dao->id] = $dao->name;
  }

  return $contacts;
}

/**
 * Returns a list of upcoming events
 */
function _get_civicrm_events() {
  if (!civicrm_initialize()) { return; } 
  require_once 'api/v2/Event.php';
  $params = array();
  $events = array();
  $params['return.max_results'] = 100; // is 100 enough?
  $result = civicrm_event_search($params);
  $now = date('Y-m-d H:i:s');
  foreach ($result as $event) {
    if (!$event['event_end_date'] || ($now < $event['event_end_date'])) {
      $events[$event['id']] = $event['title'];
    }
  }

  return $events;
}

function _get_version() {
  if (!civicrm_initialize()) { return; }
  $version = CRM_Utils_System::version();
  $version = intval(implode('', explode('.', $version, 2)));

  return $version;
}

/**
 * Returns all price sets/items, regardless of where they are used and if they
 * are enabled or not.
 */
function _get_pricesets() {
  if (_get_version() < 33) { return array(); }
  $sql = "SELECT
pfv.id as item_id,
pfv.label as item_label,
pf.label as pf_label,
ps.title as ps_label
FROM civicrm_price_field_value as pfv 
LEFT JOIN civicrm_price_field as pf on (pf.id = pfv.price_field_id)
LEFT JOIN civicrm_price_set as ps on (ps.id = pf.price_set_id)
ORDER BY pf_label, pfv.price_field_id, pfv.weight";

  if (!civicrm_initialize()) { return; }
  require_once 'CRM/Core/Config.php';
  $dao =& CRM_Core_DAO::executeQuery($sql, array());
  $pricesets = array();
  while ($dao->fetch()) {
    $pricesets[$dao->item_id] = array(
        'item_id' => $dao->item_id,
        'item_label' => $dao->item_label,
        'pf_label' => $dao->pf_label,
        'ps_label' => $dao->ps_label
    );
  }

  return $pricesets;
}

/**
 * Returns an array of all memberships.
 */
function _get_membership_types() {
  $sql = "SELECT id, name FROM civicrm_membership_type WHERE is_active = 1 ORDER BY id";
  if (!civicrm_initialize()) { return; }
  require_once 'CRM/Core/Config.php';
  $dao =& CRM_Core_DAO::executeQuery($sql, array());
  $memberships = array();
  while ($dao->fetch()) {
    $memberships[$dao->id] = array(
        'id' => $dao->id,
        'name' => $dao->name
    );
  }

  return $memberships;
}

/**
 * Returns an array of a membership.
 */
function _get_membership($id = 0) {
  // XXX: Membership API doesn't seem to support getting contact id
  // the same way Participant API works. Will post to API team with a patch.
  $sql = "SELECT id, contact_id FROM civicrm_membership WHERE id = ". $id;
  if (!civicrm_initialize()) { return; }
  require_once 'CRM/Core/Config.php';
  $dao =& CRM_Core_DAO::executeQuery($sql, array());
  $membership = array();
  while ($dao->fetch()) {
    $membership[$dao->id] = array(
        'id' => $dao->id,
        'contact_id' => $dao->contact_id
    );
  }

  return $membership;
}

/**
 * Returns an array of all organizations.
 */
function _get_organizations() {
  if (!civicrm_initialize()) { return; }
  $sql = "SELECT id, display_name AS name FROM civicrm_contact WHERE contact_type = 'Organization' AND is_deleted = 0 ORDER BY sort_name";
  $dao =& CRM_Core_DAO::executeQuery($sql, array(), $i18nRewrite = TRUE);
  $orgs = array();
  while ($dao->fetch()) {
    $orgs[$dao->id] = array('id' => $dao->id, 'name' => $dao->name);
  }

  return $orgs;
}

/**
 * Returns an array of a participant.
 */
function _get_participant($id = 0) {
  if ($id == 0) { return array(); }

  require_once 'api/v2/Participant.php';
  $params = array('participant_id' => $id);
  $result =& civicrm_participant_get($params);

  return $result;
}

function _get_code_assigned_to_org($contactid = 0) {
  $result = db_query(_sql_get_codes_by_org(), $contactid);
  $rows = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) {
    $rows[$row['cid']] = array('code' => $row['code'], 'description' => $row['description']);
  }

  return $rows;
}

/**
 * Returns the number of discounts assigned to an organization.
 */
function _get_code_tracking_by_org($contactid = 0) {
  if ($contactid == 0) { return 0; }
  $contacts = _get_civicrm_contacts();
  $result = db_query(_sql_get_tracking_details_org(), $contactid);
  $rows = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) {
    $track = unserialize($row['track']);
    $name = $contacts[$row['id']];
    $a = $rows[$row['cid']];
    if (!is_array($a)) { $a = array(); }

    $a = array(
        'rid' => $row['rid'],
        'cid' => $row['cid'],
        'code' => $row['code'],
        'id' => $row['id'],
        'name' => $name,
        'desc' => $row['description'],
        'time' => $row['date'],
        'track_type' => $track['type'],
        'track_id' => $track['id'],
        'track_desc' => $track['description'],
        'contribution_id' => $row['contribution_id'],
        'object_id' => $row['object_id'],
        'object_type' => $row['object_type'],
    );

    $rows[$row['cid']][] = $a;
  }

  return $rows;
}

/**
 * Returns an array of all code tracking information (changelog).
 */
function _get_code_tracking_details($contactid = 0, $codeid = 0) {
  $contacts = array();
  if ($contactid != 0) { $result = db_query(_sql_get_tracking_details(), $contactid); }
  else if ($codeid != 0) {
    $result = db_query(_sql_get_tracking_details_all(), $codeid);
    $contacts = _get_civicrm_contacts();
  } else { return array(); }
  $rows = array();
  while ($row = db_fetch_array($result, MYSQL_ASSOC)) {
    $track = unserialize($row['track']);
    $name = $contacts[$row['id']];
    $rows[] = array(
        'rid' => $row['rid'],
        'cid' => $row['cid'],
        'code' => $row['code'],
        'id' => $row['id'],
        'name' => $name,
        'desc' => $row['description'],
        'time' => $row['date'],
        'track_type' => $track['type'],
        'track_id' => $track['id'],
        'track_desc' => $track['description'],
        'contribution_id' => $row['contribution_id'],
        'object_id' => $row['object_id'],
        'object_type' => $row['object_type'],
    );
  }

  return $rows;
}

/**
 * Verify contact type is an organization.
 */
function _get_is_org($cid) {
  $sql = "SELECT contact_type FROM civicrm_contact WHERE id = $cid";
  if (!civicrm_initialize()) { return; }
  require_once 'CRM/Core/Config.php';
  $dao =& CRM_Core_DAO::executeQuery($sql, array());
  while ($dao->fetch()) {
    if ($dao->contact_type == "Organization") {
      return true;
    }   
  }

  return false;
}

/**
 * Clears the tracking information by row.
 */
function _delete_code_tracking_detail($rid = 0) {
  if ($rid == 0) { return; }
  $result = db_query(_sql_del_tracking_details(), $rid);

  return $result;
}

/**
 * Drupal variables
 */
function _get_chars() {
  return variable_get('civievent_discount_chars', 'abcdefghjklmnpqrstwxyz23456789+-_=');
}

function _get_chars_len() {
  return variable_get('civievent_discount_chars_len', '8');
}

function _get_allow_multiple() {
  return variable_get('civievent_discount_multiple_participants', '0');
}

function _get_ignore_case() {
  return variable_get('civievent_discount_ignore_case', '1');
}

/**
 * SQL statements
 */
function _sql_get_code() {
  return "SELECT cid, code, description, amount, amount_type, events, pricesets, memberships, organization, autodiscount, expiration, count_use, count_max FROM {civievent_discount} WHERE cid = %d";
}

function _sql_get_code_by_name() {
  return "SELECT cid, code, description, amount, amount_type, events, pricesets, memberships, autodiscount, expiration, count_use, count_max FROM {civievent_discount} WHERE code = '%s'";
}

function _sql_set_code() {
  return "INSERT INTO {civievent_discount} (description, amount, amount_type, events, pricesets, memberships, organization, autodiscount, expiration, count_use, count_max, code) VALUES ('%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', 0, %d, '%s')";
}

function _sql_update_code() {
  return "UPDATE {civievent_discount} SET description = '%s', amount = '%s', amount_type = '%s', events = '%s', pricesets = '%s', memberships = '%s', organization = %d, autodiscount = '%s', expiration = '%s', count_max = %d WHERE cid = %d";
}

function _sql_get_codes() {
  return "SELECT cid, code, description, amount, amount_type, events, pricesets, memberships, autodiscount, expiration, count_use, count_max FROM {civievent_discount}";
}

function _sql_get_codes_by_org() {
  return "SELECT cid, code, description FROM {civievent_discount} WHERE organization = %d";
}

function _sql_del_code() {
  return "DELETE FROM {civievent_discount} WHERE cid = %d";
}

function _sql_increment_counter() {
  return "UPDATE {civievent_discount} SET count_use = count_use + 1 WHERE cid = %d";
}

function _sql_decrement_counter() {
  return "UPDATE {civievent_discount} SET count_use = count_use - 1 WHERE cid = %d";
}

function _sql_get_tracking_details() {
  return "SELECT e.rid AS rid, e.fk_cid AS cid, e.contactid AS id, e.contribution_id AS contribution_id, e.object_id AS object_id, e.object_type AS object_type, e.timestamp AS date, e.track AS track, c.code AS code, c.description AS description FROM {civievent_discount_track} AS e LEFT JOIN {civievent_discount} AS c ON (c.cid = e.fk_cid) WHERE e.contactid = %d";
}

function _sql_get_tracking_details_all() {
  return "SELECT e.rid AS rid, e.fk_cid AS cid, e.contactid AS id, e.contribution_id AS contribution_id, e.object_id AS object_id, e.object_type AS object_type, e.timestamp AS date, e.track AS track, c.code AS code, c.description AS description FROM {civievent_discount_track} AS e LEFT JOIN {civievent_discount} AS c ON (c.cid = e.fk_cid) WHERE e.fk_cid = %d ORDER BY e.timestamp";
}

function _sql_get_tracking_details_org() {
  return "SELECT e.rid AS rid, e.fk_cid AS cid, e.contactid AS id, e.contribution_id AS contribution_id, e.object_id AS object_id, e.object_type AS object_type, e.timestamp AS date, e.track AS track, c.code AS code, c.description AS description FROM {civievent_discount_track} AS e LEFT JOIN {civievent_discount} AS c ON (c.cid = e.fk_cid) WHERE c.organization = %d";
}

function _sql_get_tracking_count() {
  return "SELECT count(rid) as count FROM {civievent_discount_track} WHERE contactid = %d";
}

function _sql_get_tracking_count_all() {
  return "SELECT fk_cid as id, count(rid) as count FROM {civievent_discount_track} GROUP BY id";
}

function _sql_get_tracking_by_org() {
  return "SELECT count(cid) as count FROM {civievent_discount} WHERE organization = %d";
}

function _sql_del_tracking_details() {
  return "DELETE FROM {civievent_discount_track} WHERE rid = %d";
}

function _sql_set_tracking() {
  return "INSERT INTO {civievent_discount_track} (fk_cid, contactid, contribution_id, object_id, object_type, timestamp, track) VALUES (%d, %d, %d, %d, '%s', %d, '%s')";
}
