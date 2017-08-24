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

  // Exported menu link: menu-menu-jobs_civic-services:civic-services.
  $menu_links['menu-menu-jobs_civic-services:civic-services'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'civic-services',
    'router_path' => 'civic-services',
    'link_title' => 'Civic services',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-jobs_civic-services:civic-services',
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
  // Exported menu link: menu-menu-jobs_jobs:jobs.
  $menu_links['menu-menu-jobs_jobs:jobs'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'jobs',
    'router_path' => 'jobs',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-jobs_jobs:jobs',
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
  // Exported menu link: menu-menu-jobs_trainings:trainings.
  $menu_links['menu-menu-jobs_trainings:trainings'] = array(
    'menu_name' => 'menu-menu-jobs',
    'link_path' => 'trainings',
    'router_path' => 'trainings',
    'link_title' => 'Trainings',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-menu-jobs_trainings:trainings',
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
  t('Civic services');
  t('Jobs');
  t('Trainings');

  return $menu_links;
}
