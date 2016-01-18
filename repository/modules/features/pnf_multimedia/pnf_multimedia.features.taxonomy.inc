<?php
/**
 * @file
 * pnf_multimedia.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_multimedia_taxonomy_default_vocabularies() {
  return array(
    'media_categories' => array(
      'name' => 'Catégories de media',
      'machine_name' => 'media_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
