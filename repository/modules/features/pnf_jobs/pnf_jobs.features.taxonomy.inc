<?php
/**
 * @file
 * pnf_jobs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_jobs_taxonomy_default_vocabularies() {
  return array(
    'job_types' => array(
      'name' => 'Types d\'emplois',
      'machine_name' => 'job_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
