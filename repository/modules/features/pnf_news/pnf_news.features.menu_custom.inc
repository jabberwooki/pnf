<?php
/**
 * @file
 * pnf_news.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pnf_news_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-news.
  $menus['menu-news'] = array(
    'menu_name' => 'menu-news',
    'title' => 'Actualités',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');


  return $menus;
}
