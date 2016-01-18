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
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_categories'.
  $permissions['delete terms in event_categories'] = array(
    'name' => 'delete terms in event_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in event_categories'.
  $permissions['edit terms in event_categories'] = array(
    'name' => 'edit terms in event_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
