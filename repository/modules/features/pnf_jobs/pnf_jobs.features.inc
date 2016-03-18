<?php
/**
 * @file
 * pnf_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function pnf_jobs_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: civil_services.
  $custom_breadcrumbs['civil_services'] = array(
    'name' => 'Services civiques',
    'titles' => 'Services civiques',
    'paths' => 'services-civiques',
    'visibility_php' => '$jobterm_uuid = \'6e6ec346-0414-4f86-868c-f8151f3644c3\'; // Offre d\'emploi

$job_type_tid = $node->field_job_type[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($job_type_tid);

if ($term->uuid == $jobterm_uuid) {
  return  TRUE;
}
else {
  return FALSE;
}',
    'node_type' => 'job',
    'language' => 'fr',
    'machine_name' => 'civil_services',
  );

  // Exported custom breadcrumb: jobs.
  $custom_breadcrumbs['jobs'] = array(
    'name' => 'Offres d\'emploi',
    'titles' => 'Offres d\'emploi',
    'paths' => 'offres-demploi',
    'visibility_php' => '$jobterm_uuid = \'e2a28688-49e5-4d6a-9f18-e283c535ef4e\'; // Offre d\'emploi

$job_type_tid = $node->field_job_type[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($job_type_tid);

if ($term->uuid == $jobterm_uuid) {
  return  TRUE;
}
else {
  return FALSE;
}',
    'node_type' => 'job',
    'language' => 'fr',
    'machine_name' => 'jobs',
  );

  // Exported custom breadcrumb: trainings.
  $custom_breadcrumbs['trainings'] = array(
    'name' => 'Stages',
    'titles' => 'Stages',
    'paths' => 'stages',
    'visibility_php' => '$jobterm_uuid = \'10cefd12-d3b9-40ec-8f72-a307bc542291\'; // Stages

$job_type_tid = $node->field_job_type[\'und\'][0][\'tid\'];
$term = taxonomy_term_load($job_type_tid);

if ($term->uuid == $jobterm_uuid) {
  return  TRUE;
}
else {
  return FALSE;
}',
    'node_type' => 'job',
    'language' => 'fr',
    'machine_name' => 'trainings',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function pnf_jobs_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Offre d\'emploi'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => t('Une offre d\'emploi.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
