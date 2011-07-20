<?php
// $Id: dart_scheduler.admin.inc,v 1.2 2010/06/23 00:57:05 bleen18 Exp $

/**
 * @file
 * Admin form handling for DART Scheduler.
 */

/**
 * Event date format for scheduling DART tags.
 */
define('DART_EVENT_DATE_FORMAT', 'Y-m-d');

/**
 * List all the scheduled DART tag events.
 */
function dart_admin_event_list() {
  $header = array(
    array('data' => t('Tag Name'), 'field' => 'name'),
    array('data' => t('Event Type'), 'field' => 'event_type'),
    array('data' => t('Event Date'), 'field' => 'event_time'),
    array('data' => t('Operations')),
  );
  $result = db_query("SELECT dt.name, dts.* FROM {dart_tags_schedule} as dts LEFT JOIN {dart_tags} as dt ON dts.dtid = dt.dtid" . tablesort_sql($header));
  $rows = array();

  while ($tag = db_fetch_array($result)) {
    $row = array(
      'name' => $tag['name'],
      'event_type' => $tag['event_type'],
      'event_time' => date(DART_EVENT_DATE_FORMAT, strtotime($tag['event_time'])),
      'op' => l(t('Edit'), 'admin/build/adtag/schedule/' . $tag['dtsid'] . '/edit'),
    );
    $rows[] = $row;
  }
  if (empty($rows)) {
    $rows[] = array(array('data' => '<em>'. t('There are currently no scheduled events.') .'</em>', 'colspan' => 4));
  }

  $create_link = l('<input type="button" value="Schedule a new event" />', 'admin/build/adtag/schedule/create', array('html' => TRUE));
  return theme('table', $header, $rows) . $create_link;
}

/**
 * Form builder; Create a scheduled event.
 */
function dart_admin_event(&$form_state, $edit=array()) {
  // Create an array of all tags to use as options.
  $dtids = array();
  $result = db_query('SELECT dtid, name FROM {dart_tags} ORDER BY name');
  while ($row = db_fetch_array($result)) {
    $dtids[$row['dtid']] = $row['name'] . ' [' . $row['dtid'] . ']';
  }

  // Create an array of event types to use as options.
  $event_types = array(
    'activate' => 'activate',
    'deactivate' => 'deactivate',
  );

  $form['dtid'] = array(
    '#type' => 'select',
    '#options' => $dtids,
    '#title' => t('Tag'),
    '#required' => TRUE,
    '#default_value' => isset($edit['dtid']) ? $edit['dtid'] : '',
  );
  $form['event_type'] = array(
    '#type' => 'select',
    '#options' => $event_types,
    '#title' => t('Type'),
    '#required' => TRUE,
    '#default_value' => isset($edit['event_type']) ? $edit['event_type'] : 'activate',
  );
  $form['event_time'] = array(
    '#type' => 'textfield',
    '#title' => t('When'),
    '#required' => TRUE,
    '#default_value' => isset($edit['event_time']) ? $edit['event_time'] : '',
    '#description' => t('Format: YYYY-MM-DD.'),
  );
  if (module_exists('date_popup')) {
    $form['event_time']['#type'] = 'date_popup';
    $form['event_time']['#date_format'] = DART_EVENT_DATE_FORMAT;
    $form['event_time']['#date_year_range'] = '0:+10';
    unset($form['event_time']['#description']);
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Schedule Event'),
  );

  if (isset($edit['dtsid'])) {
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Reschedule Event'),
    );
    $form['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Cancel Event'),
    );
    $form['dtsid'] = array(
      '#type' => 'value',
      '#value' => $edit['dtsid'],
    );
  }

  return $form;
}

/**
 * Form validation function for admin event form.
 */
function dart_admin_event_validate($form, &$form_state) {
  // Ensure that new events don't happen in the past.
  if ($form_state['values']['event_time'] && !isset($form_state['values']['dtsid'])) {
    if (strtotime($form_state['values']['event_time']) < strtotime(date(DART_EVENT_DATE_FORMAT))) {
      form_set_error('event_time', t('You cannot schedule an event in the past.'));
    }
  }
}

/**
 * Form submit function for admin event form.
 */
function dart_admin_event_submit($form, &$form_state) {
  switch ($form_state['values']['op']) {
    case t('Schedule Event'):
      drupal_write_record('dart_tags_schedule', $form_state['values']);
      drupal_set_message(t('The DART tag event has been scheduled.'));
      break;
    case t('Reschedule Event'):
      drupal_write_record('dart_tags_schedule', $form_state['values'], 'dtsid');
      drupal_set_message(t('The DART tag event has been rescheduled.'));
      break;
  }
  $form_state['redirect'] = 'admin/build/adtag/schedule';
}

/**
 * Form builder for the DART event delete confirmation form.
 */
function dart_admin_event_confirm_delete(&$form_state, $dart_event) {
  $form['dtsid'] = array(
    '#type' => 'value',
    '#value' => $dart_event->dtsid,
  );
  $question = t("Are you sure you want to cancel this event?");
  $path = 'admin/build/adtag/schedule';
  $description = t('This action cannot be undone.');
  return confirm_form($form, $question, $path, $description, t('Cancel Event'), t('Never Mind'));
}

/**
 * Submit handler to delete a DART event after confirmation.
 */
function dart_admin_event_confirm_delete_submit($form, &$form_state) {
  dart_event_delete($form_state['values']['dtsid']);
  drupal_set_message(t('Canceled this scheduled event.'));
  $form_state['redirect'] = 'admin/build/adtag/schedule';
  return;
}
