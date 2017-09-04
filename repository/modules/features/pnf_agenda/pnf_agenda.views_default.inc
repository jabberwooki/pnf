<?php
/**
 * @file
 * pnf_agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_agenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evénements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['sorts']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['sorts']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['sorts']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['sorts']['field_event_dates_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator_id'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['label'] = 'Du';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['identifier'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Dates - end date (field_event_dates:value2) */
  $handler->display->display_options['filters']['field_event_dates_value2']['id'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value2']['field'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator_id'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['label'] = 'Au';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['identifier'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value2']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Category (field_event_categorie) */
  $handler->display->display_options['filters']['field_event_categorie_tid']['id'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['table'] = 'field_data_field_event_categorie';
  $handler->display->display_options['filters']['field_event_categorie_tid']['field'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['operator_id'] = 'field_event_categorie_tid_op';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['operator'] = 'field_event_categorie_tid_op';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['identifier'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_categorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_categorie_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Sites (field_sectors) */
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

  /* Display: Page Agenda */
  $handler = $view->new_display('page_with_page_title', 'Page Agenda', 'page_events');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Pas d\'évènement';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no event at the moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['sorts']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['sorts']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['sorts']['field_event_dates_value']['field'] = 'field_event_dates_value';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates - end date (field_event_dates:value2) */
  $handler->display->display_options['filters']['field_event_dates_value2']['id'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value2']['field'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator_id'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['label'] = 'From';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['operator'] = 'field_event_dates_value2_op';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['identifier'] = 'field_event_dates_value2';
  $handler->display->display_options['filters']['field_event_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator_id'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['label'] = 'To';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['operator'] = 'field_event_dates_value_op';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['identifier'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_event_dates_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Category (field_event_categorie) */
  $handler->display->display_options['filters']['field_event_categorie_tid']['id'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['table'] = 'field_data_field_event_categorie';
  $handler->display->display_options['filters']['field_event_categorie_tid']['field'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_categorie_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['operator_id'] = 'field_event_categorie_tid_op';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['operator'] = 'field_event_categorie_tid_op';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['identifier'] = 'field_event_categorie_tid';
  $handler->display->display_options['filters']['field_event_categorie_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_event_categorie_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_categorie_tid']['vocabulary'] = 'event_categories';
  /* Filter criterion: Content: Sites (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sectors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator_id'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['operator'] = 'field_sectors_tid_op';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['identifier'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
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
  /* Filter criterion: Content: Dates début/fin publication -  start date (field_pub_dates) */
  $handler->display->display_options['filters']['field_pub_dates_value']['id'] = 'field_pub_dates_value';
  $handler->display->display_options['filters']['field_pub_dates_value']['table'] = 'field_data_field_pub_dates';
  $handler->display->display_options['filters']['field_pub_dates_value']['field'] = 'field_pub_dates_value';
  $handler->display->display_options['filters']['field_pub_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_pub_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates début/fin publication - end date (field_pub_dates:value2) */
  $handler->display->display_options['filters']['field_pub_dates_value2']['id'] = 'field_pub_dates_value2';
  $handler->display->display_options['filters']['field_pub_dates_value2']['table'] = 'field_data_field_pub_dates';
  $handler->display->display_options['filters']['field_pub_dates_value2']['field'] = 'field_pub_dates_value2';
  $handler->display->display_options['filters']['field_pub_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_pub_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'agenda';

  /* Display: Bloc carte */
  $handler = $view->new_display('block', 'Bloc carte', 'block_event_map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Coordonnées GPS */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_coordinates']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '250px',
    'geofield_map_center' => array(
      'lat' => '',
      'lon' => '',
      'geocode' => 'Find my location',
    ),
    'geofield_map_zoom' => '8',
    'geofield_map_min_zoom' => '0',
    'geofield_map_max_zoom' => '0',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 0,
    'geofield_map_baselayers_hybrid' => 0,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bloc documents utiles */
  $handler = $view->new_display('block', 'Bloc documents utiles', 'block_event_docs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Useful documents';
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
  /* Relationship: Content: Documents téléchargeables (field_downloadable_docs:fid) */
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['id'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['table'] = 'field_data_field_downloadable_docs';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['field'] = 'field_downloadable_docs_fid';
  $handler->display->display_options['relationships']['field_downloadable_docs_fid']['label'] = 'Documents utiles';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Documents téléchargeables */
  $handler->display->display_options['fields']['field_downloadable_docs']['id'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['table'] = 'field_data_field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['field'] = 'field_downloadable_docs';
  $handler->display->display_options['fields']['field_downloadable_docs']['label'] = '';
  $handler->display->display_options['fields']['field_downloadable_docs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_downloadable_docs']['click_sort_column'] = 'fid';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bloc accueil */
  $handler = $view->new_display('block', 'Bloc accueil', 'block_events_home');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_home';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_dates|field_event_dates_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser_home';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/agenda">all events</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Pas d\'évènement';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no event at the moment.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['sorts']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['sorts']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['sorts']['field_event_dates_value']['field'] = 'field_event_dates_value';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_dates.field_event_dates_value2' => 'field_data_field_event_dates.field_event_dates_value2',
  );
  /* Filter criterion: Content: Dates début/fin publication -  start date (field_pub_dates) */
  $handler->display->display_options['filters']['field_pub_dates_value']['id'] = 'field_pub_dates_value';
  $handler->display->display_options['filters']['field_pub_dates_value']['table'] = 'field_data_field_pub_dates';
  $handler->display->display_options['filters']['field_pub_dates_value']['field'] = 'field_pub_dates_value';
  $handler->display->display_options['filters']['field_pub_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_pub_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates début/fin publication - end date (field_pub_dates:value2) */
  $handler->display->display_options['filters']['field_pub_dates_value2']['id'] = 'field_pub_dates_value2';
  $handler->display->display_options['filters']['field_pub_dates_value2']['table'] = 'field_data_field_pub_dates';
  $handler->display->display_options['filters']['field_pub_dates_value2']['field'] = 'field_pub_dates_value2';
  $handler->display->display_options['filters']['field_pub_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_pub_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Titres d'événements */
  $handler = $view->new_display('entityreference', 'Titres d\'événements', 'event_titles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Dates -  start date (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_dates_value']['default_date'] = 'now';
  $export['events'] = $view;

  return $export;
}
