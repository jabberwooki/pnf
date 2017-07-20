<?php
/**
 * @file
 * kcore.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kcore_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_paths_allow_wildcards';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_paths_allow_wildcards'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_any_force';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_any_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_any_restricts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_label';
  $strongarm->value = 'Ne contenant aucun des mots';
  $export['custom_search_blocks_1_criteria_negative_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_weight';
  $strongarm->value = '8';
  $export['custom_search_blocks_1_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_label';
  $strongarm->value = 'Contenant n\'importe lequel des mots';
  $export['custom_search_blocks_1_criteria_or_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_weight';
  $strongarm->value = '6';
  $export['custom_search_blocks_1_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_label';
  $strongarm->value = 'Contenant l\'expression';
  $export['custom_search_blocks_1_criteria_phrase_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_weight';
  $strongarm->value = '7';
  $export['custom_search_blocks_1_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_custom_paths_weight';
  $strongarm->value = '9';
  $export['custom_search_blocks_1_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_hint_text';
  $strongarm->value = '';
  $export['custom_search_blocks_1_hint_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_image_path';
  $strongarm->value = '';
  $export['custom_search_blocks_1_image_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_label';
  $strongarm->value = 'Chercher dans ce site';
  $export['custom_search_blocks_1_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_max_length';
  $strongarm->value = '128';
  $export['custom_search_blocks_1_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_node_types';
  $strongarm->value = array(
    'news' => 0,
    'event' => 0,
    'promotion' => 0,
    'slide' => 0,
    'contract' => 0,
    'document' => 0,
    'job' => 0,
    'advanced_page' => 0,
    'page' => 0,
    'raa' => 0,
  );
  $export['custom_search_blocks_1_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_node_types_excluded';
  $strongarm->value = array(
    'news' => 0,
    'event' => 0,
    'promotion' => 0,
    'slide' => 0,
    'contract' => 0,
    'document' => 0,
    'job' => 0,
    'advanced_page' => 0,
    'page' => 0,
    'raa' => 0,
  );
  $export['custom_search_blocks_1_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_order';
  $strongarm->value = array(
    'search_box' => array(
      'sort' => '-1',
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => '6',
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => '7',
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => '8',
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => '9',
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => '10',
      'region' => 'block',
    ),
  );
  $export['custom_search_blocks_1_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_other';
  $strongarm->value = array(
    'user' => 0,
  );
  $export['custom_search_blocks_1_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths';
  $strongarm->value = '';
  $export['custom_search_blocks_1_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_1_paths_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector_label';
  $strongarm->value = 'Personnalisez votre recherche';
  $export['custom_search_blocks_1_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_1_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_search_box_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_search_box_weight';
  $strongarm->value = '-1';
  $export['custom_search_blocks_1_search_box_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_size';
  $strongarm->value = '15';
  $export['custom_search_blocks_1_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_submit_button_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_button_weight';
  $strongarm->value = '10';
  $export['custom_search_blocks_1_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_text';
  $strongarm->value = 'OK';
  $export['custom_search_blocks_1_submit_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_text';
  $strongarm->value = 'Rechercher';
  $export['custom_search_blocks_1_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_1_type_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_all';
  $strongarm->value = '-Tout-';
  $export['custom_search_blocks_1_type_selector_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_label';
  $strongarm->value = 'Chercher';
  $export['custom_search_blocks_1_type_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_1_type_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Paris';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_day_month';
  $strongarm->value = 'd F';
  $export['date_format_date_day_month'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_l';
  $strongarm->value = 'd F Y';
  $export['date_format_date_l'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_m';
  $strongarm->value = 'd M Y';
  $export['date_format_date_m'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_s';
  $strongarm->value = 'd/m/Y';
  $export['date_format_date_s'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_l';
  $strongarm->value = 'd F Y - H\\hi';
  $export['date_format_date_time_l'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_m';
  $strongarm->value = 'd M Y - H\\hi';
  $export['date_format_date_time_m'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_s';
  $strongarm->value = 'd/m/Y - H\\hi';
  $export['date_format_date_time_s'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xl';
  $strongarm->value = 'D d M Y - H\\hi';
  $export['date_format_date_time_xl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xs';
  $strongarm->value = 'd/m/y - H\\hi';
  $export['date_format_date_time_xs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xxl';
  $strongarm->value = 'D d F Y - H\\hi';
  $export['date_format_date_time_xxl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xxs';
  $strongarm->value = 'd.m.Y - H\\hi';
  $export['date_format_date_time_xxs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xxxl';
  $strongarm->value = 'l d F Y - H\\hi';
  $export['date_format_date_time_xxxl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_time_xxxs';
  $strongarm->value = 'd.m.y - H\\hi';
  $export['date_format_date_time_xxxs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xl';
  $strongarm->value = 'D d M Y';
  $export['date_format_date_xl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xs';
  $strongarm->value = 'd/m/y';
  $export['date_format_date_xs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xxl';
  $strongarm->value = 'D d F Y';
  $export['date_format_date_xxl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xxs';
  $strongarm->value = 'd.m.Y';
  $export['date_format_date_xxs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xxxl';
  $strongarm->value = 'l d F Y';
  $export['date_format_date_xxxl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_date_xxxs';
  $strongarm->value = 'd.m.y';
  $export['date_format_date_xxxs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l d F Y - H\\hi';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'l d/m/y - H\\hi';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd/m/Y';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 1;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityform_type_defaults';
  $strongarm->value = array(
    'data' => array(
      'form_status' => 'ENTITYFORM_OPEN',
      'roles' => array(
        1 => '1',
        2 => '2',
        4 => 0,
        5 => 0,
        3 => 0,
      ),
      'resubmit_action' => 'new',
      'submission_page_title' => 'Merci',
      'submission_text' => array(
        'value' => '<p>Votre demande a bien été enregistrée.<br />
Nous nous efforçons d\'y répondre dans les plus brefs délais.</p>
',
        'format' => 'plain_text',
      ),
      'submissions_view' => 'entityforms',
      'user_submissions_view' => 'user_entityforms',
      'draft_redirect_path' => '',
      'draft_button_text' => 'Save Draft',
      'draft_save_text' => array(
        'value' => '',
        'format' => 'full_html',
      ),
      'submit_button_text' => 'Soumettre',
      'submit_confirm_msg' => 'Your submission has been saved.',
      'your_submissions' => 'Your Submissions: [entityform_type:label]',
      'disallow_resubmit_msg' => 'You already submitted this form',
      'delete_confirm_msg' => 'Are you sure you want to delete this Submission for [entityform_type:label]?',
      'page_title_view' => 'Form Submission: [entityform_type:label]',
      'draftable' => 0,
      'preview_page' => 0,
      'submission_show_submitted' => 0,
    ),
  );
  $export['entityform_type_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
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
      'teaser_home_files' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_home_flashnews' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_list_flashnews' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'print' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_element_name';
  $strongarm->value = 'url';
  $export['honeypot_element_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_contact_entityform_edit_form';
  $strongarm->value = 1;
  $export['honeypot_form_contact_entityform_edit_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 0;
  $export['honeypot_form_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_time_limit';
  $strongarm->value = '3';
  $export['honeypot_time_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_page';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => 1,
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
    'javascript' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lang_dropdown_language';
  $strongarm->value = array(
    'showall' => 0,
    'tohome' => 0,
    'width' => '32',
    'display' => '2',
    'widget' => '0',
    'msdropdown' => array(
      'visible_rows' => 5,
      'rounded' => 1,
      'animation' => 'slideDown',
      'event' => 'click',
      'skin' => 'ldsSkin',
      'custom_skin' => '',
    ),
    'chosen' => array(
      'disable_search' => 1,
      'no_results_text' => 'No language match',
    ),
    'ddslick' => array(
      'ddslick_height' => 0,
      'showSelectedHTML' => 1,
      'imagePosition' => 'left',
      'skin' => 'ddsDefault',
      'custom_skin' => '',
    ),
    'languageicons' => array(
      'flag_position' => 1,
    ),
  );
  $export['lang_dropdown_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'less_engine';
  $strongarm->value = 'less.php';
  $export['less_engine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_url_part';
  $strongarm->value = '0';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = 'full_html';
  $export['mimemail_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mmenu_item_mmenu_left';
  $strongarm->value = array(
    'enabled' => '1',
    'title' => 'Left menu',
    'name' => 'mmenu_left',
    'blocks' => array(
      0 => array(
        'module_delta' => 'mmenu|search',
        'menu_parameters' => array(
          'min_depth' => '1',
        ),
        'title' => '<none>',
        'collapsed' => '0',
        'wrap' => '1',
        'module' => 'mmenu',
        'delta' => 'search',
      ),
      1 => array(
        'module_delta' => 'menu|menu-menu-themes',
        'menu_parameters' => array(
          'min_depth' => '1',
        ),
        'title' => '<none>',
        'collapsed' => '0',
        'wrap' => '1',
        'module' => 'menu',
        'delta' => 'menu-menu-themes',
      ),
      2 => array(
        'module_delta' => 'menu|menu-menu-park',
        'menu_parameters' => array(
          'min_depth' => '1',
        ),
        'title' => '<none>',
        'collapsed' => '0',
        'wrap' => '1',
        'module' => 'menu',
        'delta' => 'menu-menu-park',
      ),
      3 => array(
        'module_delta' => 'menu|menu-tools',
        'menu_parameters' => array(
          'min_depth' => '1',
        ),
        'title' => '<none>',
        'collapsed' => '0',
        'wrap' => '1',
        'module' => 'menu',
        'delta' => 'menu-tools',
      ),
      4 => array(
        'module_delta' => 'menu|menu-national-parks',
        'menu_parameters' => array(
          'min_depth' => '1',
        ),
        'title' => '<none>',
        'collapsed' => '0',
        'wrap' => '1',
        'module' => 'menu',
        'delta' => 'menu-national-parks',
      ),
    ),
    'options' => array(
      'classes' => 'mm-basic',
      'effects' => array(
        'mm-slide' => 'mm-slide',
      ),
      'slidingSubmenus' => FALSE,
      'clickOpen' => array(
        'open' => TRUE,
        'selector' => '#mmenu-selector',
      ),
      'counters' => array(
        'add' => FALSE,
        'update' => FALSE,
      ),
      'dragOpen' => array(
        'open' => TRUE,
        'pageNode' => 'body',
        'threshold' => 100,
        'maxStartPos' => 50,
      ),
      'footer' => array(
        'add' => FALSE,
        'content' => '',
        'title' => 'Copyright ©2016',
        'update' => TRUE,
      ),
      'header' => array(
        'add' => FALSE,
        'content' => '',
        'title' => 'Parc National des Cévennes',
        'update' => TRUE,
      ),
      'labels' => array(
        'collapse' => FALSE,
      ),
      'offCanvas' => array(
        'enabled' => TRUE,
        'modal' => FALSE,
        'moveBackground' => FALSE,
        'position' => 'left',
        'zposition' => 'front',
      ),
      'searchfield' => array(
        'add' => FALSE,
        'addTo' => 'menu',
        'search' => FALSE,
        'placeholder' => 'Rechercher',
        'noResults' => 'No results found.',
        'showLinksOnly' => TRUE,
      ),
    ),
    'configurations' => array(
      'clone' => FALSE,
      'preventTabbing' => FALSE,
      'panelNodetype' => 'div, ul, ol',
      'transitionDuration' => 400,
      'classNames' => array(
        'label' => 'Label',
        'panel' => 'Panel',
        'selected' => 'Selected',
        'buttonbars' => array(
          'buttonbar' => 'anchors',
        ),
        'counters' => array(
          'counter' => 'Counter',
        ),
        'fixedElements' => array(
          'fixedTop' => 'FixedTop',
          'fixedBottom' => 'FixedBottom',
        ),
        'footer' => array(
          'panelFooter' => 'Footer',
        ),
        'header' => array(
          'panelHeader' => 'Header',
          'panelNext' => 'Next',
          'panelPrev' => 'Prev',
        ),
        'labels' => array(
          'collapsed' => 'Collapsed',
        ),
        'toggles' => array(
          'toggle' => 'Toggle',
          'check' => 'Check',
        ),
      ),
      'dragOpen' => array(
        'width' => array(
          'perc' => 0.80000000000000004,
          'min' => 140,
          'max' => 440,
        ),
        'height' => array(
          'perc' => 0.80000000000000004,
          'min' => 140,
          'max' => 880,
        ),
      ),
      'offCanvas' => array(
        'menuInjectMethod' => 'prepend',
        'menuWrapperSelector' => 'body',
        'pageNodetype' => 'div',
        'pageSelector' => 'body > div',
      ),
    ),
  );
  $export['mmenu_item_mmenu_left'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_en_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_fr_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_page_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_comments';
  $strongarm->value = 0;
  $export['print_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_css';
  $strongarm->value = '';
  $export['print_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_footer_options';
  $strongarm->value = '0';
  $export['print_footer_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_footer_user';
  $strongarm->value = '';
  $export['print_footer_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_book_link';
  $strongarm->value = '1';
  $export['print_html_book_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_sys_urllist';
  $strongarm->value = 0;
  $export['print_html_display_sys_urllist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_class';
  $strongarm->value = 'print-page';
  $export['print_html_link_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_pos';
  $strongarm->value = array(
    'block' => 'block',
    'link' => 0,
    'corner' => 0,
    'help' => 0,
  );
  $export['print_html_link_pos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_teaser';
  $strongarm->value = 0;
  $export['print_html_link_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_text';
  $strongarm->value = 'Imprimer';
  $export['print_html_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_text_enabled';
  $strongarm->value = 1;
  $export['print_html_link_text_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_link_use_alias';
  $strongarm->value = 1;
  $export['print_html_link_use_alias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_new_window';
  $strongarm->value = 1;
  $export['print_html_new_window'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_sendtoprinter';
  $strongarm->value = 0;
  $export['print_html_sendtoprinter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_show_link';
  $strongarm->value = '2';
  $export['print_html_show_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_sys_link_pages';
  $strongarm->value = '';
  $export['print_html_sys_link_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_sys_link_visibility';
  $strongarm->value = '1';
  $export['print_html_sys_link_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_windowclose';
  $strongarm->value = 1;
  $export['print_html_windowclose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_keep_theme_css';
  $strongarm->value = 0;
  $export['print_keep_theme_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_logo_options';
  $strongarm->value = '1';
  $export['print_logo_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_logo_upload';
  $strongarm->value = '';
  $export['print_logo_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_logo_url';
  $strongarm->value = '';
  $export['print_logo_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_newwindow';
  $strongarm->value = '1';
  $export['print_newwindow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_robots_noarchive';
  $strongarm->value = 1;
  $export['print_robots_noarchive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_robots_nofollow';
  $strongarm->value = 1;
  $export['print_robots_nofollow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_robots_noindex';
  $strongarm->value = 1;
  $export['print_robots_noindex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_sourceurl_date';
  $strongarm->value = 0;
  $export['print_sourceurl_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_sourceurl_enabled';
  $strongarm->value = 1;
  $export['print_sourceurl_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_sourceurl_forcenode';
  $strongarm->value = 0;
  $export['print_sourceurl_forcenode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_urls';
  $strongarm->value = 1;
  $export['print_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_urls_anchors';
  $strongarm->value = 0;
  $export['print_urls_anchors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'FR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_line_height_allow';
  $strongarm->value = 0;
  $export['text_resize_line_height_allow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_line_height_max';
  $strongarm->value = '36';
  $export['text_resize_line_height_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_line_height_min';
  $strongarm->value = '16';
  $export['text_resize_line_height_min'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_maximum';
  $strongarm->value = '25';
  $export['text_resize_maximum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_minimum';
  $strongarm->value = '12';
  $export['text_resize_minimum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_reset_button';
  $strongarm->value = 0;
  $export['text_resize_reset_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_resize_scope';
  $strongarm->value = 'body';
  $export['text_resize_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'news_types' => 'news_types',
    'contract_categories' => 'contract_categories',
    'procurement_types' => 'procurement_types',
    'document_categories' => 'document_categories',
    'job_types' => 'job_types',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'news_categories' => 0,
    'news_tags' => 0,
    'public' => 0,
    'sectors' => 0,
    'event_categories' => 0,
    'media_categories' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  return $export;
}
