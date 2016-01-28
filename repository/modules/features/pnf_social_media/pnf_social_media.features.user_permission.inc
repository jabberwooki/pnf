<?php
/**
 * @file
 * pnf_social_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_social_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer addtoany'.
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'addtoany',
  );

  return $permissions;
}
