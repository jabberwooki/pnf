<?php
/**
 * @file
 * pnf_extranet.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_extranet_taxonomy_default_vocabularies() {
  return array(
    'extranet_doc_types' => array(
      'name' => 'Types de document extranet',
      'machine_name' => 'extranet_doc_types',
      'description' => 'Types de document extranet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
