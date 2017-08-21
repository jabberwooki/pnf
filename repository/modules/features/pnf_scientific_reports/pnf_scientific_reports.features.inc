<?php
/**
 * @file
 * pnf_scientific_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_scientific_reports_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_scientific_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnf_scientific_reports_node_info() {
  $items = array(
    'scientific_report' => array(
      'name' => t('Rapport scientifique'),
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