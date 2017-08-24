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

  // Exported menu link: menu-news_files:files.
  $menu_links['menu-news_files:files'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'files',
    'router_path' => 'files',
    'link_title' => 'Files',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-news_files:files',
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
  // Exported menu link: menu-news_news:news.
  $menu_links['menu-news_news:news'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-news_news:news',
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
  // Exported menu link: menu-news_newsflashes:newsflashes.
  $menu_links['menu-news_newsflashes:newsflashes'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'newsflashes',
    'router_path' => 'newsflashes',
    'link_title' => 'Newsflashes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-news_newsflashes:newsflashes',
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
  // Exported menu link: menu-tools_news:news.
  $menu_links['menu-tools_news:news'] = array(
    'menu_name' => 'menu-tools',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'tool',
          1 => 'tool-news',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-tools_news:news',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Files');
  t('News');
  t('Newsflashes');

  return $menu_links;
}
