<?php
/**
 * @file
 * pnf_raa.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_raa_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-park_recueil-des-actes-administratifs:raa
  $menu_links['menu-menu-park_recueil-des-actes-administratifs:raa'] = array(
    'menu_name' => 'menu-menu-park',
    'link_path' => 'raa',
    'router_path' => 'raa',
    'link_title' => 'Recueil des Actes Administratifs',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-park_recueil-des-actes-administratifs:raa',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-menu-park_le-parc-national-des-cvennes:node/195',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Recueil des Actes Administratifs');

  return $menu_links;
}
