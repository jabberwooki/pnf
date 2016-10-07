<?php
/**
 * @file
 * pnf_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_multimedia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_paths_features_default_settings().
 */
function pnf_multimedia_custom_breadcrumbs_paths_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: multimedia_galleries.
  $custom_breadcrumbs['multimedia_galleries'] = array(
    'name' => 'Mediathèque - Galeries photo',
    'titles' => 'Galeries d\'images',
    'paths' => 'galeries-photo',
    'visibility_php' => '',
    'specific_path' => 'galeries-photo/*',
    'language' => 'fr',
    'machine_name' => 'multimedia_galleries',
  );

  // Exported custom breadcrumb: multimedia_sounds.
  $custom_breadcrumbs['multimedia_sounds'] = array(
    'name' => 'Médiathèque - Sons',
    'titles' => 'Sons',
    'paths' => 'sons',
    'visibility_php' => '',
    'specific_path' => 'sons/*',
    'language' => 'fr',
    'machine_name' => 'multimedia_sounds',
  );

  // Exported custom breadcrumb: multimedia_videos.
  $custom_breadcrumbs['multimedia_videos'] = array(
    'name' => 'Multimedia - Vidéos',
    'titles' => 'Vidéos',
    'paths' => 'videos',
    'visibility_php' => '',
    'specific_path' => 'videos/*',
    'language' => 'fr',
    'machine_name' => 'multimedia_videos',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_multimedia_image_default_styles() {
  $styles = array();

  // Exported image style: 200w.
  $styles['200w'] = array(
    'label' => 'Largeur 200',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
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
 * Implements hook_scald_default_context_types().
 */
function pnf_multimedia_scald_default_context_types() {
  $contexts = array();
  $contexts['full-audio'] = array(
    'player' => array(
      'audio' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'audio' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'galleria',
        'settings' => array(
          'width' => '100%',
          'height' => '500px',
          'fullscreen_link' => 0,
          'thumb_style' => '200w',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'folio',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  return $contexts;
}
