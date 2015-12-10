<?php
/**
 * @file
 * pnf_advanced_pages.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pnf_advanced_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_cols_text|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_cols_text';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_left_col_text',
      ),
      'right' => array(
        1 => 'field_right_col_text',
      ),
    ),
    'fields' => array(
      'field_left_col_text' => 'left',
      'field_right_col_text' => 'right',
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
  $export['paragraphs_item|2_cols_text|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_cols_text|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_cols_text';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_left_col_text',
      ),
      'right' => array(
        1 => 'field_right_col_text',
      ),
    ),
    'fields' => array(
      'field_left_col_text' => 'left',
      'field_right_col_text' => 'right',
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
  $export['paragraphs_item|2_cols_text|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|image_text_50_50|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'image_text_50_50';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'field_texte',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'field_texte' => 'right',
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
  $export['paragraphs_item|image_text_50_50|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|images_3|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'images_3';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_4_4_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_left_image',
      ),
      'central' => array(
        1 => 'field_center_image',
      ),
      'right' => array(
        2 => 'field_right_image',
      ),
    ),
    'fields' => array(
      'field_left_image' => 'left',
      'field_center_image' => 'central',
      'field_right_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'central' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|images_3|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|images_group|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'images_group';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_images',
      ),
    ),
    'fields' => array(
      'field_images' => 'central',
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
  $export['paragraphs_item|images_group|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text_image_50_50|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text_image_50_50';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_texte',
      ),
      'right' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_texte' => 'left',
      'field_image' => 'right',
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
  $export['paragraphs_item|text_image_50_50|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|text|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'text';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_texte',
      ),
    ),
    'fields' => array(
      'field_texte' => 'central',
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
  $export['paragraphs_item|text|full'] = $ds_layout;

  return $export;
}
