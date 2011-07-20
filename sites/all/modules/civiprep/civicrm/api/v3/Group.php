<?php
/*
 +--------------------------------------------------------------------+
 | CiviCRM version 3.4                                                |
 +--------------------------------------------------------------------+
 | Copyright CiviCRM LLC (c) 2004-2011                                |
 +--------------------------------------------------------------------+
 | This file is a part of CiviCRM.                                    |
 |                                                                    |
 | CiviCRM is free software; you can copy, modify, and distribute it  |
 | under the terms of the GNU Affero General Public License           |
 | Version 3, 19 November 2007 and the CiviCRM Licensing Exception.   |
 |                                                                    |
 | CiviCRM is distributed in the hope that it will be useful, but     |
 | WITHOUT ANY WARRANTY; without even the implied warranty of         |
 | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.               |
 | See the GNU Affero General Public License for more details.        |
 |                                                                    |
 | You should have received a copy of the GNU Affero General Public   |
 | License and the CiviCRM Licensing Exception along                  |
 | with this program; if not, contact CiviCRM LLC                     |
 | at info[AT]civicrm[DOT]org. If you have questions about the        |
 | GNU Affero General Public License or the licensing of CiviCRM,     |
 | see the CiviCRM license FAQ at http://civicrm.org/licensing        |
 +--------------------------------------------------------------------+
 */

/**
 * File for the CiviCRM APIv3 group functions
 *
 * @package CiviCRM_APIv3
 * @subpackage API_Group
 * @copyright CiviCRM LLC (c) 2004-2011
 * @version $Id: Group.php 30171 2010-10-14 09:11:27Z mover $
 */

/**
 * Include utility functions
 */
require_once 'CRM/Contact/BAO/Group.php';
require_once 'api/v3/utils.php';

/**
 * create/update group
 *
 * This API is used to create new group or update any of the existing
 * In case of updating existing group, id of that particular grop must
 * be in $params array. Either id or name is required field in the
 * $params array
 *
 * @param array $params  (referance) Associative array of property
 *                       name/value pairs to insert in new 'group'
 *
 * @return array   returns id of the group created if success,
 *                 error message otherwise
 *
 * @access public
 */
function civicrm_api3_group_create( $params )
{
  _civicrm_api3_initialize(true );
  try{
     
    civicrm_api3_verify_mandatory($params,null,array('title'));
    $group = CRM_Contact_BAO_Group::create( $params );

    if ( is_null( $group ) ) {
      return civicrm_api3_create_error( 'Group not created' );
    } else {
      $values = array();
      _civicrm_api3_object_to_array_unique_fields($group, $values[$group->id]);
      return civicrm_api3_create_success($values,$params,$group );
    }
  } catch (PEAR_Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  } catch (Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  }
}

/**
 * Returns array of groups  matching a set of one or more group properties
 *
 * @param array $params  (referance) Array of one or more valid
 *                       property_name=>value pairs. If $params is set
 *                       as null, all groups will be returned
 *
 * @return array  (referance) Array of matching groups
 * @access public
 */
function civicrm_api3_group_get( $params )
{
  try{

    _civicrm_api3_initialize(true );
    civicrm_api3_verify_mandatory($params);

    $returnProperties = array( );
    foreach ( $params as $n => $v ) {
      if ( substr( $n, 0, 7 ) == 'return.' ) {
        $returnProperties[] = substr( $n, 7 );
      }
    }

    if( !empty($returnProperties) ){
      $returnProperties[] = 'id';
    }

    $groupObjects = CRM_Contact_BAO_Group::getGroups( $params, $returnProperties );
    if ( empty( $groupObjects ) ) {
        return civicrm_api3_create_error( 'No such group exists' );
    } 
    $groups       = array( );
    foreach( $groupObjects as $group ) {
      _civicrm_api3_object_to_array( $group, $groups[$group->id] );
    }

    return civicrm_api3_create_success ($groups);
  } catch (PEAR_Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  } catch (Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  }
}

/**
 * delete an existing group
 *
 * This method is used to delete any existing group. id of the group
 * to be deleted is required field in $params array
 *
 * @param array $params  (referance) array containing id of the group
 *                       to be deleted
 *
 * @return array  (referance) returns flag true if successfull, error
 *                message otherwise
 *
 * @access public
 */
function civicrm_api3_group_delete( $params )
{
  _civicrm_api3_initialize( true);
  try{
    civicrm_api3_verify_mandatory($params,null,array('id'));
    CRM_Contact_BAO_Group::discard( $params['id'] );
    return civicrm_api3_create_success( true );
  } catch (PEAR_Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  } catch (Exception $e) {
    return civicrm_api3_create_error( $e->getMessage() );
  }
}
