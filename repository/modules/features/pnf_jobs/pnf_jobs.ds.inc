<?php
/**
 * @file
 * pnf_jobs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_jobs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'btn_job_notice' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'btn_job_notice' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'btn_readmore' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_jobs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_job_pub_date',
        2 => 'field_job_deadline_date',
        3 => 'field_job_projected_date',
        4 => 'field_job_type',
        5 => 'field_job_location',
        6 => 'btn_job_notice',
        7 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_job_pub_date' => 'central',
      'field_job_deadline_date' => 'central',
      'field_job_projected_date' => 'central',
      'field_job_type' => 'central',
      'field_job_location' => 'central',
      'btn_job_notice' => 'central',
      'body' => 'central',
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
  $export['node|job|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_job_location',
        2 => 'field_job_resume',
        3 => 'btn_readmore',
      ),
      'right' => array(
        4 => 'field_job_pub_date',
        5 => 'field_job_projected_date',
        6 => 'field_job_deadline_date',
        7 => 'btn_job_notice',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_job_location' => 'left',
      'field_job_resume' => 'left',
      'btn_readmore' => 'left',
      'field_job_pub_date' => 'right',
      'field_job_projected_date' => 'right',
      'field_job_deadline_date' => 'right',
      'btn_job_notice' => 'right',
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
  $export['node|job|teaser'] = $ds_layout;

  return $export;
}
