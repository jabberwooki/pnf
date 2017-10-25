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

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

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

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own public_consultation content'.
  $permissions['edit own public_consultation content'] = array(
    'name' => 'edit own public_consultation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'view any unpublished public_consultation content'.
  $permissions['view any unpublished public_consultation content'] = array(
    'name' => 'view any unpublished public_consultation content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
