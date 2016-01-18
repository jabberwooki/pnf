<?php
/**
 * @file
 * pnf_landing_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_landing_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_theme_landing_pages';
  $context->description = '';
  $context->tag = 'Pages d\'atterrissage';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'child_menu_items-child_menu_items' => array(
          'module' => 'child_menu_items',
          'delta' => 'child_menu_items',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages d\'atterrissage');
  $export['menu_theme_landing_pages'] = $context;

  return $export;
}
