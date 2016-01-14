<?php
/**
 * @file
 * pnf_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnf_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|node|news|teaser';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résumé',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_key_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Résumé',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resume field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resume|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|node|news|teaser_home';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser_home';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résumé',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_key_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Résumé',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-resume field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resume|node|news|teaser_home'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Résumé');

  return $field_groups;
}
