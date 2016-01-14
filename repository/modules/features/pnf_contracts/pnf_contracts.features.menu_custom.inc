<?php
/**
 * @file
 * pnf_contracts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pnf_contracts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-public-contracts.
  $menus['menu-menu-public-contracts'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'title' => 'Menu marchés publics',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu marchés publics');

  return $menus;
}
