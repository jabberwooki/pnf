<?php
/**
 * @file
 * pnf_social_media.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pnf_social_media_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addtoany-addtoany_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'addtoany_button',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'addtoany',
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

  return $export;
}
