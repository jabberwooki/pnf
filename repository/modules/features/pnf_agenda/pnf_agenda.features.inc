<?php
/**
 * @file
 * pnf_agenda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_agenda_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_agenda_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function pnf_agenda_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: agenda.
  $custom_breadcrumbs['agenda'] = array(
    'name' => 'Agenda',
    'titles' => 'Agenda',
    'paths' => 'agenda',
    'visibility_php' => '',
    'node_type' => 'event',
    'language' => '',
    'machine_name' => 'agenda',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function pnf_agenda_image_default_styles() {
  $styles = array();

  // Exported image style: 500x350.
  $styles['500x350'] = array(
    'label' => '500x350',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focal_820x410.
  $styles['focal_820x410'] = array(
    'label' => 'focal_820x410',
    'effects' => array(
      17 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 820,
          'height' => 410,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
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
function pnf_agenda_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Agenda'),
      'base' => 'node_content',
      'description' => t('Un événement de l\'agenda.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
