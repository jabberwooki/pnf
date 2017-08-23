<?php
/**
 * @file
 * pnf_documents.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_documents_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'documents-list';
  $context->description = '';
  $context->tag = 'Documents';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications-and-documents' => 'publications-and-documents',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-multimedia' => array(
          'module' => 'menu',
          'delta' => 'menu-multimedia',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  $export['documents-list'] = $context;

  return $export;
}
