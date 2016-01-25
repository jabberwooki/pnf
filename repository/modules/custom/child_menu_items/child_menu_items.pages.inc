<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 06/10/15
 * Time: 12:09
 */

function child_menu_items_preprocess_cmi_list(&$variables){
  $query = db_select('menu_links', 'ml1');
  $query->join('menu_links', 'ml2', 'ml1.plid=ml2.mlid');
  $query->join('menu_fields', 'mf', 'ml1.mlid=mf.mlid');
  $query->join('field_data_field_menu_item_image','fd','mf.id=fd.entity_id');
  $query->join('file_managed','fm','fd.field_menu_item_image_fid=fm.fid');

  $query->fields('ml1', array('mlid','plid','link_title','link_path'));
  $query->addField('ml2', 'link_path','parent_link_path');
  $query->addField('fd', 'field_menu_item_image_width','width');
  $query->addField('fd', 'field_menu_item_image_height','height');
  $query->addField('fd', 'field_menu_item_image_alt','alt');
  $query->addField('fd', 'field_menu_item_image_title','title');
  $query->addField('fm', 'uri');

  $query->condition('ml1.menu_name', 'menu-menu-themes');
  $query->condition('ml2.link_path', $variables['menu_item_link_path']);
  $query->orderBy('ml1.weight');

  $result = $query->execute()->fetchAll();

  $col_number = variable_get('cmi_col_number', '3');
  $split_items = array_chunk($result, $col_number);

  $variables['split_items'] = $split_items;
  $variables['image_style'] = $image_style = variable_get('childmi_image_format', 'none');
  $variables['col_number'] = $col_number;
}