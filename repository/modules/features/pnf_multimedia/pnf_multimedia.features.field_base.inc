<?php
/**
 * @file
 * pnf_multimedia.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pnf_multimedia_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_media_category'
  $field_bases['field_media_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media_category',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'media_categories',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
