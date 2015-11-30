<?php
/**
 * @file
 * raa.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function raa_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_raa_files|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_raa_files';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_raa_file_title',
        1 => 'field_raa_file',
      ),
    ),
    'fields' => array(
      'field_raa_file_title' => 'central',
      'field_raa_file' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_raa_files|default'] = $ds_layout;

  return $export;
}
