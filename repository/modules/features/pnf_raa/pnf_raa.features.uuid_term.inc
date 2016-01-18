<?php
/**
 * @file
 * pnf_raa.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_raa_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Autorisations du directeur – Prises de vues',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '04f29764-1010-4bc8-80c3-cee67975fd64',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Résolutions du bureau du Conseil d\'administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '4fdf177e-0a12-44fd-8bc3-4e81aacea395',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Arrêtés du directeur',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '98b384a2-f9d3-4b5f-81fc-c9b5eb260644',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Autorisations du directeur – Manifestations sportives',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '9bc7f3e8-da8a-4c8f-9309-dd0a0c7d3e13',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Résolutions du Conseil d\'administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cb3f84cf-dfaf-49f9-bf52-5184fd7df1fa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Autorisations du directeur – Travaux',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'cf07fb54-2742-4662-8408-5d482cf4e11d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Autorisations du directeur – Survols',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'eb07c2f4-fa78-43af-a6cf-943d576e367d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  $terms[] = array(
    'name' => 'Autorisations du directeur – Autres activités',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => 'ec2cdf53-6e5e-4859-9893-a7a8b59d2585',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'raa_categories',
  );
  return $terms;
}
