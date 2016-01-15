<?php
/**
 * @file
 * pnf_advanced_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_advanced_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create advanced_page content'.
  $permissions['create advanced_page content'] = array(
    'name' => 'create advanced_page content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any advanced_page content'.
  $permissions['delete any advanced_page content'] = array(
    'name' => 'delete any advanced_page content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advanced_page content'.
  $permissions['delete own advanced_page content'] = array(
    'name' => 'delete own advanced_page content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any advanced_page content'.
  $permissions['edit any advanced_page content'] = array(
    'name' => 'edit any advanced_page content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advanced_page content'.
  $permissions['edit own advanced_page content'] = array(
    'name' => 'edit own advanced_page content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
