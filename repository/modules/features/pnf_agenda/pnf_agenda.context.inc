<?php
/**
 * @file
 * pnf_agenda.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pnf_agenda_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event-page';
  $context->description = '';
  $context->tag = 'Agenda';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'agenda/*' => 'agenda/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['event-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events-list';
  $context->description = '';
  $context->tag = 'Agenda';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'agenda' => 'agenda',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-news' => array(
          'module' => 'menu',
          'delta' => 'menu-news',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  $export['events-list'] = $context;

  return $export;
}
