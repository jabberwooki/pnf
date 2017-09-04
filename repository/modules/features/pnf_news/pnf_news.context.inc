<?php
/**
 * @file
 * pnf_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-list';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
        'actualites' => 'actualites',
        'newsflashes' => 'newsflashes',
        'breves' => 'breves',
        'files' => 'files',
        'dossiers' => 'dossiers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-news' => array(
          'module' => 'menu',
          'delta' => 'menu-news',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news-list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news-page';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'actualites/*' => 'actualites/*',
        'breves/*' => 'breves/*',
        'dossiers/*' => 'dossiers/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news-page'] = $context;

  return $export;
}
