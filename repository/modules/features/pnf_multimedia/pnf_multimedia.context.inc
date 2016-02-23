<?php
/**
 * @file
 * pnf_multimedia.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_multimedia_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'multimedia-list';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'galeries-photo*' => 'galeries-photo*',
        'videos*' => 'videos*',
        'sons*' => 'sons*',
        'documents*' => 'documents*',
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
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['multimedia-list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'multimedia-photos';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'galeries-photo*' => 'galeries-photo*',
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
        'views--exp-multimedia-page_photos' => array(
          'module' => 'views',
          'delta' => '-exp-multimedia-page_photos',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['multimedia-photos'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'multimedia-sounds';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sons*' => 'sons*',
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
        'views--exp-multimedia-page_sounds' => array(
          'module' => 'views',
          'delta' => '-exp-multimedia-page_sounds',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['multimedia-sounds'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'multimedia-videos';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'videos*' => 'videos*',
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
        'views--exp-multimedia-page_videos' => array(
          'module' => 'views',
          'delta' => '-exp-multimedia-page_videos',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');
  $export['multimedia-videos'] = $context;

  return $export;
}
