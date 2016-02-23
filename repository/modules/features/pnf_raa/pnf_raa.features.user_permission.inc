<?php
/**
 * @file
 * pnf_raa.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_raa_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in raa_categories'.
  $permissions['add terms in raa_categories'] = array(
    'name' => 'add terms in raa_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create raa content'.
  $permissions['create raa content'] = array(
    'name' => 'create raa content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any raa content'.
  $permissions['delete any raa content'] = array(
    'name' => 'delete any raa content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own raa content'.
  $permissions['delete own raa content'] = array(
    'name' => 'delete own raa content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in raa_categories'.
  $permissions['delete terms in raa_categories'] = array(
    'name' => 'delete terms in raa_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any raa content'.
  $permissions['edit any raa content'] = array(
    'name' => 'edit any raa content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own raa content'.
  $permissions['edit own raa content'] = array(
    'name' => 'edit own raa content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in raa_categories'.
  $permissions['edit terms in raa_categories'] = array(
    'name' => 'edit terms in raa_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
