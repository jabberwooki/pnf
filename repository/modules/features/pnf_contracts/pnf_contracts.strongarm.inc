<?php
/**
 * @file
 * pnf_contracts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pnf_contracts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__contract';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_home' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_home_flashnews' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_home_files' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_list_flashnews' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'print' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_contract';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_contract';
  $strongarm->value = '2';
  $export['language_content_type_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_contract';
  $strongarm->value = array();
  $export['menu_options_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_contract';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_contract';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contract';
  $strongarm->value = '1';
  $export['node_preview_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_contract';
  $strongarm->value = 0;
  $export['node_submitted_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_contract_en_pattern';
  $strongarm->value = 'public-procurements/[node:title]';
  $export['pathauto_node_contract_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_contract_fr_pattern';
  $strongarm->value = 'marches-publics/[node:title]';
  $export['pathauto_node_contract_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_contract_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_contract_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_contract_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_contract_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_contract_categories_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_contract_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_procurement_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_procurement_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_contract';
  $strongarm->value = 0;
  $export['print_html_display_comment_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_contract';
  $strongarm->value = 1;
  $export['print_html_display_contract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_contract';
  $strongarm->value = 0;
  $export['print_html_display_urllist_contract'] = $strongarm;

  return $export;
}
