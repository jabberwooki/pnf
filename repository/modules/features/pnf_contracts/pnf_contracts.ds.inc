<?php
/**
 * @file
 * pnf_contracts.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_contracts_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contract|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contract';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'btn_contract_notice' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'btn_contract_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|contract|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contract|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contract';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'btn_contract_notice' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'field_formatter_class' => 'pull-right',
      ),
    ),
    'btn_contract_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'field_formatter_class' => 'pull-right',
      ),
    ),
    'btn_readmore' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'field_formatter_class' => 'pull-left',
      ),
    ),
  );
  $export['node|contract|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_contracts_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contract|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contract';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_contract_object',
        1 => 'btn_contract_link',
        2 => 'btn_contract_notice',
        3 => 'body',
      ),
      'right' => array(
        4 => 'field_procurement_type',
        5 => 'field_contract_pub_date',
        6 => 'field_contract_deadline_date',
        7 => 'field_contract_projected_date',
        8 => 'field_contract_status',
      ),
    ),
    'fields' => array(
      'field_contract_object' => 'left',
      'btn_contract_link' => 'left',
      'btn_contract_notice' => 'left',
      'body' => 'left',
      'field_procurement_type' => 'right',
      'field_contract_pub_date' => 'right',
      'field_contract_deadline_date' => 'right',
      'field_contract_projected_date' => 'right',
      'field_contract_status' => 'right',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|contract|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contract|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contract';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_contract_object',
        2 => 'field_contract_category',
        3 => 'field_procurement_type',
        4 => 'field_contract_pub_date',
        5 => 'field_contract_deadline_date',
        6 => 'field_contract_projected_date',
        7 => 'btn_readmore',
        8 => 'btn_contract_notice',
        9 => 'btn_contract_link',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_contract_object' => 'central',
      'field_contract_category' => 'central',
      'field_procurement_type' => 'central',
      'field_contract_pub_date' => 'central',
      'field_contract_deadline_date' => 'central',
      'field_contract_projected_date' => 'central',
      'btn_readmore' => 'central',
      'btn_contract_notice' => 'central',
      'btn_contract_link' => 'central',
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
  $export['node|contract|teaser'] = $ds_layout;

  return $export;
}
