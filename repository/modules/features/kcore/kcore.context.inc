<?php
/**
 * @file
 * kcore.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcore_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'toolbar_desktop';
  $context->description = '';
  $context->tag = 'Barre d\'outils';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-tools',
          'region' => 'toolbar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Barre d\'outils');
  $export['toolbar_desktop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'toolbar_mobile';
  $context->description = '';
  $context->tag = 'Barre d\'outils';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-tools',
          'region' => 'top_menu',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Barre d\'outils');
  $export['toolbar_mobile'] = $context;

  return $export;
}
