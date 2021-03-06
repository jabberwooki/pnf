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
  if ($module == "field_group" && $api == "field_group") {
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
    'name' => 'Dossiers (FR)',
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

  // Exported custom breadcrumb: news_files_en.
  $custom_breadcrumbs['news_files_en'] = array(
    'name' => 'Dossiers (EN)',
    'titles' => 'Files',
    'paths' => 'files',
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
    'language' => 'en',
    'machine_name' => 'news_files_en',
  );

  // Exported custom breadcrumb: news_news.
  $custom_breadcrumbs['news_news'] = array(
    'name' => 'Actualités (FR)',
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

  // Exported custom breadcrumb: news_news_en.
  $custom_breadcrumbs['news_news_en'] = array(
    'name' => 'Actualités (EN)',
    'titles' => 'News',
    'paths' => 'news',
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
    'language' => 'en',
    'machine_name' => 'news_news_en',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_news_image_default_styles() {
  $styles = array();

  // Exported image style: 196x196.
  $styles['196x196'] = array(
    'label' => '196x196',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 196,
          'height' => 196,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 250x250.
  $styles['250x250'] = array(
    'label' => '250x250',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 500x310.
  $styles['500x310'] = array(
    'label' => '500x310',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 500x500.
  $styles['500x500'] = array(
    'label' => '500x500',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
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
