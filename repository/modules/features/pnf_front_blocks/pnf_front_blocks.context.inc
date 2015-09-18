<?php
/**
 * @file
 * pnf_front_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_front_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnag_front';
  $context->description = '';
  $context->tag = 'PNAG';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.parc-amazonien-guyane.*' => '*.parc-amazonien-guyane.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNAG');
  $export['pnag_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnca_front';
  $context->description = '';
  $context->tag = 'PNCA';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.calanques-parcnational.*' => '*.calanques-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNCA');
  $export['pnca_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnce_front';
  $context->description = '';
  $context->tag = 'PNCE';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.cevennes-parcnational.*' => '*.cevennes-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_news_news_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_news_home',
          'region' => 'pre_content_left',
          'weight' => '0',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '1',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '0',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNCE');
  $export['pnce_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnec_front';
  $context->description = '';
  $context->tag = 'PNEC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.ecrins-parcnational.*' => '*.ecrins-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNEC');
  $export['pnec_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnf_front';
  $context->description = '';
  $context->tag = 'PNF';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.parcnationaux.*' => '*.parcnationaux.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_news_news_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_news_home',
          'region' => 'pre_content_left',
          'weight' => '0',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '1',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '0',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNF');
  $export['pnf_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pngu_front';
  $context->description = '';
  $context->tag = 'PNGU';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.guadeloupe-parcnational.*' => '*.guadeloupe-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNGU');
  $export['pngu_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnme_front';
  $context->description = '';
  $context->tag = 'PNME';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.mercantour.*' => '*.mercantour.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNME');
  $export['pnme_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnpc_front';
  $context->description = '';
  $context->tag = 'PNPC';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.portcrosparcnational.*' => '*.portcrosparcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNPC');
  $export['pnpc_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnpy_front';
  $context->description = '';
  $context->tag = 'PNPY';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.parc-pyrenees.*' => '*.parc-pyrenees.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNPY');
  $export['pnpy_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnre_front';
  $context->description = '';
  $context->tag = 'PNRE';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.reunion-parcnational.*' => '*.reunion-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNRE');
  $export['pnre_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pnva_front';
  $context->description = '';
  $context->tag = 'PNVA';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.vanoise-parcnational.*' => '*.vanoise-parcnational.*',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNVA');
  $export['pnva_front'] = $context;

  return $export;
}
