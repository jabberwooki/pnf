<?php
/**
 * @file
 * pnf_extranet.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_extranet_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'extranet_all_pages';
  $context->description = '';
  $context->tag = 'Extranet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'extranet*' => 'extranet*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pnf_extranet-extranet_folders' => array(
          'module' => 'pnf_extranet',
          'delta' => 'extranet_folders',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Extranet');
  $export['extranet_all_pages'] = $context;

  return $export;
}
