<?php
/**
 * @file
 * pnf_agenda.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pnf_agenda_taxonomy_default_vocabularies() {
  return array(
    'event_categories' => array(
      'name' => 'Catégories d\'évenement',
      'machine_name' => 'event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
