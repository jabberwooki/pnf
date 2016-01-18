<?php
/**
 * @file
 * pnf_jobs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pnf_jobs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-jobs.
  $menus['menu-menu-jobs'] = array(
    'menu_name' => 'menu-menu-jobs',
    'title' => 'Menu emplois',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu emplois');

  return $menus;
}
