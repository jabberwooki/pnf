<?php
/**
 * @file
 * pnf_raa.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_raa_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'raa_list';
  $context->description = '';
  $context->tag = 'RAA';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'raa*' => 'raa*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pnf_raa-menu_raa' => array(
          'module' => 'pnf_raa',
          'delta' => 'menu_raa',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('RAA');
  $export['raa_list'] = $context;

  return $export;
}
