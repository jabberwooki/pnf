<?php
/**
 * @file
 * pnf_mailchimp.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pnf_mailchimp_filter_default_formats() {
  $formats = array();

  // Exported format: MailChimp campaign.
  $formats['mailchimp_campaign'] = array(
    'format' => 'mailchimp_campaign',
    'name' => 'MailChimp campaign',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'mailchimp_campaign' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
