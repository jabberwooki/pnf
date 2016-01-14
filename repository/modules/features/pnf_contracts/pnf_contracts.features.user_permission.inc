<?php
/**
 * @file
 * pnf_contracts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_contracts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in contract_categories'.
  $permissions['add terms in contract_categories'] = array(
    'name' => 'add terms in contract_categories',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create contract content'.
  $permissions['create contract content'] = array(
    'name' => 'create contract content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contract content'.
  $permissions['delete any contract content'] = array(
    'name' => 'delete any contract content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contract content'.
  $permissions['delete own contract content'] = array(
    'name' => 'delete own contract content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in contract_categories'.
  $permissions['delete terms in contract_categories'] = array(
    'name' => 'delete terms in contract_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any contract content'.
  $permissions['edit any contract content'] = array(
    'name' => 'edit any contract content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contract content'.
  $permissions['edit own contract content'] = array(
    'name' => 'edit own contract content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in contract_categories'.
  $permissions['edit terms in contract_categories'] = array(
    'name' => 'edit terms in contract_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
