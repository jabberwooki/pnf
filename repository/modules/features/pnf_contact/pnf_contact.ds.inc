<?php
/**
 * @file
 * pnf_contact.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_contact_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|contact|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_contact_title',
        1 => 'field_contact_text',
        2 => 'field_contact_page_link',
      ),
      'right' => array(
        3 => 'field_contact_image',
      ),
    ),
    'fields' => array(
      'field_contact_title' => 'left',
      'field_contact_text' => 'left',
      'field_contact_page_link' => 'left',
      'field_contact_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['bean|contact|default'] = $ds_layout;

  return $export;
}
