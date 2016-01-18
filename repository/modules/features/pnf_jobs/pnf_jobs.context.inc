<?php
/**
 * @file
 * pnf_jobs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_jobs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jobs-list';
  $context->description = '';
  $context->tag = 'Offres d\'emplois';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'jobs:page_civil_services' => 'jobs:page_civil_services',
        'jobs:page_jobs' => 'jobs:page_jobs',
        'jobs:page_trainings' => 'jobs:page_trainings',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-jobs' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-jobs',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Offres d\'emplois');
  $export['jobs-list'] = $context;

  return $export;
}
