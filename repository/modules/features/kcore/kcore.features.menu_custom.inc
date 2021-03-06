<?php
/**
 * @file
 * kcore.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kcore_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-join-national-park.
  $menus['menu-join-national-park'] = array(
    'menu_name' => 'menu-join-national-park',
    'title' => 'Visit the National Park',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-menu-park.
  $menus['menu-menu-park'] = array(
    'menu_name' => 'menu-menu-park',
    'title' => 'Menu du parc',
    'description' => 'Le menu du parc national.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-menu-themes.
  $menus['menu-menu-themes'] = array(
    'menu_name' => 'menu-menu-themes',
    'title' => 'Menu thématique FR',
    'description' => '',
    'language' => 'fr',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-menu-themes-en.
  $menus['menu-menu-themes-en'] = array(
    'menu_name' => 'menu-menu-themes-en',
    'title' => 'Menu thématique EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-national-parks.
  $menus['menu-national-parks'] = array(
    'menu_name' => 'menu-national-parks',
    'title' => 'Les parcs nationaux de France',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-tools.
  $menus['menu-tools'] = array(
    'menu_name' => 'menu-tools',
    'title' => 'Barre d\'outils latérale',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Barre d\'outils latérale');
  t('Footer menu');
  t('Le menu du parc national.');
  t('Les parcs nationaux de France');
  t('Main menu');
  t('Menu du parc');
  t('Menu thématique EN');
  t('Menu thématique FR');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Visit the National Park');

  return $menus;
}
