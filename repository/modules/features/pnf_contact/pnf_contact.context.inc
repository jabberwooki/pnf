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
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  $export['contact-front'] = $context;

  return $export;
}
