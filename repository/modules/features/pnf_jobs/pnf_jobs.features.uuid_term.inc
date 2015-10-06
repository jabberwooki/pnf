<?php
/**
 * @file
 * pnf_jobs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_jobs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Stages',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '10cefd12-d3b9-40ec-8f72-a307bc542291',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'job_types',
  );
  $terms[] = array(
    'name' => 'Service civique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6e6ec346-0414-4f86-868c-f8151f3644c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'job_types',
  );
  $terms[] = array(
    'name' => 'Emplois',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e2a28688-49e5-4d6a-9f18-e283c535ef4e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'job_types',
  );
  return $terms;
}
