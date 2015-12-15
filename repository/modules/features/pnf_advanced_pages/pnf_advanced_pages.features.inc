<?php
/**
 * @file
 * pnf_advanced_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_advanced_pages_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_image_default_styles().
 */
function pnf_advanced_pages_image_default_styles() {
  $styles = array();

  // Exported image style: 270x180.
  $styles['270x180'] = array(
    'label' => '270x180',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 415x280.
  $styles['415x280'] = array(
    'label' => '415x280',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 415,
          'height' => 208,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pb_275x180.
  $styles['pb_275x180'] = array(
    'label' => 'pb_275x180',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slide_900x600.
  $styles['slide_900x600'] = array(
    'label' => 'slide_900x600',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 600,
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
function pnf_advanced_pages_node_info() {
  $items = array(
    'advanced_page' => array(
      'name' => t('Page avancée'),
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

/**
 * Implements hook_paragraphs_info().
 */
function pnf_advanced_pages_paragraphs_info() {
  $items = array(
    '2_cols_text' => array(
      'name' => 'Texte 2 colonnes',
      'bundle' => '2_cols_text',
      'locked' => '1',
    ),
    'available_docs' => array(
      'name' => 'Documents utiles',
      'bundle' => 'available_docs',
      'locked' => '1',
    ),
    'colored_bg_text' => array(
      'name' => 'Texte fond coloré',
      'bundle' => 'colored_bg_text',
      'locked' => '1',
    ),
    'iframe' => array(
      'name' => 'IFrame',
      'bundle' => 'iframe',
      'locked' => '1',
    ),
    'image_text_50_50' => array(
      'name' => 'Image - Texte (50/50)',
      'bundle' => 'image_text_50_50',
      'locked' => '1',
    ),
    'images_group' => array(
      'name' => 'Images 3 colonnes',
      'bundle' => 'images_group',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Diaporama',
      'bundle' => 'slideshow',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Texte',
      'bundle' => 'text',
      'locked' => '1',
    ),
    'text_image_50_50' => array(
      'name' => 'Texte - Image (50/50)',
      'bundle' => 'text_image_50_50',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Vidéo',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}