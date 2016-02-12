<?php
/**
 * @file
 * pnf_front_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pnf_front_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-promotions-promos_front'] = array(
    'cache' => -1,
    'css_class' => 'col-md-9',
    'custom' => 0,
    'delta' => 'promotions-promos_front',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'pnf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pnf',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
