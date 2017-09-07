<?php
/**
 * @file
 * pnf_scientific_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnf_scientific_reports_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr_report_infos|node|scientific_report|full';
  $field_group->group_name = 'group_sr_report_infos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scientific_report';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos rapport',
    'weight' => '5',
    'children' => array(
      0 => 'field_sr_authors',
      1 => 'field_sr_editor',
      2 => 'field_sr_pages',
      3 => 'field_sr_reference',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infos rapport',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sr-report-infos field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr_report_infos|node|scientific_report|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sr_sites_theme|node|scientific_report|full';
  $field_group->group_name = 'group_sr_sites_theme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scientific_report';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sites et thème',
    'weight' => '2',
    'children' => array(
      0 => 'field_displayed_pub_date',
      1 => 'field_sectors',
      2 => 'field_sr_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sites et thème',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sr-sites-theme field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sr_sites_theme|node|scientific_report|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Infos rapport');
  t('Sites et thème');

  return $field_groups;
}
