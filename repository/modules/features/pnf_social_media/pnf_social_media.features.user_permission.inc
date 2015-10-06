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

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'service_links',
  );

  return $permissions;
}
