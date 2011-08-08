<?php

/*
 * Implements hook_views_data
 */
function civievent_discount_views_data() {

  // Discount Codes assigned
  $data['civievent_discount']['table']['group'] = t('Discount Codes');
  // Advertise this table as a possible base table
  $data['civievent_discount']['table']['base'] = array(
    'field' => 'cid',
    'title' => t('Code'),
    'help' => t("Discount codes."),
    'weight' => -10,
  );
  
  $data['civievent_discount']['table']['join'] = array(
    // Directly links to redemptions.
    'civievent_discount_track' => array(
      'left_field' => 'fk_cid',
      'field' => 'cid',
    ),
  );

  // Fields for Discount Codes
  $data['civievent_discount']['cid'] = array(
    'title' => t('Code ID'),
    'help' => t('The numeric ID of the opened record'),
    'field' => array(
       'handler' => 'views_handler_field_numeric',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );
  
  $data['civievent_discount']['code'] = array(
    'title' => t('Discount Code'),
    'help' => t('The unique string for discounting prices.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['civievent_discount']['description'] = array(
    'title' => t('Description'),
    'help' => t('Description for discount codes.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['civievent_discount']['count_use'] = array(
    'title' => t('Usage count'),
    'help' => t('Number of usages of the discount code.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
  );

  $data['civievent_discount']['count_max'] = array(
    'title' => t('Maximum Usages'),
    'help' => t('Maximum allowed usages of the discount code.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
  );
  
  $data['civievent_discount']['amount'] = array(
    'title' => t('Discount amount'),
    'help' => t('Amount of discount code.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
  );
  
  $data['civievent_discount']['amount_type'] = array(
    'title' => t('Discount amount type'),
    'help' => t('Amount type of discount code.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['civievent_discount']['events'] = array(
    'title' => t('Events'),
    'help' => t('The events tied to the code.'),
    'field' => array(
      'handler' => 'civievent_discount_handler_field_list',
    ),
  );
  
  $data['civievent_discount']['memberships'] = array(
    'title' => t('Memberships'),
    'help' => t('The memberships tied to the code.'),
    'field' => array(
      'handler' => 'civievent_discount_handler_field_list',
    ),
  );
  
  $data['civievent_discount']['pricesets'] = array(
    'title' => t('Pricesets'),
    'help' => t('The pricesets tied to the code.'),
    'field' => array(
      'handler' => 'civievent_discount_handler_field_list',
    ),
  );
  
  $data['civievent_discount']['autodiscount'] = array(
    'title' => t('Autodiscount'),
    'help' => t('The memberships which get automatic discounts on events.'),
    'field' => array(
      'handler' => 'civievent_discount_handler_field_list',
    ),
  );

  $data['civievent_discount']['expiration'] = array(
    'title' => t('Expiration'),
    'help' => t('The expiry date for the code.'),
    'field' => array(
      'handler' => 'civicrm_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'civicrm_handler_filter_datetime',
    ),
    'sort' => array(
      'handler' => 'civicrm_handler_sort_date',
    ),
  );
  
  $data['civievent_discount']['organization'] = array(
    'title' => t('Organization'),
    'help' => t('The organization that manages the code.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
       'base' => 'civicrm_contact',
       'field' => 'id',
       'label' => t('Civi Organization'),
    ),
  );
  
  $data['civievent_discount']['edit'] = array(
    'title' => t('Edit'),
    'help' => t('Link to edit the discount code.'),
    'field' => array(
      'handler' => 'civievent_discount_handler_field_edit_link',
    ),
  );
  
  //////////////////
  // Code redemptions
  $data['civievent_discount_track']['table']['group'] = t('Code redemptions');

  // Code redemptions can be shown in it's own base table
  $data['civievent_discount_track']['table']['base'] = array(
    'field' => 'rid',
    'title' => t('Redemption'),
    'help' => t("Code redemptions."),
    'weight' => -10,
  );

  // Fields for Discount Tracks
  $data['civievent_discount_track']['rid'] = array(
    'title' => t('Redemption ID'),
    'help' => t('The numeric ID of the opened record'),
    'field' => array(
       'handler' => 'views_handler_field_numeric',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );
  
  $data['civievent_discount_track']['contactid'] = array(
    'title' => t('Contact ID'),
    'help' => t('The contact ID of who redeemed the discount code.'),
    'field' => array(
       'handler' => 'views_handler_field_numeric',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );  

  $data['civievent_discount_track']['contribution_id'] = array(
    'title' => t('Contribution ID'),
    'help' => t('The contribution ID for the discount code.'),
    'field' => array(
       'handler' => 'views_handler_field_numeric',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );

  $data['civievent_discount_track']['object_id'] = array(
    'title' => t('Object ID'),
    'help' => t('The object (membership, event) ID for the discount code.'),
    'field' => array(
       'handler' => 'views_handler_field_numeric',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );
  
  $data['civievent_discount_track']['object_type'] = array(
    'title' => t('Object Type'),
    'help' => t('The object type (event, membership) tied to the discount code.'),
    'field' => array(
       'handler' => 'views_handler_field',
       'click sortable' => TRUE,
     ),
     'argument' => array(
        'handler' => 'views_handler_argument',
        'numeric' => TRUE,
     ),
     'filter' => array(
        'handler' => 'views_handler_filter',
        'allow empty' => TRUE,
     ),
     'sort' => array(
        'handler' => 'views_handler_sort',
     ),
  );
  
  $data['civievent_discount_track']['text_link'] = array(
    'field' => array(
       'title' => t('Object Link'),
       'help' => t('Creates a Link to the member or event registration record.'),
       'handler' => 'civievent_discount_handler_field_track',
    ),
  );
  
  $data['civievent_discount_track']['timestamp'] = array(
    'title' => t('Date'),
    'help' => t('Date of code redemption'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
  );

  // Join with CiviCRM Contacts
  $data['civicrm_contact']['table']['join'] = array(
    // Directly links to code redemptions.
    'civievent_discount_track' => array(
      'left_field' => 'contactid',
      'field' => 'id',
    ),
    // Directly links to codes assigned to organization.
    'civievent_discount' => array(
      'left_field' => 'organization',
      'field' => 'id',
    ),
  );

  // Join with CiviCRM Memberships
  $data['civicrm_membership']['table']['join'] = array(
    // Link memberships with redemptions
    'civievent_discount_track' => array(
      'left_field' => 'object_id',
      'field' => 'id',
      'extra' => 'object_type = "Membership"',
    ),
  );

  // Join with CiviCRM Events
  $data['civicrm_event']['table']['join'] = array(
    // Link events with redemptions
    'civievent_discount_track' => array(
      'left_field' => 'object_id',
      'field' => 'id',
      'extra' => 'object_type = "Event"',
    ),
  );

  // Join with CiviCRM Contributions
  $data['civicrm_contribution']['table']['join'] = array(
    // Link memberships with redemptions
    'civievent_discount_track' => array(
      'left_field' => 'contribution_id',
      'field' => 'id',
    ),
  );
  
  return $data;
}

// Telling Views where to get the Handlers
function civievent_discount_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'civievent_discount') . '/views',
    ),
    'handlers' => array(
      'civievent_discount_handler_field_edit_link' => array(
        'parent' => 'views_handler_field',
      ),
      'civievent_discount_handler_field_list' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
