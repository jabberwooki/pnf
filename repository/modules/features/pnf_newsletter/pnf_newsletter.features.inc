<?php
/**
 * @file
 * pnf_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_fe_date_custom_date_formats().
 */
function pnf_newsletter_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F Y'] = 'F Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function pnf_newsletter_date_format_types() {
  $format_types = array();
  // Exported date format type: newsletter_date
  $format_types['newsletter_date'] = 'Lettre d\'infos';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function pnf_newsletter_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: newsletter_date::en
  $locale_date_formats['newsletter_date::en'] = array(
    'type' => 'newsletter_date',
    'format' => 'F Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: newsletter_date::fr
  $locale_date_formats['newsletter_date::fr'] = array(
    'type' => 'newsletter_date',
    'format' => 'F Y',
    'locales' => array(
      0 => 'fr',
    ),
  );
  return $locale_date_formats;
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_newsletter_image_default_styles() {
  $styles = array();

  // Exported image style: 260w.
  $styles['260w'] = array(
    'label' => 'Largeur 260',
    'effects' => array(),
  );

  // Exported image style: newsletter_agenda_image.
  $styles['newsletter_agenda_image'] = array(
    'label' => 'Newsletter - Image agenda',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter_header.
  $styles['newsletter_header'] = array(
    'label' => 'Newsletter - header',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: newsletter_image.
  $styles['newsletter_image'] = array(
    'label' => 'Newsletter - Image',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
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
function pnf_newsletter_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Lettre d\'infos'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
