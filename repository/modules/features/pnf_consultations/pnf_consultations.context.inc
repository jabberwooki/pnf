<?php
/**
 * @file
 * pnf_consultations.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_consultations_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'consultation_page';
  $context->description = '';
  $context->tag = 'Consultations publiques';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'public_consultation' => 'public_consultation',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print_ui-print-links' => array(
          'module' => 'print_ui',
          'delta' => 'print-links',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Consultations publiques');
  $export['consultation_page'] = $context;

  return $export;
}
