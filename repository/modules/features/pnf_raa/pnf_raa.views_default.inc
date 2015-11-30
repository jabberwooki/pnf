<?php
/**
 * @file
 * pnf_raa.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_raa_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'raa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RAA';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recueil des actes administratifs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_raa_category',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terme';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'raa_categories' => 'raa_categories',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'news_categories' => 0,
    'event_categories' => 0,
    'document_categories' => 0,
    'contract_categories' => 0,
    'media_categories' => 0,
    'news_tags' => 0,
    'public' => 0,
    'sectors' => 0,
    'news_types' => 0,
    'job_types' => 0,
    'procurement_types' => 0,
  );
  /* Field: Content: Catégorie */
  $handler->display->display_options['fields']['field_raa_category']['id'] = 'field_raa_category';
  $handler->display->display_options['fields']['field_raa_category']['table'] = 'field_data_field_raa_category';
  $handler->display->display_options['fields']['field_raa_category']['field'] = 'field_raa_category';
  $handler->display->display_options['fields']['field_raa_category']['label'] = '';
  $handler->display->display_options['fields']['field_raa_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_raa_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raa_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_raa_category']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Publié le';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_day_month';
  /* Field: Content: Document(s) téléchargeable(s) */
  $handler->display->display_options['fields']['field_raa_files']['id'] = 'field_raa_files';
  $handler->display->display_options['fields']['field_raa_files']['table'] = 'field_data_field_raa_files';
  $handler->display->display_options['fields']['field_raa_files']['field'] = 'field_raa_files';
  $handler->display->display_options['fields']['field_raa_files']['label'] = '';
  $handler->display->display_options['fields']['field_raa_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_raa_files']['settings'] = array(
    'edit' => 'Modifier',
    'delete' => 'Supprimer',
    'add' => 'Ajouter',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_raa_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_raa_files']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'raa' => 'raa',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'raa_list');
  $handler->display->display_options['path'] = 'raa';
  $translatables['raa'] = array(
    t('Master'),
    t('Recueil des actes administratifs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('terme'),
    t('Publié le'),
    t('Page'),
  );
  $export['raa'] = $view;

  return $export;
}
