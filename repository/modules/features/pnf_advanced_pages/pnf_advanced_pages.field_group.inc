<?php
/**
 * @file
 * pnf_advanced_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnf_advanced_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_available_docs|paragraphs_item|available_docs|full';
  $field_group->group_name = 'group_available_docs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'available_docs';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documents utiles',
    'weight' => '3',
    'children' => array(
      0 => 'field_available_doc_file',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Documents utiles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-available-docs field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_available_docs|paragraphs_item|available_docs|full'] = $field_group;

  return $export;
}
