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

  // Exported image style: 360w.
  $styles['360w'] = array(
    'label' => 'Largeur 360',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 360,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 400w.
  $styles['400w'] = array(
    'label' => 'Largeur 400',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
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

  // Exported image style: focal_270x180.
  $styles['focal_270x180'] = array(
    'label' => 'focal_270x180',
    'effects' => array(
      16 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 180,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
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

  // Exported image style: slide_750x500.
  $styles['slide_750x500'] = array(
    'label' => 'Diapo (750x500)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 500,
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
      'name' => 'Documents téléchargeables',
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
    'image_text_33_67' => array(
      'name' => 'Image - Texte (33/67)',
      'bundle' => 'image_text_33_67',
      'locked' => '1',
    ),
    'image_text_50_50' => array(
      'name' => 'Image - Texte (50/50)',
      'bundle' => 'image_text_50_50',
      'locked' => '1',
    ),
    'images_group' => array(
      'name' => 'Galerie images (3 colonnes)',
      'bundle' => 'images_group',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Grande image/Diaporama',
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
    'text_image_67_33' => array(
      'name' => 'Texte - Image (67/33)',
      'bundle' => 'text_image_67_33',
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
