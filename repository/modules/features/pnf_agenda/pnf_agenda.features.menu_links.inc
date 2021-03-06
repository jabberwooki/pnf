<?php
/**
 * @file
 * pnf_agenda.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_agenda_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-news_agenda:agenda.
  $menu_links['menu-news_agenda:agenda'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-news_agenda:agenda',
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
  // Exported menu link: menu-tools_agenda:agenda.
  $menu_links['menu-tools_agenda:agenda'] = array(
    'menu_name' => 'menu-tools',
    'link_path' => 'agenda',
    'router_path' => 'agenda',
    'link_title' => 'Agenda',
    'options' => array(
      'identifier' => 'menu-tools_agenda:agenda',
      'attributes' => array(
        'class' => array(
          0 => 'tool',
          1 => 'tool-events',
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
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');

  return $menu_links;
}
