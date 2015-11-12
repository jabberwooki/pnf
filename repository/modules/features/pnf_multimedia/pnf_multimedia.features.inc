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
    'titles' => 'Images',
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
