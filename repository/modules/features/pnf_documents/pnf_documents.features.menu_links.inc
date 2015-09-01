<?php
/**
 * @file
 * pnf_documents.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tools_journal-du-parc:journal-du-parc
  $menu_links['menu-tools_journal-du-parc:journal-du-parc'] = array(
    'menu_name' => 'menu-tools',
    'link_path' => 'journal-du-parc',
    'router_path' => 'journal-du-parc',
    'link_title' => 'Journal du Parc',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tools_journal-du-parc:journal-du-parc',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Journal du Parc');

  return $menu_links;
}
