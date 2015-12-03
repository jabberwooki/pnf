<?php
/**
 * @file
 * pnf_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function pnf_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Brèves',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a11bc3af-0f5a-4cdd-ad9a-7a3304eb8970',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'Dossiers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ada69fa2-d961-472c-82fa-f044f0a166bb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'Actualités',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dbf7ebef-3b25-4f1c-a8db-5c031de33c79',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'news_types',
  );
  return $terms;
}
