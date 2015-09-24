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
    'path' => array(
      'values' => array(
        'offres-emplois' => 'offres-emplois',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-jobs-page_jobs' => array(
          'module' => 'views',
          'delta' => '-exp-jobs-page_jobs',
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
