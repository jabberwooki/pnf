<?php
/**
 * @file
 * pnf_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pnf_newsletter_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agenda_banner|node|simplenews|full';
  $field_group->group_name = 'group_agenda_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bannière agenda',
    'weight' => '21',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bannière agenda',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-agenda-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_agenda_banner|node|simplenews|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_email_title_date|node|simplenews|email_html';
  $field_group->group_name = 'group_email_title_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'email_html';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conteneur Titre Date',
    'weight' => '2',
    'children' => array(
      0 => 'field_newsletter_date',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Conteneur Titre Date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-email-title-date field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_email_title_date|node|simplenews|email_html'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_banner|node|simplenews|full';
  $field_group->group_name = 'group_news_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bannière actus',
    'weight' => '19',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bannière actus',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-news-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_news_banner|node|simplenews|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsflashes_banner|node|simplenews|full';
  $field_group->group_name = 'group_newsflashes_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bannière brèves',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bannière brèves',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-newsflashes-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_newsflashes_banner|node|simplenews|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_email_header|node|simplenews|email_html';
  $field_group->group_name = 'group_newsletter_email_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'email_html';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En-tête',
    'weight' => '0',
    'children' => array(
      0 => 'newsletter_header_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-newsletter-email-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_newsletter_email_header|node|simplenews|email_html'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_header|node|simplenews|full';
  $field_group->group_name = 'group_newsletter_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En-tête',
    'weight' => '0',
    'children' => array(
      0 => 'newsletter_header_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-newsletter-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_newsletter_header|node|simplenews|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_date_banner|node|simplenews|full';
  $field_group->group_name = 'group_title_date_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conteneur Titre Date',
    'weight' => '1',
    'children' => array(
      0 => 'field_newsletter_date',
      1 => 'spacer',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Conteneur Titre Date',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-date-banner field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_date_banner|node|simplenews|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bannière actus');
  t('Bannière agenda');
  t('Bannière brèves');
  t('Conteneur Titre Date');
  t('En-tête');

  return $field_groups;
}
