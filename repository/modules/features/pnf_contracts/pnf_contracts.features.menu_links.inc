<?php
/**
 * @file
 * pnf_contracts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_contracts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-public-contracts_attribus:marches-publics-attribues
  $menu_links['menu-menu-public-contracts_attribus:marches-publics-attribues'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'link_path' => 'marches-publics-attribues',
    'router_path' => 'marches-publics-attribues',
    'link_title' => 'Attribués',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-public-contracts_attribus:marches-publics-attribues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attribués');

  return $menu_links;
}
