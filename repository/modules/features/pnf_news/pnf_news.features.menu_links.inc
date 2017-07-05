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

  // Exported menu link: menu-news_brves:breves.
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Brèves');

  return $menu_links;
}
