<?php
/**
 * @file
 * kcontextes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kcontextes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Core';
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
        'menu-menu-menu-park' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-park',
          'region' => 'top_menu',
          'weight' => '-10',
        ),
        'tb_megamenu-menu-menu-themes' => array(
          'module' => 'tb_megamenu',
          'delta' => 'menu-menu-themes',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu-menu-tools' => array(
          'module' => 'menu',
          'delta' => 'menu-tools',
          'region' => 'sidebar_second',
          'weight' => '-14',
        ),
        'menu-menu-multimedia-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-multimedia-footer',
          'region' => 'pre_footer',
          'weight' => '-9',
        ),
        'kcore-pnf_park_menu_clone' => array(
          'module' => 'kcore',
          'delta' => 'pnf_park_menu_clone',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Core');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page only';
  $context->tag = 'Core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-block_slideshow_home' => array(
          'module' => 'views',
          'delta' => 'slideshow-block_slideshow_home',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Front page only');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'All pages but front';
  $context->tag = 'Core';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but front');
  t('Core');
  $export['not-front'] = $context;

  return $export;
}
