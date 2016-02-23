<?php
/**
 * @file
 * pnf_agenda.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_agenda_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Atelier',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0eb9de84-6bc2-4262-b4b0-116c434b30af',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Manifestation locale',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '492e87e3-d541-438a-b7b6-075e2098e696',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Exposition',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5a26b9ce-1f68-4dd4-bdb7-82a387c0ae1e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Conférence-Projection',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c62ea6dc-d1c4-4651-900f-ecad337b4f7e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Sortie accompagnée',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e40a46bc-8029-465b-b4d4-39f4121d274e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Séjour',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f28674d7-e5db-463d-bc46-aa5af3ab551a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  $terms[] = array(
    'name' => 'Rendez-vous',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ff0e197f-e5c8-44de-95bc-425cfd00a9d6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_categories',
  );
  return $terms;
}
