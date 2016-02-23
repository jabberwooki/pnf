<?php
/**
 * @file
 * kcore.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function kcore_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_home';
  $ds_view_mode->label = 'Accroche accueil';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_home'] = $ds_view_mode;

  return $export;
}
