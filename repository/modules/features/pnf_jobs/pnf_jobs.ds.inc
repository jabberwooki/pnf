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
  $ds_fieldsetting->id = 'node|job|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'btn_job_notice' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|job|full'] = $ds_fieldsetting;

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
        'link' => '1',
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
      'weight' => '6',
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
  $ds_layout->id = 'node|job|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_job_location',
        1 => 'field_job_resume',
        2 => 'btn_job_notice',
        3 => 'body',
      ),
      'right' => array(
        4 => 'field_job_pub_date',
        5 => 'field_job_deadline_date',
        6 => 'field_job_projected_date',
      ),
    ),
    'fields' => array(
      'field_job_location' => 'left',
      'field_job_resume' => 'left',
      'btn_job_notice' => 'left',
      'body' => 'left',
      'field_job_pub_date' => 'right',
      'field_job_deadline_date' => 'right',
      'field_job_projected_date' => 'right',
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
  $export['node|job|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_job_location',
        2 => 'field_job_resume',
        3 => 'field_job_pub_date',
        4 => 'field_job_deadline_date',
        5 => 'field_job_projected_date',
        6 => 'btn_readmore',
        7 => 'btn_job_notice',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_job_location' => 'central',
      'field_job_resume' => 'central',
      'field_job_pub_date' => 'central',
      'field_job_deadline_date' => 'central',
      'field_job_projected_date' => 'central',
      'btn_readmore' => 'central',
      'btn_job_notice' => 'central',
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
  $export['node|job|teaser'] = $ds_layout;

  return $export;
}
