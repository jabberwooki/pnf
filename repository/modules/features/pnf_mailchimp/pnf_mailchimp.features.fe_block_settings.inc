<?php
/**
 * @file
 * pnf_mailchimp.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pnf_mailchimp_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mailchimp_signup-newsletter_block'] = array(
    'cache' => 2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'newsletter_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_signup',
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
