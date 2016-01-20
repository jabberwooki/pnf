<?php
/**
 * @file
 * pnf_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pnf_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in news_categories'.
  $permissions['add terms in news_categories'] = array(
    'name' => 'add terms in news_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in news_tags'.
  $permissions['add terms in news_tags'] = array(
    'name' => 'add terms in news_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in news_types'.
  $permissions['add terms in news_types'] = array(
    'name' => 'add terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer menu-news menu items'.
  $permissions['administer menu-news menu items'] = array(
    'name' => 'administer menu-news menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_categories'.
  $permissions['delete terms in news_categories'] = array(
    'name' => 'delete terms in news_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_tags'.
  $permissions['delete terms in news_tags'] = array(
    'name' => 'delete terms in news_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_types'.
  $permissions['delete terms in news_types'] = array(
    'name' => 'delete terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'rédacteur' => 'rédacteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_categories'.
  $permissions['edit terms in news_categories'] = array(
    'name' => 'edit terms in news_categories',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_tags'.
  $permissions['edit terms in news_tags'] = array(
    'name' => 'edit terms in news_tags',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_types'.
  $permissions['edit terms in news_types'] = array(
    'name' => 'edit terms in news_types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
