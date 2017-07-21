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
  // Exported menu link: menu-multimedia_publications-et-documents:documents.
  $menu_links['menu-multimedia_publications-et-documents:documents'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Publications et documents',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-multimedia_publications-et-documents:documents',
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
  // Exported menu link: menu-tools_mdiathque:documents.
  $menu_links['menu-tools_mdiathque:documents'] = array(
    'menu_name' => 'menu-tools',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Médiathèque',
    'options' => array(
      'identifier' => 'menu-tools_mdiathque:documents',
      'attributes' => array(
        'class' => array(
          0 => 'tool',
          1 => 'tool-multimedia',
        ),
      ),
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
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Galeries d\'images');
  t('Médiathèque');
  t('Publications et documents');
  t('Sons');
  t('Vidéos');

  return $menu_links;
}
