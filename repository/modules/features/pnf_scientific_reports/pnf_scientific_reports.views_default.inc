<?php
/**
 * @file
 * pnf_scientific_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_scientific_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'scientific_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rapports scientifiques';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Scientific reports of the Port-Cros national park';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
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
    'scientific_report' => 'scientific_report',
  );
  /* Filter criterion: Nœud: Secteurs (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
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
  /* Filter criterion: Nœud: Thème (field_sr_theme) */
  $handler->display->display_options['filters']['field_sr_theme_tid']['id'] = 'field_sr_theme_tid';
  $handler->display->display_options['filters']['field_sr_theme_tid']['table'] = 'field_data_field_sr_theme';
  $handler->display->display_options['filters']['field_sr_theme_tid']['field'] = 'field_sr_theme_tid';
  $handler->display->display_options['filters']['field_sr_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sr_theme_tid']['expose']['operator_id'] = 'field_sr_theme_tid_op';
  $handler->display->display_options['filters']['field_sr_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_sr_theme_tid']['expose']['operator'] = 'field_sr_theme_tid_op';
  $handler->display->display_options['filters']['field_sr_theme_tid']['expose']['identifier'] = 'field_sr_theme_tid';
  $handler->display->display_options['filters']['field_sr_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    217795369 => 0,
    231346920 => 0,
    193262079 => 0,
  );
  $handler->display->display_options['filters']['field_sr_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sr_theme_tid']['vocabulary'] = 'scientific_themes';

  /* Display: Liste rapports */
  $handler = $view->new_display('page', 'Liste rapports', 'sr_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Scientific reports of the Port-Cros national park';
  $handler->display->display_options['path'] = 'scientific-reports';
  $export['scientific_reports'] = $view;

  return $export;
}
