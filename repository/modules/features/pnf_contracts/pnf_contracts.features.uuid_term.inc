<?php
/**
 * @file
 * pnf_contracts.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_contracts_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'AOO – Appel d\'offres ouvert',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '02cf4b5f-e482-43b9-9715-71530c3f9e0e',
    'vocabulary_machine_name' => 'procurement_types',
  );
  $terms[] = array(
    'name' => 'MAPA – Procédure adaptée',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '643264fe-fb36-4a40-a645-6c57f43f8464',
    'vocabulary_machine_name' => 'procurement_types',
  );
  $terms[] = array(
    'name' => 'Fournitures',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '74f0ab32-596a-45c9-8b88-88b6acb13d33',
    'vocabulary_machine_name' => 'contract_categories',
  );
  $terms[] = array(
    'name' => 'Marché à bon de commande',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '849448e4-c374-49b8-868e-616361a25821',
    'vocabulary_machine_name' => 'procurement_types',
  );
  $terms[] = array(
    'name' => 'Prestations intellectuelles',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8b5e4716-144b-4ea5-ae2d-c053f8aaab7f',
    'vocabulary_machine_name' => 'contract_categories',
  );
  $terms[] = array(
    'name' => 'Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dd72bac2-1648-4aaf-9703-18c68f364ba1',
    'vocabulary_machine_name' => 'contract_categories',
  );
  $terms[] = array(
    'name' => 'Informatique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e31eb7a0-a961-437b-8651-c65f759277ef',
    'vocabulary_machine_name' => 'contract_categories',
  );
  $terms[] = array(
    'name' => 'Travaux',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fca5b189-1ea3-413c-8a10-f0561307428a',
    'vocabulary_machine_name' => 'contract_categories',
  );
  return $terms;
}
