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
    'weight' => 5,
    'machine_name' => '',
    'extranet_role' => 0,
  );

  // Exported role: rédacteur.
  $roles['rédacteur'] = array(
    'name' => 'rédacteur',
    'weight' => 2,
    'machine_name' => '',
    'extranet_role' => 0,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 4,
    'machine_name' => '',
    'extranet_role' => 0,
  );

  return $roles;
}
