<?php
/**
 * @file
 * kcore.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kcore_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Loupe de recherche';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'magnifier';
  $fe_block_boxes->body = '&nbsp;';

  $export['magnifier'] = $fe_block_boxes;

  return $export;
}
