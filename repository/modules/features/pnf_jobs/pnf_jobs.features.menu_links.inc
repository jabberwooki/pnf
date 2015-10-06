<?php
/**
 * @file
 * pnf_jobs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pnf_jobs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-park_recrutement:offres-emploi
  $menu_links['menu-menu-park_recrutement:offres-emploi'] = array(
    'menu_name' => 'menu-menu-park',
    'link_path' => 'offres-emploi',
    'router_path' => 'offres-emploi',
    'link_title' => 'Recrutement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-park_recrutement:offres-emploi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Recrutement');

  return $menu_links;
}
