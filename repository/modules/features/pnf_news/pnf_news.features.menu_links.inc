<?php
/**
 * @file
 * pnf_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-news_actualits:actualites
  $menu_links['menu-news_actualits:actualites'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'actualites',
    'router_path' => 'actualites',
    'link_title' => 'Actualités',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-news_actualits:actualites',
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
  // Exported menu link: menu-news_brves:breves
  $menu_links['menu-news_brves:breves'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'breves',
    'router_path' => 'breves',
    'link_title' => 'Brèves',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-news_brves:breves',
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
  // Exported menu link: menu-news_dossiers:dossiers
  $menu_links['menu-news_dossiers:dossiers'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'dossiers',
    'router_path' => 'dossiers',
    'link_title' => 'Dossiers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-news_dossiers:dossiers',
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
  // Exported menu link: menu-tools_actualits:actualites
  $menu_links['menu-tools_actualits:actualites'] = array(
    'menu_name' => 'menu-tools',
    'link_path' => 'actualites',
    'router_path' => 'actualites',
    'link_title' => 'Actualités',
    'options' => array(
      'identifier' => 'menu-tools_actualits:actualites',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'tool tool-news',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  t('Brèves');
  t('Dossiers');

  return $menu_links;
}
