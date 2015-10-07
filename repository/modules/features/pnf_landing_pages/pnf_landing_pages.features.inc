<?php
/**
 * @file
 * pnf_landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_image_default_styles().
 */
function pnf_landing_pages_image_default_styles() {
  $styles = array();

  // Exported image style: landing_page_260x260.
  $styles['landing_page_260x260'] = array(
    'label' => 'Landing page (260x260)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: landing_page_275x150.
  $styles['landing_page_275x150'] = array(
    'label' => 'Landing page (275x150)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
