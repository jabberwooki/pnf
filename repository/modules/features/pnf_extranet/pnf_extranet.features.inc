<?php
/**
 * @file
 * pnf_extranet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_extranet_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pnf_extranet_node_info() {
  $items = array(
    'extranet_doc' => array(
      'name' => t('Document extranet'),
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
