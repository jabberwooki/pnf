<?php
/**
 * @file
 * pnf_contracts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_contracts_taxonomy_default_vocabularies() {
  return array(
    'contract_categories' => array(
      'name' => 'Contract categories',
      'machine_name' => 'contract_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'procurement_types' => array(
      'name' => 'Procedure types',
      'machine_name' => 'procurement_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
