<?php
/**
 * @file
 * pnf_consultations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_consultations_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_consultations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function pnf_consultations_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: consultations_publiques_en_.
  $custom_breadcrumbs['consultations_publiques_en_'] = array(
    'name' => 'Consultations publiques (EN)',
    'titles' => 'Public consultations',
    'paths' => 'public-consultations',
    'visibility_php' => '',
    'node_type' => 'public_consultation',
    'language' => 'en',
    'machine_name' => 'consultations_publiques_en_',
  );

  // Exported custom breadcrumb: consultations_publiques_fr_.
  $custom_breadcrumbs['consultations_publiques_fr_'] = array(
    'name' => 'Consultations publiques (FR)',
    'titles' => 'Consultations publiques',
    'paths' => 'consultations-publiques',
    'visibility_php' => '',
    'node_type' => 'public_consultation',
    'language' => 'fr',
    'machine_name' => 'consultations_publiques_fr_',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function pnf_consultations_node_info() {
  $items = array(
    'public_consultation' => array(
      'name' => t('Consultation publique'),
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
