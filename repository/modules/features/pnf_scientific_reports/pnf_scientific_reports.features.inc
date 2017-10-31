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
  if ($module == "field_group" && $api == "field_group") {
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
 * Implements hook_fe_date_custom_date_formats().
 */
function pnf_scientific_reports_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['Y'] = 'Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function pnf_scientific_reports_date_format_types() {
  $format_types = array();
  // Exported date format type: year
  $format_types['year'] = 'Année';
  return $format_types;
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
