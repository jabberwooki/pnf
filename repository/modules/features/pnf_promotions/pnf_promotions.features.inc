<?php
/**
 * @file
 * pnf_promotions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_promotions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_promotions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnf_promotions_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('Bloc promotion accueil'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
