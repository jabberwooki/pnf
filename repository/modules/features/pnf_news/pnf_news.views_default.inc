<?php
/**
 * @file
 * pnf_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Actualités';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actualités';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Relationship: Content: Type (field_news_type) */
  $handler->display->display_options['relationships']['field_news_type_tid']['id'] = 'field_news_type_tid';
  $handler->display->display_options['relationships']['field_news_type_tid']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['relationships']['field_news_type_tid']['field'] = 'field_news_type_tid';
  $handler->display->display_options['relationships']['field_news_type_tid']['label'] = 'Type d\'actu';
  $handler->display->display_options['relationships']['field_news_type_tid']['required'] = TRUE;
  /* Relationship: Content: Public (field_public) */
  $handler->display->display_options['relationships']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['relationships']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['relationships']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['relationships']['field_public_tid']['label'] = 'Public';
  /* Relationship: Content: Secteurs (field_sectors) */
  $handler->display->display_options['relationships']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['relationships']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['relationships']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['relationships']['field_sectors_tid']['label'] = 'Secteur';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date de publication affichée (field_displayed_pub_date) */
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'dbf7ebef-3b25-4f1c-a8db-5c031de33c79';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Catégorie (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator_id'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['identifier'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_categories';
  /* Filter criterion: Content: Secteurs (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator_id'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['label'] = 'Secteur';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['identifier'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sectors';
  /* Filter criterion: Content: Public (field_public) */
  $handler->display->display_options['filters']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['filters']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_public_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator_id'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['label'] = 'Public';
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['identifier'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_public_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_public_tid']['vocabulary'] = 'public';

  /* Display: Page Actualités */
  $handler = $view->new_display('page_with_page_title', 'Page Actualités', 'page_news_news');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['path'] = 'actualites';

  /* Display: Page Brèves */
  $handler = $view->new_display('page_with_page_title', 'Page Brèves', 'page_news_flashnews');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Brèves';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_list_flashnews';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_displayed_pub_date|field_displayed_pub_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser_list_flashnews';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
    'news' => 'news',
  );
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'a11bc3af-0f5a-4cdd-ad9a-7a3304eb8970';
  /* Filter criterion: Content: Catégorie (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator_id'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['identifier'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_categories';
  /* Filter criterion: Content: Secteurs (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator_id'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['label'] = 'Secteur';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['identifier'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sectors';
  /* Filter criterion: Content: Public (field_public) */
  $handler->display->display_options['filters']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['filters']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator_id'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['label'] = 'Public';
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['identifier'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_public_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_public_tid']['vocabulary'] = 'public';
  $handler->display->display_options['path'] = 'breves';

  /* Display: Page Dossiers */
  $handler = $view->new_display('page_with_page_title', 'Page Dossiers', 'page_news_files');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dossiers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
    'news' => 'news',
  );
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'ada69fa2-d961-472c-82fa-f044f0a166bb';
  /* Filter criterion: Content: Catégorie (field_news_category) */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator_id'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['operator'] = 'field_news_category_tid_op';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['identifier'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'news_categories';
  /* Filter criterion: Content: Secteurs (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator_id'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['label'] = 'Secteur';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['identifier'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sectors';
  /* Filter criterion: Content: Public (field_public) */
  $handler->display->display_options['filters']['field_public_tid']['id'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['table'] = 'field_data_field_public';
  $handler->display->display_options['filters']['field_public_tid']['field'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator_id'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['label'] = 'Public';
  $handler->display->display_options['filters']['field_public_tid']['expose']['operator'] = 'field_public_tid_op';
  $handler->display->display_options['filters']['field_public_tid']['expose']['identifier'] = 'field_public_tid';
  $handler->display->display_options['filters']['field_public_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_public_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_public_tid']['vocabulary'] = 'public';
  $handler->display->display_options['path'] = 'dossiers';

  /* Display: Bloc Documents utiles */
  $handler = $view->new_display('block', 'Bloc Documents utiles', 'block_news_docs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents utiles';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'filesize' => 'filesize',
    'extension' => 'extension',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Documents utiles (field_downloadable_docs:fid) */
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['id'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['table'] = 'field_data_field_downloadable_docs';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['field'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['label'] = 'Documents utiles';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Documents utiles */
  $handler->display->display_options['fields']['field_downloadable_docs']['id'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['table'] = 'field_data_field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['field'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_docs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_docs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_docs']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_downloadable_docs']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_docs']['delta_offset'] = '0';
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  /* Field: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['relationship'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['fields']['extension']['label'] = '';
  $handler->display->display_options['fields']['extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bloc accueil actus */
  $handler = $view->new_display('block', 'Bloc accueil actus', 'block_news_news_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'A la une';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_home';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_displayed_pub_date|field_displayed_pub_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser_home';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Lien Toutes les actualités';
  $handler->display->display_options['header']['area']['content'] = '<a href="/actualites">toutes les actualités</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'dbf7ebef-3b25-4f1c-a8db-5c031de33c79';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Bloc accueil brèves */
  $handler = $view->new_display('block', 'Bloc accueil brèves', 'block_news_flashnews_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Brèves';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_home_flashnews';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_displayed_pub_date|field_displayed_pub_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser_home_flashnews';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date de publication affichée */
  $handler->display->display_options['fields']['field_displayed_pub_date']['id'] = 'field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['table'] = 'field_data_field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['field'] = 'field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['label'] = '';
  $handler->display->display_options['fields']['field_displayed_pub_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_displayed_pub_date']['settings'] = array(
    'format_type' => 'date_xxs',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Descriptif */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_news_type_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'a11bc3af-0f5a-4cdd-ad9a-7a3304eb8970';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Bloc accueil dossiers */
  $handler = $view->new_display('block', 'Bloc accueil dossiers', 'block_news_files_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dossiers';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = 'false';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_home_files';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_displayed_pub_date|field_displayed_pub_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser_home_files';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Lien Tous les dossiers';
  $handler->display->display_options['header']['area']['content'] = '<a href="/dossiers">tous les dossiers</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['uuid']['value'] = 'ada69fa2-d961-472c-82fa-f044f0a166bb';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $translatables['news'] = array(
    t('Master'),
    t('Actualités'),
    t('plus'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Type d\'actu'),
    t('Public'),
    t('Secteur'),
    t('Catégorie'),
    t('Page Actualités'),
    t('more'),
    t('term'),
    t('Page Brèves'),
    t('Brèves'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Page Dossiers'),
    t('Dossiers'),
    t('Bloc Documents utiles'),
    t('Documents utiles'),
    t('Tout'),
    t('Bloc accueil actus'),
    t('A la une'),
    t('Lien Toutes les actualités'),
    t('<a href="/actualites">toutes les actualités</a>'),
    t('Bloc accueil brèves'),
    t('Bloc accueil dossiers'),
    t('Lien Tous les dossiers'),
    t('<a href="/dossiers">tous les dossiers</a>'),
  );
  $export['news'] = $view;

  return $export;
}
