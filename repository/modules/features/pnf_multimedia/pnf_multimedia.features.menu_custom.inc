<?php
/**
 * @file
 * pnf_multimedia.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pnf_multimedia_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-multimedia.
  $menus['menu-multimedia'] = array(
    'menu_name' => 'menu-multimedia',
    'title' => 'Médiathèque',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Médiathèque');


  return $menus;
}
