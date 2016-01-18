<?php
/**
 * @file
 * pnf_landing_pages.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function pnf_landing_pages_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page';
  $ds_view_mode->label = 'Page d\'atterissage';
  $ds_view_mode->entities = array(
    'menu_fields' => 'menu_fields',
  );
  $export['landing_page'] = $ds_view_mode;

  return $export;
}
