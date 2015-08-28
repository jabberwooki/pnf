<?php
/**
 * @file
 * documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function documents_taxonomy_default_vocabularies() {
  return array(
    'document_categories' => array(
      'name' => 'Catégories de document',
      'machine_name' => 'document_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
