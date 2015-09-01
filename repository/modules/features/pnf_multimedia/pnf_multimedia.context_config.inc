<?php
/**
 * @file
 * pnf_multimedia.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function pnf_multimedia_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'list';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'file' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-medium',
    ),
    'video' => array(
      '*' => 'style-thumbnail',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'file' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'default',
      'settings' => array(
        'width' => '690',
        'height' => '450',
        'fullscreen_link' => FALSE,
        'thumb_style' => 'thumbnail',
        'normal_style' => 'large',
        'big_style' => 'original',
        'theme' => 'classic',
        'options' => '',
      ),
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['list'] = $context_config;

  return $export;
}
