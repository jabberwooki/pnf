<?php
/**
 * @file
 * pnf_multimedia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pnf_multimedia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'multimedia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'scald_atoms';
  $view->human_name = 'Multimédia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vidéos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
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
    'field_media_category_tid' => array(
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
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
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Atom: Representation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'list';
  /* Field: Atoms: Catégorie */
  $handler->display->display_options['fields']['field_media_category']['id'] = 'field_media_category';
  $handler->display->display_options['fields']['field_media_category']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['fields']['field_media_category']['field'] = 'field_media_category';
  $handler->display->display_options['fields']['field_media_category']['label'] = '';
  $handler->display->display_options['fields']['field_media_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Atoms: Description */
  $handler->display->display_options['fields']['field_atom_description']['id'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['table'] = 'field_data_field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['field'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['label'] = '';
  $handler->display->display_options['fields']['field_atom_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atom_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_atom_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Atoms: Catégorie (field_media_category) */
  $handler->display->display_options['filters']['field_media_category_tid']['id'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['filters']['field_media_category_tid']['field'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator_id'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['identifier'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_media_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_category_tid']['vocabulary'] = 'media_categories';

  /* Display: Galeries */
  $handler = $view->new_display('page_with_page_title', 'Galeries', 'page_photos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Galeries d\'images';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Atoms: Catégorie (field_media_category) */
  $handler->display->display_options['relationships']['field_media_category_tid']['id'] = 'field_media_category_tid';
  $handler->display->display_options['relationships']['field_media_category_tid']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['relationships']['field_media_category_tid']['field'] = 'field_media_category_tid';
  $handler->display->display_options['relationships']['field_media_category_tid']['label'] = 'Catégorie de media';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Atom: Scald ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => 'content',
    'field_formatter_class' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Atoms: Description */
  $handler->display->display_options['fields']['field_atom_description']['id'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['table'] = 'field_data_field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['field'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['label'] = '';
  $handler->display->display_options['fields']['field_atom_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_atom_description']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['field_atom_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atom_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_atom_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="multimedia-teaser">
<div class="group-resume">
[scald_thumbnail]
<p>
[field_atom_description]
</br>
<i class="fa fa-plus-circle"></i>
</p>
</div>
<h3>[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Atoms: Catégorie (field_media_category) */
  $handler->display->display_options['filters']['field_media_category_tid']['id'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['filters']['field_media_category_tid']['field'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_media_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator_id'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['identifier'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_media_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_category_tid']['vocabulary'] = 'media_categories';
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['uuid']['operator'] = '!=';
  $handler->display->display_options['filters']['uuid']['value'] = '5ed1938d-1c9d-4dff-b885-ea096e718753';
  $handler->display->display_options['path'] = 'galeries-photo';

  /* Display: Vidéos */
  $handler = $view->new_display('page_with_page_title', 'Vidéos', 'page_videos');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Atom: Scald ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => 'content',
    'field_formatter_class' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Atoms: Description */
  $handler->display->display_options['fields']['field_atom_description']['id'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['table'] = 'field_data_field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['field'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['label'] = '';
  $handler->display->display_options['fields']['field_atom_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_atom_description']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['field_atom_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atom_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_atom_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="multimedia-teaser">
<div class="group-resume">
[scald_thumbnail]
<p>
[field_atom_description]
</br>
<i class="fa fa-play-circle"></i>
</p>
</div>
<h3>[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'videos';

  /* Display: Sons */
  $handler = $view->new_display('page_with_page_title', 'Sons', 'page_sounds');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sons';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Atom: Scald ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => 'content',
    'field_formatter_class' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Atoms: Description */
  $handler->display->display_options['fields']['field_atom_description']['id'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['table'] = 'field_data_field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['field'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['label'] = '';
  $handler->display->display_options['fields']['field_atom_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_atom_description']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['field_atom_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atom_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_atom_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="multimedia-teaser">
<div class="group-resume">
[scald_thumbnail]
<p>
[field_atom_description]
</br>
<i class="fa fa-headphones"></i>
</p>
</div>
<h3>[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  /* Filter criterion: Atoms: Catégorie (field_media_category) */
  $handler->display->display_options['filters']['field_media_category_tid']['id'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['filters']['field_media_category_tid']['field'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator_id'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['label'] = 'Catégorie';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['operator'] = 'field_media_category_tid_op';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['identifier'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['field_media_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_media_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_category_tid']['vocabulary'] = 'media_categories';
  $handler->display->display_options['path'] = 'sons';

  /* Display: Cartothèque */
  $handler = $view->new_display('page_with_page_title', 'Cartothèque', 'page_maps');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cartothèque';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Atoms: Catégorie (field_media_category) */
  $handler->display->display_options['relationships']['field_media_category_tid']['id'] = 'field_media_category_tid';
  $handler->display->display_options['relationships']['field_media_category_tid']['table'] = 'field_data_field_media_category';
  $handler->display->display_options['relationships']['field_media_category_tid']['field'] = 'field_media_category_tid';
  $handler->display->display_options['relationships']['field_media_category_tid']['label'] = 'Catégorie de media';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Atom: Scald ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => 'content',
    'field_formatter_class' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Atoms: Description */
  $handler->display->display_options['fields']['field_atom_description']['id'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['table'] = 'field_data_field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['field'] = 'field_atom_description';
  $handler->display->display_options['fields']['field_atom_description']['label'] = '';
  $handler->display->display_options['fields']['field_atom_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_atom_description']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['field_atom_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_atom_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_atom_description']['settings'] = array(
    'trim_length' => '120',
  );
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'atom/[sid]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="multimedia-teaser">
<div class="group-resume">
[scald_thumbnail]
<p>
[field_atom_description]
</br>
<i class="fa fa-plus-circle"></i>
</p>
</div>
<h3>[title]</h3>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['relationship'] = 'field_media_category_tid';
  $handler->display->display_options['filters']['uuid']['value'] = '5ed1938d-1c9d-4dff-b885-ea096e718753';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['path'] = 'cartotheque';
  $export['multimedia'] = $view;

  return $export;
}
