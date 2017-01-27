<?php
/**
 * @file
 * pnf_mailchimp.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_mailchimp_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter_all';
  $context->description = '';
  $context->tag = 'Newsletter';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_signup-newsletter_block' => array(
          'module' => 'mailchimp_signup',
          'delta' => 'newsletter_block',
          'region' => 'pre_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Newsletter');
  $export['newsletter_all'] = $context;

  return $export;
}
