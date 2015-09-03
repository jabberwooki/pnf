<?php
/**
 * @file
 * kpages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kpages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kpages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page de base'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>pages de base</em> pour votre contenu statique, tel que la page \'Qui sommes-nous\'.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
