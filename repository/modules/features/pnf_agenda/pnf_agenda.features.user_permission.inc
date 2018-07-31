<?php
/**
 * @file
 * pnf_agenda.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_agenda_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in event_categories'.
  $permissions['add terms in event_categories'] = array(
    'name' => 'add terms in event_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
      'redacteur actualites agenda' => 'redacteur actualites agenda',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'delete terms in event_categories'.
  $permissions['delete terms in event_categories'] = array(
    'name' => 'delete terms in event_categories',
    'roles' => array(
      'redacteur actualites agenda' => 'redacteur actualites agenda',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_categories'.
  $permissions['edit terms in event_categories'] = array(
    'name' => 'edit terms in event_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
      'redacteur actualites agenda' => 'redacteur actualites agenda',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
