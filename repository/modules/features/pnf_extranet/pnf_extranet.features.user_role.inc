<?php
/**
 * @file
 * pnf_extranet.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pnf_extranet_user_default_roles() {
  $roles = array();

  // Exported role: gestionnaire extranet.
  $roles['gestionnaire extranet'] = array(
    'name' => 'gestionnaire extranet',
    'weight' => 6,
    'machine_name' => '',
    'extranet_role' => 0,
  );

  return $roles;
}
