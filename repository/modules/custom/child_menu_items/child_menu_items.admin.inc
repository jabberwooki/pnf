<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 05/10/15
 * Time: 18:36
 */

function child_menu_items_settings_form() {
  // Data store
  $form['cmi_settings'] = array(
    '#type' => 'fieldset',
    '#title' => 'Child Menu Items settings',
    '#description' => 'Paramétrage de l\'affichage des éléments enfants d\'un élément de menu.',
  );
  $styles = image_styles();
  $options = array('none' => 'aucun (image d\'origine)');
  foreach ($styles as $style) {
    $options[$style['name']] = $style['label'];
  }
  $form['cmi_settings']['cmi_image_format'] = array(
    '#type' => 'select',
    '#title' => t('Image style'),
    '#options' => $options,
    '#default_value' => variable_get('cmi_image_format', 'none'),
  );
  $form['cmi_settings']['cmi_col_number'] = array(
    '#type' => 'select',
    '#title' => t('Column number'),
    '#options' => array('1'=>'1', '2' =>'2', '3' => '3', '4' => '4'),
    '#default_value' => variable_get('cmi_col_number', '2'),
  );

  return system_settings_form($form);
}