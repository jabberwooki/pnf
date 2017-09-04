<?php
/**
 * @file
 * pnf_scientific_reports.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_scientific_reports_taxonomy_default_vocabularies() {
  return array(
    'scientific_themes' => array(
      'name' => 'Thèmes scientifiques',
      'machine_name' => 'scientific_themes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
