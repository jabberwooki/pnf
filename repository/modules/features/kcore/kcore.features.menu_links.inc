<?php
/**
 * @file
 * kcore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kcore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-park_marchs-publics:marches-publics
  $menu_links['menu-menu-park_marchs-publics:marches-publics'] = array(
    'menu_name' => 'menu-menu-park',
    'link_path' => 'marches-publics',
    'router_path' => 'marches-publics',
    'link_title' => 'Marchés publics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-park_marchs-publics:marches-publics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 21,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Marchés publics');

  return $menu_links;
}
