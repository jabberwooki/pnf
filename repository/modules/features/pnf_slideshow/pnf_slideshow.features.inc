<?php
/**
 * @file
 * pnf_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: focal_2200x800.
  $styles['focal_2200x800'] = array(
    'label' => 'focal_2200x800',
    'effects' => array(
      10 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 2200,
          'height' => 800,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slide_preview_300.
  $styles['slide_preview_300'] = array(
    'label' => 'Prévisualisation diapo (300px de large)',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
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
function pnf_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Diapositive'),
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
