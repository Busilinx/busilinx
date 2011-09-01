<?php

/**
 * Implementation of hook_user_default_roles().
 */
function article_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: advertiser
  $roles['advertiser'] = array(
    'name' => 'advertiser',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: blogger
  $roles['blogger'] = array(
    'name' => 'blogger',
  );

  // Exported role: complimentary subscriber
  $roles['complimentary subscriber'] = array(
    'name' => 'complimentary subscriber',
  );

  // Exported role: contributor
  $roles['contributor'] = array(
    'name' => 'contributor',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  // Exported role: sales
  $roles['sales'] = array(
    'name' => 'sales',
  );

  // Exported role: subscriber
  $roles['subscriber'] = array(
    'name' => 'subscriber',
  );

  // Exported role: unauthenticated user
  $roles['unauthenticated user'] = array(
    'name' => 'unauthenticated user',
  );

  return $roles;
}
