<?php
/**
 * @file
 * pnf_documents.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_documents_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Dossier de presse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '80b8cbe2-5a72-4d15-807b-3957158dd4cb',
    'vocabulary_machine_name' => 'document_categories',
  );
  $terms[] = array(
    'name' => 'Journal du parc',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8375bea1-2b5c-411d-9179-1242c90a16aa',
    'vocabulary_machine_name' => 'document_categories',
  );
  $terms[] = array(
    'name' => 'Communiqué de presse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8abe9b99-fc3e-4df1-a402-543ce16b3601',
    'vocabulary_machine_name' => 'document_categories',
  );
  return $terms;
}
