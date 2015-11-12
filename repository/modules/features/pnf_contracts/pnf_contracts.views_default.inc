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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
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
    'field_contract_category_tid' => array(
      'bef_format' => 'default',
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
      'bef_format' => 'default',
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
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats';
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
  /* Filter criterion: Content: Statut de la consultation (field_contract_status) */
  $handler->display->display_options['filters']['field_contract_status_value_1']['id'] = 'field_contract_status_value_1';
  $handler->display->display_options['filters']['field_contract_status_value_1']['table'] = 'field_data_field_contract_status';
  $handler->display->display_options['filters']['field_contract_status_value_1']['field'] = 'field_contract_status_value';
  $handler->display->display_options['filters']['field_contract_status_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_contract_status_value_1']['group'] = 1;

  /* Display: Marchés en cours */
  $handler = $view->new_display('page', 'Marchés en cours', 'current_contracts');
  $handler->display->display_options['path'] = 'marches-publics-en-cours';

  /* Display: Marchés attribués */
  $handler = $view->new_display('page', 'Marchés attribués', 'awarded_contracts');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Statut de la consultation (field_contract_status) */
  $handler->display->display_options['filters']['field_contract_status_value_1']['id'] = 'field_contract_status_value_1';
  $handler->display->display_options['filters']['field_contract_status_value_1']['table'] = 'field_data_field_contract_status';
  $handler->display->display_options['filters']['field_contract_status_value_1']['field'] = 'field_contract_status_value';
  $handler->display->display_options['filters']['field_contract_status_value_1']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_contract_status_value_1']['group'] = 1;
  $handler->display->display_options['path'] = 'marches-publics-attribues';
  $translatables['contracts'] = array(
    t('Master'),
    t('Marchés publics'),
    t('more'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Sélectionnez n\'importe quel filtre et cliquez sur Appliquer pour voir les résultats'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Catégories'),
    t('Types'),
    t('Marchés en cours'),
    t('Marchés attribués'),
  );
  $export['contracts'] = $view;

  return $export;
}
