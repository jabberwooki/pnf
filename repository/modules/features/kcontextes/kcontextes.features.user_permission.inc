<?php
/**
 * @file
 * kcontextes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kcontextes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'context_ui',
  );

  return $permissions;
}
