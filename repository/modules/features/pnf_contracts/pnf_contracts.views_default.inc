<?php
/**
 * @file
 * pnf_contracts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_contracts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contracts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marchés publics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marchés publics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_contract_status_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_contract_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_procurement_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date de publication du marché (field_contract_pub_date) */
  $handler->display->display_options['sorts']['field_contract_pub_date_value']['id'] = 'field_contract_pub_date_value';
  $handler->display->display_options['sorts']['field_contract_pub_date_value']['table'] = 'field_data_field_contract_pub_date';
  $handler->display->display_options['sorts']['field_contract_pub_date_value']['field'] = 'field_contract_pub_date_value';
  $handler->display->display_options['sorts']['field_contract_pub_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contract' => 'contract',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Statut de la consultation (field_contract_status) */
  $handler->display->display_options['filters']['field_contract_status_value']['id'] = 'field_contract_status_value';
  $handler->display->display_options['filters']['field_contract_status_value']['table'] = 'field_data_field_contract_status';
  $handler->display->display_options['filters']['field_contract_status_value']['field'] = 'field_contract_status_value';
  $handler->display->display_options['filters']['field_contract_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contract_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contract_status_value']['expose']['operator_id'] = 'field_contract_status_value_op';
  $handler->display->display_options['filters']['field_contract_status_value']['expose']['label'] = 'Statut';
  $handler->display->display_options['filters']['field_contract_status_value']['expose']['operator'] = 'field_contract_status_value_op';
  $handler->display->display_options['filters']['field_contract_status_value']['expose']['identifier'] = 'field_contract_status_value';
  $handler->display->display_options['filters']['field_contract_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  /* Filter criterion: Content: Catégorie du marché (field_contract_category) */
  $handler->display->display_options['filters']['field_contract_category_tid']['id'] = 'field_contract_category_tid';
  $handler->display->display_options['filters']['field_contract_category_tid']['table'] = 'field_data_field_contract_category';
  $handler->display->display_options['filters']['field_contract_category_tid']['field'] = 'field_contract_category_tid';
  $handler->display->display_options['filters']['field_contract_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_contract_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contract_category_tid']['expose']['operator_id'] = 'field_contract_category_tid_op';
  $handler->display->display_options['filters']['field_contract_category_tid']['expose']['label'] = 'Catégories';
  $handler->display->display_options['filters']['field_contract_category_tid']['expose']['operator'] = 'field_contract_category_tid_op';
  $handler->display->display_options['filters']['field_contract_category_tid']['expose']['identifier'] = 'field_contract_category_tid';
  $handler->display->display_options['filters']['field_contract_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_contract_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_contract_category_tid']['vocabulary'] = 'contract_categories';
  /* Filter criterion: Content: Type de procédure (field_procurement_type) */
  $handler->display->display_options['filters']['field_procurement_type_tid']['id'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['table'] = 'field_data_field_procurement_type';
  $handler->display->display_options['filters']['field_procurement_type_tid']['field'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_procurement_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator_id'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['label'] = 'Types';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['operator'] = 'field_procurement_type_tid_op';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['identifier'] = 'field_procurement_type_tid';
  $handler->display->display_options['filters']['field_procurement_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_procurement_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_procurement_type_tid']['vocabulary'] = 'procurement_types';

  /* Display: Page Marchés publics */
  $handler = $view->new_display('page', 'Page Marchés publics', 'page_contracts');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'marches-publics';
  $translatables['contracts'] = array(
    t('Master'),
    t('Marchés publics'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Statut'),
    t('Catégories'),
    t('Types'),
    t('Page Marchés publics'),
  );
  $export['contracts'] = $view;

  return $export;
}
