<?php
/**
 * @file
 * kcore.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kcore_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access direct download file'.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'download_file',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add terms in public'.
  $permissions['add terms in public'] = array(
    'name' => 'add terms in public',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in sectors'.
  $permissions['add terms in sectors'] = array(
    'name' => 'add terms in sectors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer account settings'.
  $permissions['administer account settings'] = array(
    'name' => 'administer account settings',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'user_settings_access',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer admin role'.
  $permissions['administer admin role'] = array(
    'name' => 'administer admin role',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'user_settings_access',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer boxes'.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'administer coffee'.
  $permissions['administer coffee'] = array(
    'name' => 'administer coffee',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom breadcrumbs'.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer download file'.
  $permissions['administer download file'] = array(
    'name' => 'administer download file',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'download_file',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer less'.
  $permissions['administer less'] = array(
    'name' => 'administer less',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'less',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu fields'.
  $permissions['administer menu fields'] = array(
    'name' => 'administer menu fields',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu_fields',
  );

  // Exported permission: 'administer menu-footer-menu menu items'.
  $permissions['administer menu-footer-menu menu items'] = array(
    'name' => 'administer menu-footer-menu menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-join-national-park menu items'.
  $permissions['administer menu-join-national-park menu items'] = array(
    'name' => 'administer menu-join-national-park menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-menu-park menu items'.
  $permissions['administer menu-menu-park menu items'] = array(
    'name' => 'administer menu-menu-park menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-menu-themes menu items'.
  $permissions['administer menu-menu-themes menu items'] = array(
    'name' => 'administer menu-menu-themes menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-national-parks menu items'.
  $permissions['administer menu-national-parks menu items'] = array(
    'name' => 'administer menu-national-parks menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-tools menu items'.
  $permissions['administer menu-tools menu items'] = array(
    'name' => 'administer menu-tools menu items',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'administer pdf reader'.
  $permissions['administer pdf reader'] = array(
    'name' => 'administer pdf reader',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'pdf_reader',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in public'.
  $permissions['delete terms in public'] = array(
    'name' => 'delete terms in public',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sectors'.
  $permissions['delete terms in sectors'] = array(
    'name' => 'delete terms in sectors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit boxes'.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'boxes',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit terms in public'.
  $permissions['edit terms in public'] = array(
    'name' => 'edit terms in public',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sectors'.
  $permissions['edit terms in sectors'] = array(
    'name' => 'edit terms in sectors',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'features',
  );

  // Exported permission: 'preview focal point'.
  $permissions['preview focal point'] = array(
    'name' => 'preview focal point',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'focal_point',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
    'name' => 'show format selection for entityform',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for menu_fields'.
  $permissions['show format selection for menu_fields'] = array(
    'name' => 'show format selection for menu_fields',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for paragraphs_item'.
  $permissions['show format selection for paragraphs_item'] = array(
    'name' => 'show format selection for paragraphs_item',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for scald_atom'.
  $permissions['show format selection for scald_atom'] = array(
    'name' => 'show format selection for scald_atom',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrateur' => 'administrateur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use PHP for service visibility'.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'service_links',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'use php in custom breadcrumbs'.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrateur' => 'administrateur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrateur' => 'administrateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrateur' => 'administrateur',
      'rédacteur' => 'rédacteur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  return $permissions;
}
