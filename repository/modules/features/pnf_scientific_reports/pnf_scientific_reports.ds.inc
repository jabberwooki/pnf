<?php
/**
 * @file
 * pnf_scientific_reports.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_scientific_reports_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|scientific_report|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'scientific_report';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|scientific_report|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|scientific_report|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'scientific_report';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'link class' => 'btn btn-primary',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|scientific_report|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_scientific_reports_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|scientific_report|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'scientific_report';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sr_cover',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_subtitle',
        3 => 'group_sr_sites_theme',
        4 => 'group_sr_report_infos',
        5 => 'field_displayed_pub_date',
        6 => 'field_sectors',
        7 => 'field_sr_theme',
        8 => 'field_sr_authors',
        9 => 'field_sr_editor',
        10 => 'field_sr_pages',
        11 => 'field_sr_reference',
      ),
      'bottom' => array(
        12 => 'field_sr_abstract',
        13 => 'field_downloadable_docs',
      ),
    ),
    'fields' => array(
      'field_sr_cover' => 'left',
      'title' => 'right',
      'field_subtitle' => 'right',
      'group_sr_sites_theme' => 'right',
      'group_sr_report_infos' => 'right',
      'field_displayed_pub_date' => 'right',
      'field_sectors' => 'right',
      'field_sr_theme' => 'right',
      'field_sr_authors' => 'right',
      'field_sr_editor' => 'right',
      'field_sr_pages' => 'right',
      'field_sr_reference' => 'right',
      'field_sr_abstract' => 'bottom',
      'field_downloadable_docs' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|scientific_report|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|scientific_report|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'scientific_report';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_2_10';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_sr_cover',
      ),
      'right' => array(
        1 => 'field_sr_theme',
        2 => 'field_displayed_pub_date',
        3 => 'title',
        4 => 'field_subtitle',
        5 => 'field_sr_abstract',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_sr_cover' => 'left',
      'field_sr_theme' => 'right',
      'field_displayed_pub_date' => 'right',
      'title' => 'right',
      'field_subtitle' => 'right',
      'field_sr_abstract' => 'right',
      'node_link' => 'right',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|scientific_report|teaser'] = $ds_layout;

  return $export;
}
