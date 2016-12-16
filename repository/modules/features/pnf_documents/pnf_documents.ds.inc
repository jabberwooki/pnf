<?php
/**
 * @file
 * pnf_documents.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_documents_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_document_links|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_document_links';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'local_flipthrough' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:5:"title";s:9:"formatter";s:15:"pdf_reader_file";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:6:{s:9:"pdf_width";s:3:"600";s:10:"pdf_height";s:3:"780";s:8:"renderer";s:6:"direct";s:8:"download";i:0;s:8:"colorbox";i:1;s:18:"colorbox_link_text";s:22:"Feuilleter le document";}s:7:"context";s:42:"argument_entity_id:field_collection_item_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:45:"field_collection_item:field_document_download";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['field_collection_item|field_document_links|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|document|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'document';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'document_edit' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|document|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pnf_documents_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'document_edit';
  $ds_field->label = 'Modifier';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'document|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="[node:edit-url]">Modifier</a></p>
',
      'format' => 'filtered_html',
    ),
    'use_token' => 1,
  );
  $export['document_edit'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'local_flipthrough';
  $ds_field->label = 'Feuilletage en local';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['local_flipthrough'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_documents_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_document_links|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_document_links';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_document_download',
        1 => 'field_document_flip',
      ),
    ),
    'fields' => array(
      'field_document_download' => 'central',
      'field_document_flip' => 'central',
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
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_document_links|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|document|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'document';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_2_10';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_document_cover',
      ),
      'right' => array(
        1 => 'field_document_category',
        2 => 'field_displayed_pub_date',
        3 => 'title',
        4 => 'field_subtitle',
        5 => 'field_document_resume',
        6 => 'field_document_links',
        7 => 'document_edit',
      ),
    ),
    'fields' => array(
      'field_document_cover' => 'left',
      'field_document_category' => 'right',
      'field_displayed_pub_date' => 'right',
      'title' => 'right',
      'field_subtitle' => 'right',
      'field_document_resume' => 'right',
      'field_document_links' => 'right',
      'document_edit' => 'right',
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
  $export['node|document|teaser'] = $ds_layout;

  return $export;
}
