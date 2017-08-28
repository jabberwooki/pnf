<?php
/**
 * @file
 * pnf_scientific_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_scientific_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in scientific_themes'.
  $permissions['add terms in scientific_themes'] = array(
    'name' => 'add terms in scientific_themes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create scientific_report content'.
  $permissions['create scientific_report content'] = array(
    'name' => 'create scientific_report content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any scientific_report content'.
  $permissions['delete any scientific_report content'] = array(
    'name' => 'delete any scientific_report content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own scientific_report content'.
  $permissions['delete own scientific_report content'] = array(
    'name' => 'delete own scientific_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in scientific_themes'.
  $permissions['delete terms in scientific_themes'] = array(
    'name' => 'delete terms in scientific_themes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any scientific_report content'.
  $permissions['edit any scientific_report content'] = array(
    'name' => 'edit any scientific_report content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own scientific_report content'.
  $permissions['edit own scientific_report content'] = array(
    'name' => 'edit own scientific_report content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in scientific_themes'.
  $permissions['edit terms in scientific_themes'] = array(
    'name' => 'edit terms in scientific_themes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
