<?php
/**
 * @file
 * pnf_multimedia.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_multimedia_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-multimedia_galeries-dimages:galeries-photo.
  $menu_links['menu-multimedia_galeries-dimages:galeries-photo'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'galeries-photo',
    'router_path' => 'galeries-photo',
    'link_title' => 'Galeries d\'images',
    'options' => array(
      'identifier' => 'menu-multimedia_galeries-dimages:galeries-photo',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-multimedia_publications-and-documents:publications-and-documents.
  $menu_links['menu-multimedia_publications-and-documents:publications-and-documents'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'publications-and-documents',
    'router_path' => 'publications-and-documents',
    'link_title' => 'Publications and documents',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-multimedia_publications-and-documents:publications-and-documents',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-multimedia_sons:sons.
  $menu_links['menu-multimedia_sons:sons'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'sons',
    'router_path' => 'sons',
    'link_title' => 'Sons',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-multimedia_sons:sons',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-multimedia_vidos:videos.
  $menu_links['menu-multimedia_vidos:videos'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Vidéos',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-multimedia_vidos:videos',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Galeries d\'images');
  t('Publications and documents');
  t('Sons');
  t('Vidéos');

  return $menu_links;
}
