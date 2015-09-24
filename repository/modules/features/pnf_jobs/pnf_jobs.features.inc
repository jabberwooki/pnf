<?php
/**
 * @file
 * pnf_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnf_jobs_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Offre d\'emploi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Une offre d\'emploi.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
