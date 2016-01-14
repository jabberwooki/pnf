<?php
/**
 * @file
 * pnf_multimedia.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_multimedia_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'add terms in media_categories'.
  $permissions['add terms in media_categories'] = array(
    'name' => 'add terms in media_categories',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in scald_authors'.
  $permissions['add terms in scald_authors'] = array(
    'name' => 'add terms in scald_authors',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in scald_tags'.
  $permissions['add terms in scald_tags'] = array(
    'name' => 'add terms in scald_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer dailymotion imports'.
  $permissions['administer dailymotion imports'] = array(
    'name' => 'administer dailymotion imports',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'scald_dailymotion',
  );

  // Exported permission: 'administer dnd'.
  $permissions['administer dnd'] = array(
    'name' => 'administer dnd',
    'roles' => array(),
    'module' => 'dnd',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of audio type'.
  $permissions['create atom of audio type'] = array(
    'name' => 'create atom of audio type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of gallery type'.
  $permissions['create atom of gallery type'] = array(
    'name' => 'create atom of gallery type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'delete terms in media_categories'.
  $permissions['delete terms in media_categories'] = array(
    'name' => 'delete terms in media_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in scald_authors'.
  $permissions['delete terms in scald_authors'] = array(
    'name' => 'delete terms in scald_authors',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in scald_tags'.
  $permissions['delete terms in scald_tags'] = array(
    'name' => 'delete terms in scald_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'edit terms in media_categories'.
  $permissions['edit terms in media_categories'] = array(
    'name' => 'edit terms in media_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in scald_authors'.
  $permissions['edit terms in scald_authors'] = array(
    'name' => 'edit terms in scald_authors',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in scald_tags'.
  $permissions['edit terms in scald_tags'] = array(
    'name' => 'edit terms in scald_tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'import dailymotion videos'.
  $permissions['import dailymotion videos'] = array(
    'name' => 'import dailymotion videos',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'scald_dailymotion',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(),
    'module' => 'scald',
  );

  return $permissions;
}
