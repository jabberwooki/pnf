<?php
/**
 * @file
 * kcore.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kcore_user_default_roles() {
  $roles = array();

  // Exported role: administrateur.
  $roles['administrateur'] = array(
    'name' => 'administrateur',
    'weight' => 4,
    'machine_name' => '',
  );

  // Exported role: rédacteur.
  $roles['rédacteur'] = array(
    'name' => 'rédacteur',
    'weight' => 2,
    'machine_name' => '',
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
    'machine_name' => '',
  );

  return $roles;
}
