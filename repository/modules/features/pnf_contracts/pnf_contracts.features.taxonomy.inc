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
      'name' => 'Catégories de marché',
      'machine_name' => 'contract_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'procurement_types' => array(
      'name' => 'Types de procédure',
      'machine_name' => 'procurement_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
