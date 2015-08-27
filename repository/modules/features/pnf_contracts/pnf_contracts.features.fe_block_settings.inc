<?php
/**
 * @file
 * pnf_contracts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pnf_contracts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-contracts-page_contracts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-contracts-page_contracts',
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
