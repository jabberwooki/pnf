<?php
/**
 * @file
 * pnf_jobs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_jobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in job_types'.
  $permissions['add terms in job_types'] = array(
    'name' => 'add terms in job_types',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job content'.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in job_types'.
  $permissions['delete terms in job_types'] = array(
    'name' => 'delete terms in job_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in job_types'.
  $permissions['edit terms in job_types'] = array(
    'name' => 'edit terms in job_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
