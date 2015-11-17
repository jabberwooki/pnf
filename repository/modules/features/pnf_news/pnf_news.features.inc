<?php
/**
 * @file
 * pnf_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function pnf_news_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: news_files.
  $custom_breadcrumbs['news_files'] = array(
    'name' => 'Dossiers',
    'titles' => 'Dossiers',
    'paths' => 'dossiers',
    'visibility_php' => '$filesterm_uuid = \'ada69fa2-d961-472c-82fa-f044f0a166bb\'; // Dossiers

$news_type_tid = $node->field_news_type[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($news_type_tid);

if ($term->uuid == $filesterm_uuid) {
  return  TRUE;
}
else {
  return FALSE;
}',
    'node_type' => 'news',
    'language' => 'fr',
    'machine_name' => 'news_files',
  );

  // Exported custom breadcrumb: news_news.
  $custom_breadcrumbs['news_news'] = array(
    'name' => 'Actualités',
    'titles' => 'Actualités',
    'paths' => 'actualites',
    'visibility_php' => '$newsterm_uuid = \'dbf7ebef-3b25-4f1c-a8db-5c031de33c79\'; // Actualités

$news_type_tid = $node->field_news_type[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($news_type_tid);

if ($term->uuid == $newsterm_uuid) {
  return  TRUE;
}
else {
  return FALSE;
}',
    'node_type' => 'news',
    'language' => 'fr',
    'machine_name' => 'news_news',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function pnf_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Actualité'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
