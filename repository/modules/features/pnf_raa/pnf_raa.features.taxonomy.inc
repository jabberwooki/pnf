<?php
/**
 * @file
 * pnf_raa.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_raa_taxonomy_default_vocabularies() {
  return array(
    'raa_categories' => array(
      'name' => 'Catégories de RAA',
      'machine_name' => 'raa_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
