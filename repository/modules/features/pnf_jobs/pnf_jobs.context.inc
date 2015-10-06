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
        'offres-emploi' => 'offres-emploi',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Offres d\'emplois');
  $export['jobs-list'] = $context;

  return $export;
}
