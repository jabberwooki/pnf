<?php
/**
 * @file
 * pnf_extranet.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_extranet_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create extranet_doc content'.
  $permissions['create extranet_doc content'] = array(
    'name' => 'create extranet_doc content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any extranet_doc content'.
  $permissions['delete any extranet_doc content'] = array(
    'name' => 'delete any extranet_doc content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own extranet_doc content'.
  $permissions['delete own extranet_doc content'] = array(
    'name' => 'delete own extranet_doc content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any extranet_doc content'.
  $permissions['edit any extranet_doc content'] = array(
    'name' => 'edit any extranet_doc content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own extranet_doc content'.
  $permissions['edit own extranet_doc content'] = array(
    'name' => 'edit own extranet_doc content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished extranet_doc content'.
  $permissions['view any unpublished extranet_doc content'] = array(
    'name' => 'view any unpublished extranet_doc content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
