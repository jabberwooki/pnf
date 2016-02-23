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

  // Exported menu link: menu-multimedia-footer_documents:documents.
  $menu_links['menu-multimedia-footer_documents:documents'] = array(
    'menu_name' => 'menu-multimedia-footer',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Documents',
    'options' => array(
      'identifier' => 'menu-multimedia-footer_documents:documents',
      'attributes' => array(
        'class' => array(
          0 => 'documents-link',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'col-xs-6 col-sm-3 col-md-3',
        'style' => '',
      ),
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
  // Exported menu link: menu-multimedia-footer_espace-presse:espace-presse.
  $menu_links['menu-multimedia-footer_espace-presse:espace-presse'] = array(
    'menu_name' => 'menu-multimedia-footer',
    'link_path' => 'espace-presse',
    'router_path' => 'espace-presse',
    'link_title' => 'Espace Presse',
    'options' => array(
      'identifier' => 'menu-multimedia-footer_espace-presse:espace-presse',
      'attributes' => array(
        'class' => array(
          0 => 'press-links',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'col-xs-6 col-sm-3 col-md-3',
        'style' => '',
      ),
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
  // Exported menu link: menu-multimedia-footer_photos:galeries-photo.
  $menu_links['menu-multimedia-footer_photos:galeries-photo'] = array(
    'menu_name' => 'menu-multimedia-footer',
    'link_path' => 'galeries-photo',
    'router_path' => 'galeries-photo',
    'link_title' => 'Photos',
    'options' => array(
      'identifier' => 'menu-multimedia-footer_photos:galeries-photo',
      'attributes' => array(
        'class' => array(
          0 => 'photos-link',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'col-xs-6 col-sm-3 col-md-3',
        'style' => '',
      ),
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
  // Exported menu link: menu-multimedia-footer_vidos:videos.
  $menu_links['menu-multimedia-footer_vidos:videos'] = array(
    'menu_name' => 'menu-multimedia-footer',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Vidéos',
    'options' => array(
      'identifier' => 'menu-multimedia-footer_vidos:videos',
      'attributes' => array(
        'class' => array(
          0 => 'videos-link',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'col-xs-6 col-sm-3 col-md-3',
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
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Espace Presse');
  t('Galeries d\'images');
  t('Médiathèque');
  t('Photos');
  t('Publications et documents');
  t('Sons');
  t('Vidéos');

  return $menu_links;
}
