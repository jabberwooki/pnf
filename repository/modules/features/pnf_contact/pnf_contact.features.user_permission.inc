<?php
/**
 * @file
 * pnf_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any contact bean'.
  $permissions['create any contact bean'] = array(
    'name' => 'create any contact bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any contact bean'.
  $permissions['delete any contact bean'] = array(
    'name' => 'delete any contact bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any contact bean'.
  $permissions['edit any contact bean'] = array(
    'name' => 'edit any contact bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any contact bean'.
  $permissions['view any contact bean'] = array(
    'name' => 'view any contact bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
