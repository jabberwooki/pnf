<?php
/**
 * @file
 * pnf_agenda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_agenda_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function pnf_agenda_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pnf_agenda_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evénement'),
      'base' => 'node_content',
      'description' => t('Un événement de l\'agenda.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
