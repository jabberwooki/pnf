<?php
/**
 * @file
 * pnf_consultations.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pnf_consultations_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_public_consultation|full';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_public_consultation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_time_s',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'field_formatter_class' => 'comment-title',
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
  $export['comment|comment_node_public_consultation|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|public_consultation|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'public_consultation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments_number' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments_rules_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'guidelines_text' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|public_consultation|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|public_consultation|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'public_consultation';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'comments_number' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'field_formatter_class' => '',
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
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'link class' => 'btn btn-sm btn-primary',
        'wrapper' => '',
        'class' => '',
        'field_formatter_class' => '',
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
  $export['node|public_consultation|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pnf_consultations_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'comments_number';
  $ds_field->label = 'Nombre de commentaires';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'public_consultation|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'comments-number',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['comments_number'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'comments_rules_link';
  $ds_field->label = 'Lien vers le texte de la charte';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'public_consultation|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>guidelines-link</p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['comments_rules_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'guidelines_text';
  $ds_field->label = 'Texte de la charte';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'public_consultation|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'guidelines-text',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['guidelines_text'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_consultations_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_public_consultation|full';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_public_consultation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'comment_body',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'post_date' => 'central',
      'comment_body' => 'central',
      'links' => 'central',
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
  $export['comment|comment_node_public_consultation|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|public_consultation|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'public_consultation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_consultation_date',
        1 => 'comments_number',
        2 => 'body',
        3 => 'field_downloadable_docs',
        4 => 'comments_rules_link',
        5 => 'guidelines_text',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'field_consultation_date' => 'central',
      'comments_number' => 'central',
      'body' => 'central',
      'field_downloadable_docs' => 'central',
      'comments_rules_link' => 'central',
      'guidelines_text' => 'central',
      'comments' => 'central',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|public_consultation|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|public_consultation|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'public_consultation';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_consultation_date',
        2 => 'comments_number',
        3 => 'body',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_consultation_date' => 'central',
      'comments_number' => 'central',
      'body' => 'central',
      'node_link' => 'central',
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
  $export['node|public_consultation|teaser'] = $ds_layout;

  return $export;
}
