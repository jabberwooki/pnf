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
  /* Field: Content: Date de publication affichée */
  $handler->display->display_options['fields']['field_displayed_pub_date']['id'] = 'field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['table'] = 'field_data_field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['field'] = 'field_displayed_pub_date';
  $handler->display->display_options['fields']['field_displayed_pub_date']['label'] = 'Publié le';
  $handler->display->display_options['fields']['field_displayed_pub_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_displayed_pub_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_displayed_pub_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'field_formatter_class' => '',
  );
  /* Field: Content: Documents téléchargeables */
  $handler->display->display_options['fields']['field_downloadable_docs']['id'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['table'] = 'field_data_field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['field'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_docs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_docs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_downloadable_docs']['type'] = 'direct_download_accessible';
  $handler->display->display_options['fields']['field_downloadable_docs']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_downloadable_docs']['delta_offset'] = '0';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Date de publication affichée (field_displayed_pub_date) */
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['id'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['table'] = 'field_data_field_displayed_pub_date';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['field'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['sorts']['field_displayed_pub_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Date de publication affichée (field_displayed_pub_date) */
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['id'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['table'] = 'field_data_field_displayed_pub_date';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['field'] = 'field_displayed_pub_date_value';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['default_argument_options']['code'] = 'return pnf_raa_get_latest_nav_year();';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['year_range'] = '-50:+50';
  $handler->display->display_options['arguments']['field_displayed_pub_date_value']['granularity_reset'] = 0;
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_raa_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'raa';
  $export['raa'] = $view;

  return $export;
}
