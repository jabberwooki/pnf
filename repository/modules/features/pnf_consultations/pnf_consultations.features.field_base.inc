<?php
/**
 * @file
 * pnf_consultations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pnf_consultations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_consultation_date'.
  $field_bases['field_consultation_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_consultation_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'required',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  return $field_bases;
}
