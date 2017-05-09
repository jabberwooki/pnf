<?php
/**
 * @file
 * pnf_multimedia.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pnf_multimedia_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-multimedia'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-multimedia',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
