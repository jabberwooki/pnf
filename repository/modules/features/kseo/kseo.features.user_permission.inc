<?php
/**
 * @file
 * kseo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kseo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer page titles'.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'set page title'.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'page_title',
  );

  return $permissions;
}
