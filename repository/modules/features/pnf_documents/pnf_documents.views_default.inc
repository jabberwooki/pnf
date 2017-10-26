<?php
/**
 * @file
 * pnf_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_documents_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents';
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
      'secondary_label' => 'Options avancées',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_document_category_tid' => array(
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Nœud: Catégorie (field_document_category) */
  $handler->display->display_options['relationships']['field_document_category_tid']['id'] = 'field_document_category_tid';
  $handler->display->display_options['relationships']['field_document_category_tid']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['relationships']['field_document_category_tid']['field'] = 'field_document_category_tid';
  $handler->display->display_options['relationships']['field_document_category_tid']['label'] = 'terme à partir de field_document_category';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nœud: Publié le (field_displayed_pub_date) */
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['id'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['table'] = 'field_data_field_displayed_pub_date';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['field'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['order'] = 'DESC';
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
    'document' => 'document',
  );
  /* Filter criterion: Nœud: Catégorie (field_document_category) */
  $handler->display->display_options['filters']['field_document_category_tid']['id'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['filters']['field_document_category_tid']['field'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator_id'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['label'] = 'Catégories';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['identifier'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_document_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_category_tid']['vocabulary'] = 'document_categories';
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid']['value'] = '8abe9b99-fc3e-4df1-a402-543ce16b3601';
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid_1']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid_1']['value'] = '80b8cbe2-5a72-4d15-807b-3957158dd4cb';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page Documents */
  $handler = $view->new_display('page', 'Page Documents', 'page_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications and documents';
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
    'document' => 'document',
  );
  /* Filter criterion: Nœud: Catégorie (field_document_category) */
  $handler->display->display_options['filters']['field_document_category_tid']['id'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['filters']['field_document_category_tid']['field'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator_id'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['identifier'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_document_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_category_tid']['vocabulary'] = 'document_categories';
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid']['value'] = '8abe9b99-fc3e-4df1-a402-543ce16b3601';
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid_1']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid_1']['value'] = '80b8cbe2-5a72-4d15-807b-3957158dd4cb';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'publications-and-documents';

  /* Display: Espace Presse */
  $handler = $view->new_display('page_with_page_title', 'Espace Presse', 'page_press');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press area';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nœud: Catégorie (field_document_category) */
  $handler->display->display_options['filters']['field_document_category_tid']['id'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['table'] = 'field_data_field_document_category';
  $handler->display->display_options['filters']['field_document_category_tid']['field'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_document_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator_id'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['operator'] = 'field_document_category_tid_op';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['identifier'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['field_document_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_document_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_category_tid']['vocabulary'] = 'document_categories';
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '8abe9b99-fc3e-4df1-a402-543ce16b3601';
  $handler->display->display_options['filters']['uuid']['group'] = 2;
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '80b8cbe2-5a72-4d15-807b-3957158dd4cb';
  $handler->display->display_options['filters']['uuid_1']['group'] = 2;
  $handler->display->display_options['path'] = 'press-area';

  /* Display: Journal du parc */
  $handler = $view->new_display('page_with_page_title', 'Journal du parc', 'page_journal');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Journal du Parc';
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
    'document' => 'document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Terme de taxonomie UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_document_category_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '8375bea1-2b5c-411d-9179-1242c90a16aa';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['path'] = 'journal-du-parc';
  $export['documents'] = $view;

  return $export;
}
