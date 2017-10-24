<?php
/**
 * @file
 * pnf_consultations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_consultations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create public_consultation content'.
  $permissions['create public_consultation content'] = array(
    'name' => 'create public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any public_consultation content'.
  $permissions['delete any public_consultation content'] = array(
    'name' => 'delete any public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own public_consultation content'.
  $permissions['delete own public_consultation content'] = array(
    'name' => 'delete own public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any public_consultation content'.
  $permissions['edit any public_consultation content'] = array(
    'name' => 'edit any public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own public_consultation content'.
  $permissions['edit own public_consultation content'] = array(
    'name' => 'edit own public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished public_consultation content'.
  $permissions['view any unpublished public_consultation content'] = array(
    'name' => 'view any unpublished public_consultation content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
