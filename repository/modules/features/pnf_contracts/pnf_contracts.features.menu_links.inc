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

  // Exported menu link: menu-menu-public-contracts_attribus:awarded-public-contracts.
  $menu_links['menu-menu-public-contracts_attribus:awarded-public-contracts'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'link_path' => 'awarded-public-contracts',
    'router_path' => 'awarded-public-contracts',
    'link_title' => 'Attribués',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-public-contracts_attribus:awarded-public-contracts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-public-contracts_awarded-contracts:awarded-public-contracts.
  $menu_links['menu-menu-public-contracts_awarded-contracts:awarded-public-contracts'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'link_path' => 'awarded-public-contracts',
    'router_path' => 'awarded-public-contracts',
    'link_title' => 'Awarded contracts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-public-contracts_awarded-contracts:awarded-public-contracts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-public-contracts_current-contracts:current-public-contracts.
  $menu_links['menu-menu-public-contracts_current-contracts:current-public-contracts'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'link_path' => 'current-public-contracts',
    'router_path' => 'current-public-contracts',
    'link_title' => 'Current contracts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-public-contracts_current-contracts:current-public-contracts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-public-contracts_en-cours:current-public-contracts.
  $menu_links['menu-menu-public-contracts_en-cours:current-public-contracts'] = array(
    'menu_name' => 'menu-menu-public-contracts',
    'link_path' => 'current-public-contracts',
    'router_path' => 'current-public-contracts',
    'link_title' => 'En cours',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-public-contracts_en-cours:current-public-contracts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attribués');
  t('Awarded contracts');
  t('Current contracts');
  t('En cours');

  return $menu_links;
}
