<?php
/**
 * @file
 * pnf_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-front';
  $context->description = '';
  $context->tag = 'Contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-bloc-contact-accueil' => array(
          'module' => 'bean',
          'delta' => 'bloc-contact-accueil',
          'region' => 'footer_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  $export['contact-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_all';
  $context->description = '';
  $context->tag = 'Contact';
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
        'bean-bloc-contact-accueil' => array(
          'module' => 'bean',
          'delta' => 'bloc-contact-accueil',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  $export['contact_all'] = $context;

  return $export;
}
