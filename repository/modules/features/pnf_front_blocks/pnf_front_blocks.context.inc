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
  $context->name = 'fcb_front';
  $context->description = '';
  $context->tag = 'FCB';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        '*.forets-champagne-bourgogne.*' => '*.forets-champagne-bourgogne.*',
        'preprod-fcb.*' => 'preprod-fcb.*',
        'prod-fcb.*' => 'prod-fcb.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('FCB');
  $export['fcb_front'] = $context;

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
        'preprod-pag.*' => 'preprod-pag.*',
        'prod-pag.*' => 'prod-pag.*',
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
          'weight' => '-10',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
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
        'preprod-pncal.*' => 'preprod-pncal.*',
        'prod-pncal.*' => 'prod-pncal.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
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
        'pnce.pnfdev.xyz' => 'pnce.pnfdev.xyz',
        'preprod-pnc.*' => 'preprod-pnc.*',
        'prod-pnc.*' => 'prod-pnc.*',
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
          'weight' => '-10',
        ),
        'boxes-button_festival_nature' => array(
          'module' => 'boxes',
          'delta' => 'button_festival_nature',
          'region' => 'pre_content_right',
          'weight' => '-9',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '1',
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
        '*.parcsnationaux.*' => '*.parcsnationaux.*',
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
        'boxes-pnf_intro_home' => array(
          'module' => 'boxes',
          'delta' => 'pnf_intro_home',
          'region' => 'pre_content_left',
          'weight' => '-10',
        ),
        'views-news-block_news_news_home2cols' => array(
          'module' => 'views',
          'delta' => 'news-block_news_news_home2cols',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-8',
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
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
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
        'preprod-png.*' => 'preprod-png.*',
        'prod-png.*' => 'prod-png.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
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
        'preprod-pnm.*' => 'preprod-pnm.*',
        'prod-pnm.*' => 'prod-pnm.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
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
        '*.portcros-parcnational.*' => '*.portcros-parcnational.*',
        'preprod-pnpc.*' => 'preprod-pnpc.*',
        'prod-pnpc.*' => 'prod-pnpc.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
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
        'preprod-pnp.*' => 'preprod-pnp.*',
        'prod-pnp.*' => 'prod-pnp.*',
        '*.pyrenees-parcnational.*' => '*.pyrenees-parcnational.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
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
        'preprod-pnrun.*' => 'preprod-pnrun.*',
        'prod-pnrun.*' => 'prod-pnrun.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-promotions-promos_4_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_4_front',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
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
        'pnva.pnfdev.xyz' => 'pnva.pnfdev.xyz',
        'preprod-pnv.*' => 'preprod-pnv.*',
        'prod-pnv.*' => 'prod-pnv.*',
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
          'weight' => '-10',
        ),
        'views-news-block_news_flashnews_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_flashnews_home',
          'region' => 'pre_content_left',
          'weight' => '-9',
        ),
        'views-events-block_events_home' => array(
          'module' => 'views',
          'delta' => 'events-block_events_home',
          'region' => 'pre_content_right',
          'weight' => '-10',
        ),
        'views-news-block_news_files_home' => array(
          'module' => 'views',
          'delta' => 'news-block_news_files_home',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-promotions-promos_front' => array(
          'module' => 'views',
          'delta' => 'promotions-promos_front',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('PNVA');
  $export['pnva_front'] = $context;

  return $export;
}
