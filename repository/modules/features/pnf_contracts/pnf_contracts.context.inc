<?php
/**
 * @file
 * pnf_contracts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_contracts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contracts-list';
  $context->description = '';
  $context->tag = 'Marchés publics';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'marches-publics' => 'marches-publics',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-contracts-page_contracts' => array(
          'module' => 'views',
          'delta' => '-exp-contracts-page_contracts',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marchés publics');
  $export['contracts-list'] = $context;

  return $export;
}
