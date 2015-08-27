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
    'name' => 'Scolaires',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3fb5ce07-2b29-4fdd-b54a-7b4aee5c6d3d',
    'vocabulary_machine_name' => 'public',
  );
  $terms[] = array(
    'name' => 'Scientifiques',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7ef5329c-63f5-44af-9955-ba7032058809',
    'vocabulary_machine_name' => 'public',
  );
  $terms[] = array(
    'name' => 'Brèves',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a11bc3af-0f5a-4cdd-ad9a-7a3304eb8970',
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'Dossiers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ada69fa2-d961-472c-82fa-f044f0a166bb',
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'Actualités',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dbf7ebef-3b25-4f1c-a8db-5c031de33c79',
    'vocabulary_machine_name' => 'news_types',
  );
  $terms[] = array(
    'name' => 'Institutionnels',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dc16e89a-80bd-4fbb-bb49-3163b7cf1535',
    'vocabulary_machine_name' => 'public',
  );
  $terms[] = array(
    'name' => 'Grand public',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ef16beb7-1370-433e-b4c0-4219a3184953',
    'vocabulary_machine_name' => 'public',
  );
  return $terms;
}
