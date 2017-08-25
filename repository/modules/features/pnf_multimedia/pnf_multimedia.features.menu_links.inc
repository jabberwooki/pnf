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

  // Exported menu link: menu-multimedia_image-galleries:image-galleries.
  $menu_links['menu-multimedia_image-galleries:image-galleries'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'image-galleries',
    'router_path' => 'image-galleries',
    'link_title' => 'Image galleries',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-multimedia_image-galleries:image-galleries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
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
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-multimedia_sounds:sounds.
  $menu_links['menu-multimedia_sounds:sounds'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'sounds',
    'router_path' => 'sounds',
    'link_title' => 'Sounds',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-multimedia_sounds:sounds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-multimedia_videos:videos.
  $menu_links['menu-multimedia_videos:videos'] = array(
    'menu_name' => 'menu-multimedia',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'identifier' => 'menu-multimedia_videos:videos',
      'alter' => TRUE,
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
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image galleries');
  t('Publications and documents');
  t('Sounds');
  t('Videos');

  return $menu_links;
}
