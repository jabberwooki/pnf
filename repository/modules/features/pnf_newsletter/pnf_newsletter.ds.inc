<?php
/**
 * @file
 * pnf_newsletter.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_newsletter_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|simplenews|email_html';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'simplenews';
  $ds_fieldsetting->view_mode = 'email_html';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'newsletter_header_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'newsletter_news_header' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'newsletter_newsflashes_header' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'newsletter_agenda_header' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|simplenews|email_html'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|simplenews|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'simplenews';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'spacer' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'newsletter_news_header' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'field_formatter_class' => 'newsletter-header',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'newsletter_newsflashes_header' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'field_formatter_class' => 'newsletter-header',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'newsletter_agenda_header' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'field_formatter_class' => 'newsletter-section-header',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
  );
  $export['node|simplenews|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_newsletter_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|email_html';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'email_html';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_newsletter_email_header',
        1 => 'newsletter_header_image',
        2 => 'group_email_title_date',
        3 => 'title',
        4 => 'field_newsletter_date',
        5 => 'field_newsletter_intro',
        6 => 'field_top_news',
        7 => 'newsletter_news_header',
        8 => 'field_newsletter_news',
        9 => 'newsletter_newsflashes_header',
        10 => 'field_newsletter_newsflashes',
        11 => 'newsletter_agenda_header',
        12 => 'field_newsletter_events',
      ),
    ),
    'fields' => array(
      'group_newsletter_email_header' => 'central',
      'newsletter_header_image' => 'central',
      'group_email_title_date' => 'central',
      'title' => 'central',
      'field_newsletter_date' => 'central',
      'field_newsletter_intro' => 'central',
      'field_top_news' => 'central',
      'newsletter_news_header' => 'central',
      'field_newsletter_news' => 'central',
      'newsletter_newsflashes_header' => 'central',
      'field_newsletter_newsflashes' => 'central',
      'newsletter_agenda_header' => 'central',
      'field_newsletter_events' => 'central',
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
  $export['node|simplenews|email_html'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'group_title_date_banner',
        2 => 'field_newsletter_date',
        3 => 'spacer',
        4 => 'field_newsletter_intro',
        5 => 'field_top_news',
        6 => 'newsletter_news_header',
        7 => 'field_newsletter_news',
        8 => 'newsletter_newsflashes_header',
        9 => 'field_newsletter_newsflashes',
        10 => 'newsletter_agenda_header',
        11 => 'field_newsletter_events',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'group_title_date_banner' => 'central',
      'field_newsletter_date' => 'central',
      'spacer' => 'central',
      'field_newsletter_intro' => 'central',
      'field_top_news' => 'central',
      'newsletter_news_header' => 'central',
      'field_newsletter_news' => 'central',
      'newsletter_newsflashes_header' => 'central',
      'field_newsletter_newsflashes' => 'central',
      'newsletter_agenda_header' => 'central',
      'field_newsletter_events' => 'central',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|simplenews|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pnf_newsletter_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'newsletter';
  $ds_view_mode->label = 'Newsletter';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['newsletter'] = $ds_view_mode;

  return $export;
}
