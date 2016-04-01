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

  $export['boxes-button_festival_nature'] = array(
    'cache' => -2,
    'css_class' => 'text-center',
    'custom' => 0,
    'delta' => 'button_festival_nature',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'boxes',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['boxes-pnf_intro_home'] = array(
    'cache' => -2,
    'css_class' => 'col-md-6',
    'custom' => 0,
    'delta' => 'pnf_intro_home',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'boxes',
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
