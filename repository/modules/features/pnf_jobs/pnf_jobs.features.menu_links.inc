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

  // Exported menu link: menu-menu-jobs_offres-demploi:offres-demploi.
  $menu_links['menu-menu-jobs_offres-demploi:offres-demploi'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'offres-demploi',
    'router_path' => 'offres-demploi',
    'link_title' => 'Offres d\'emploi',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-jobs_offres-demploi:offres-demploi',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-jobs_services-civiques:services-civiques.
  $menu_links['menu-menu-jobs_services-civiques:services-civiques'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'services-civiques',
    'router_path' => 'services-civiques',
    'link_title' => 'Services civiques',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-jobs_services-civiques:services-civiques',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-jobs_stages:stages.
  $menu_links['menu-menu-jobs_stages:stages'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'stages',
    'router_path' => 'stages',
    'link_title' => 'Stages',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-jobs_stages:stages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Offres d\'emploi');
  t('Services civiques');
  t('Stages');

  return $menu_links;
}
