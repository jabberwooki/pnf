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
  $ds_fieldsetting->id = 'node|document|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'document';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'ds_post_date_date_xs',
    ),
  );
  $export['node|document|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_documents_ds_layout_settings_info() {
  $export = array();

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
        0 => 'field_document_category',
        1 => 'field_document_cover',
      ),
      'right' => array(
        2 => 'title',
        3 => 'field_document_resume',
        4 => 'field_document_download',
        5 => 'field_document_preview',
        6 => 'post_date',
      ),
    ),
    'fields' => array(
      'field_document_category' => 'left',
      'field_document_cover' => 'left',
      'title' => 'right',
      'field_document_resume' => 'right',
      'field_document_download' => 'right',
      'field_document_preview' => 'right',
      'post_date' => 'right',
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
