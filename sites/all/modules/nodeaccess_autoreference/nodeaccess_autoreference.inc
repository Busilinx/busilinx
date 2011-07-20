<?php

/**
 * @file
 *   Include file
 *
 * @version: $Id: nodeaccess_autoreference.inc,v 1.1.2.5 2009/07/16 15:30:59 kenorb Exp $
 *
 * @developers:
 *    Rafal Wieczorek <kenorb@gmail.com>
 *    Konrad Wieczorek <kw.keth@gmail.com>
 */

/**
 * Find nid or uid connection by scanning the object
 *
 * @param object $obj
 *   node object
 * @param object $user
 *   current user object
 * @param array $path
 *   array of path passed by referenced (should be empty on first call)
 * @param integer $depth optional
 *   optional parameter for depth checking
 * @return matches
 *   returns all matches where connection has been found
 * 
 */
function nodeaccess_autoreference_obj_connected($obj, $user = NULL, &$path, $depth = 0) {
    $type = $obj[0];
    $obj = $obj[1];
    if ($depth == 0) {
      $path = array(); // reset path on init
      if (empty($user)) {
        global $user;
      }
    }
    if (nodeaccess_autoreference_same_objs($user, $obj)) { // if objects are the same, then mark as found
      $path[] = $field_name;
      return TRUE;
    }

    $refs = nodeaccess_autoreference_obj_references(array($type, $obj));
    foreach ($refs as $field_name => $ref) {
      global $na_skip_next_load;
      $na_skip_next_load = TRUE;

      $n_obj = NULL;
      if (isset($ref['uid'])) {
        $n_obj = user_load(array('uid' => $ref['uid']));
      } else if (isset($ref['nid'])) {
        $n_obj = node_load(array('nid' => $ref['nid']));
      }
      if (nodeaccess_autoreference_same_objs($user, $n_obj)) {
        $path[] = $field_name;
        return TRUE; 
      } else {
        $ret = nodeaccess_autoreference_obj_connected(array(key($ref), $n_obj), $user, $path, $depth+1);
      }
      if ($ret) {
        $path[] = $field_name;
        return $ret;
      }
    }
    return FALSE;
}

/**
 * Compare the objects if are the same
 *
 * @param object $a
 *   could be user or node object
 * @param object $b
 *   could be user or node object
 * @return bool
 *   returns TRUE if objects are the same, otherwise FALSE
 * 
 */
function nodeaccess_autoreference_same_objs($a, $b) {
  return ($a->uid == $b->uid && $a->type == $b->type);
}

/**
 * Find nid or uid connection by scanning the object
 *
 * @param object $obj
 *   could be user or node object
 * @return matches
 *   returns all matches where connection has been found
 * 
 */
function nodeaccess_autoreference_obj_references($obj) { // data = user/node
  $type = $obj[0];
  $obj = $obj[1];
  $matches = array();

  if (variable_get('nodeaccess_autoreference_via_owner', FALSE)) {
    if ($type == 'nid') {
      $matches[]['uid'] = $obj->uid;
    }
  } else if (is_array($obj) || is_object($obj)) {
    foreach ($obj as $field_name => $value) {
      if (is_array($value) || is_object($value)) {
        foreach ($value as $key2 => $value2) {
          if (is_array($value2)) {
            if (!empty($value2['uid'])) {
              $field_info = content_fields($field_name);
              if ($field_info['type'] == 'userreference') { /* support for userreference module */
                $uid = $value2['uid'];
                $matches["$field_name|uid|$uid"]['uid'] = $uid;
              }
            } else
            if (!empty($value2['nid']) && module_exists('content_profile')) { /* support for nodereference module pointed to user profiles */
              $nid = $value2['nid'];
              $content_type = db_result(db_query("SELECT type FROM {node} WHERE nid = %d", $nid)); // fast method
              if (!$content_type) {
                $tmp_node = node_load($nid);  // second method (if table has been emptied before rebuild)
                $content_type = $tmp_node->type;
              }
              $profile_types = content_profile_get_types('names', 'registration_use');
              if (array_key_exists($content_type, $profile_types)) {
                $matches["$field_name|nid|$nid"]['nid'] = $nid;
              }
            }
          }
        }
      }
    }
  }

  return $matches;
}

/**
 * Get array of grants for specified node
 *
 * @param object $node
 *   could be user or node object
 * @return array
 *   returns array of grants for current user, otherwise NULL
 * 
 */
function nodeaccess_autoreference_node_get_grants($node) {
  module_load_include('inc', 'nodeaccess_autoreference'); // load additional function from included file
  global $user;
  $connected = nodeaccess_autoreference_obj_connected(array('nid', $node), $user, $path);
  if ($connected) {
    $grants = array();
    $grants[] = array(
      'nid' => $node->nid,
      'gid' => $user->uid,
      'realm' => 'nodeaccess_autoreference_owner',
      'grant_view' => '1',
      'grant_update' => user_access("edit referenced $node->type content"),
      'grant_delete' => user_access("delete referenced $node->type content"),
    );
    return $grants;
  } else {
    return NULL;
  }
}

