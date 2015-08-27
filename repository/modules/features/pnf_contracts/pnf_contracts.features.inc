<?php
/**
 * @file
 * pnf_contracts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_contracts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_contracts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnf_contracts_node_info() {
  $items = array(
    'contract' => array(
      'name' => t('Marché public'),
      'base' => 'node_content',
      'description' => t('Un marché public'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
