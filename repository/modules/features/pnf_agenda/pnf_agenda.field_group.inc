<?php
/**
 * @file
 * pnf_agenda.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnf_agenda_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_resume|node|event|teaser';
  $field_group->group_name = 'group_event_resume';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résumé événement',
    'weight' => '2',
    'children' => array(
      0 => 'field_event_location',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Résumé événement',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-resume field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_resume|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_resume|node|event|teaser_home';
  $field_group->group_name = 'group_event_resume';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser_home';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'event_resume',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_categorie',
      1 => 'field_event_location',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'event_resume',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-resume field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_event_resume|node|event|teaser_home'] = $field_group;

  return $export;
}
