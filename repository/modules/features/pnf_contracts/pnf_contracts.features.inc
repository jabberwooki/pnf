<?php
/**
 * @file
 * pnf_contracts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_contracts_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pnf_contracts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function pnf_contracts_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: public_contracts.
  $custom_breadcrumbs['public_contracts'] = array(
    'name' => 'Marchés publics (EN)',
    'titles' => 'Current public contracts',
    'paths' => 'current-public-contracts',
    'visibility_php' => 'if ($node->field_contract_status[\'und\'][0][\'value\'] == 1) return TRUE;
return FALSE;',
    'node_type' => 'contract',
    'language' => 'en',
    'machine_name' => 'public_contracts',
  );

  // Exported custom breadcrumb: public_contracts__awarded_fr.
  $custom_breadcrumbs['public_contracts__awarded_fr'] = array(
    'name' => 'Marchés publics attribués (FR)',
    'titles' => 'Marchés publics attribués',
    'paths' => 'marches-publics-attribues',
    'visibility_php' => 'if ($node->field_contract_status[\'und\'][0][\'value\'] == 2) return TRUE;
return FALSE;
',
    'node_type' => 'contract',
    'language' => 'fr',
    'machine_name' => 'public_contracts__awarded_fr',
  );

  // Exported custom breadcrumb: public_contracts_awarded_en.
  $custom_breadcrumbs['public_contracts_awarded_en'] = array(
    'name' => 'Marchés publics attribués (EN)',
    'titles' => 'Awarded public contracts',
    'paths' => 'awarded-public-contracts',
    'visibility_php' => 'if ($node->field_contract_status[\'und\'][0][\'value\'] == 2) return TRUE;
return FALSE;',
    'node_type' => 'contract',
    'language' => 'en',
    'machine_name' => 'public_contracts_awarded_en',
  );

  // Exported custom breadcrumb: public_contracts_fr.
  $custom_breadcrumbs['public_contracts_fr'] = array(
    'name' => 'Marchés publics (FR)',
    'titles' => 'Marchés publics en cours',
    'paths' => 'marches-publics-en-cours',
    'visibility_php' => 'if ($node->field_contract_status[\'und\'][0][\'value\'] == 1) return TRUE;
return FALSE;',
    'node_type' => 'contract',
    'language' => 'fr',
    'machine_name' => 'public_contracts_fr',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function pnf_contracts_node_info() {
  $items = array(
    'contract' => array(
      'name' => t('Marché public'),
      'base' => 'node_content',
      'description' => t('Un marché public'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
