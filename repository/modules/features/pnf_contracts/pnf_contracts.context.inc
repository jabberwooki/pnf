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
  $context->name = 'contract-page';
  $context->description = '';
  $context->tag = 'Marchés publics';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contract' => 'contract',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marchés publics');
  $export['contract-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contracts-list';
  $context->description = '';
  $context->tag = 'Marchés publics';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'contracts:awarded_contracts' => 'contracts:awarded_contracts',
        'contracts:current_contracts' => 'contracts:current_contracts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-public-contracts' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-public-contracts',
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
