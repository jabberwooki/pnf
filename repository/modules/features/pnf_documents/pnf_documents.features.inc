<?php
/**
 * @file
 * pnf_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_documents_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_documents_image_default_styles() {
  $styles = array();

  // Exported image style: 160w.
  $styles['160w'] = array(
    'label' => 'Largeur 160',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 500w.
  $styles['500w'] = array(
    'label' => 'Largeur 500',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function pnf_documents_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Médiathèque : Publications et documents'),
      'base' => 'node_content',
      'description' => t('Un document.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
