<?php
/**
 * @file
 * pnf_agenda.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_agenda_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
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
    'btn_readmore' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser_home';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser_home';
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
  );
  $export['node|event|teaser_home'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_agenda_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'body',
        1 => 'language',
        2 => 'field_event_categorie',
        3 => 'field_public',
        4 => 'field_sectors',
        5 => 'field_event_dates',
        6 => 'field_event_location',
        7 => 'field_coordinates',
        8 => 'field_key_image',
        9 => 'field_scald_gallery',
        10 => 'field_downloadable_docs',
        11 => 'field_pub_dates',
      ),
    ),
    'fields' => array(
      'body' => 'central',
      'language' => 'central',
      'field_event_categorie' => 'central',
      'field_public' => 'central',
      'field_sectors' => 'central',
      'field_event_dates' => 'central',
      'field_event_location' => 'central',
      'field_coordinates' => 'central',
      'field_key_image' => 'central',
      'field_scald_gallery' => 'central',
      'field_downloadable_docs' => 'central',
      'field_pub_dates' => 'central',
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
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_categorie',
        1 => 'field_sectors',
        2 => 'field_public',
        3 => 'field_key_image',
        4 => 'field_event_dates',
        5 => 'field_event_location',
        6 => 'body',
        7 => 'field_scald_gallery',
      ),
      'right' => array(
        8 => 'field_coordinates',
        9 => 'field_downloadable_docs',
      ),
    ),
    'fields' => array(
      'field_event_categorie' => 'left',
      'field_sectors' => 'left',
      'field_public' => 'left',
      'field_key_image' => 'left',
      'field_event_dates' => 'left',
      'field_event_location' => 'left',
      'body' => 'left',
      'field_scald_gallery' => 'left',
      'field_coordinates' => 'right',
      'field_downloadable_docs' => 'right',
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
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_event_categorie',
        1 => 'field_public',
        2 => 'field_key_image',
        3 => 'field_event_dates',
        4 => 'field_event_location',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'field_event_categorie' => 'central',
      'field_public' => 'central',
      'field_key_image' => 'central',
      'field_event_dates' => 'central',
      'field_event_location' => 'central',
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
  $export['node|event|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_key_image',
        1 => 'field_event_categorie',
        2 => 'group_event_resume',
        3 => 'field_event_dates',
        4 => 'title',
        5 => 'btn_readmore',
        6 => 'field_event_location',
      ),
    ),
    'fields' => array(
      'field_key_image' => 'central',
      'field_event_categorie' => 'central',
      'group_event_resume' => 'central',
      'field_event_dates' => 'central',
      'title' => 'central',
      'btn_readmore' => 'central',
      'field_event_location' => 'central',
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
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser_home';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser_home';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_event_dates',
        1 => 'title',
        2 => 'field_event_categorie',
        3 => 'field_event_location',
        4 => 'group_event_resume',
      ),
    ),
    'fields' => array(
      'field_event_dates' => 'central',
      'title' => 'central',
      'field_event_categorie' => 'central',
      'field_event_location' => 'central',
      'group_event_resume' => 'central',
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
  $export['node|event|teaser_home'] = $ds_layout;

  return $export;
}
