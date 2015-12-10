<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 03/12/15
 * Time: 15:23
 */

function pnf_advanced_pages_settings_form() {
  //
  //$options = array('1' => 'automatique', '2' => 'manuel');
  $form['custom'] = array(
    '#type' => 'fieldset',
    '#title' => t('Affichage des chiffres clés'),
  );

  $form['key_data_display']['coes_number'] = array(
    '#type' => 'select',
    '#title' => t('Nombre d\'entrepreneurs'),
    '#description' => 'Mode d\'affichage',
    '#options' => $options,
    '#default_value' => variable_get('coes_number', '1'),
  );
//  $form['key_data_display']['coes_number_value'] = array(
//    '#type' => 'textfield',
//    '#description' => 'Valeur à afficher (si manuel)',
//    '#size' => 3,
//    '#default_value' => variable_get('coes_number_value', '100'),
//  );
//
//  $form['key_data_display']['refs_number'] = array(
//    '#type' => 'select',
//    '#title' => t('Nombre de référents'),
//    '#description' => 'Mode d\'affichage',
//    '#options' => $options,
//    '#default_value' => variable_get('refs_number', '1'),
//  );
//  $form['key_data_display']['refs_number_value'] = array(
//    '#type' => 'textfield',
//    '#description' => 'Valeur à afficher (si manuel)',
//    '#size' => 3,
//    '#default_value' => variable_get('refs_number_value', '10'),
//  );
//
//  $form['key_data_display']['speakers_number_value'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Nombre d\'intervenants'),
//    '#description' => 'Valeur à afficher',
//    '#size' => 3,
//    '#default_value' => variable_get('speakers_number_value', '10'),
//  );
//
//  $form['key_data_display']['meetings_number_value'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Nombre de rencontres'),
//    '#description' => 'Valeur à afficher',
//    '#size' => 3,
//    '#default_value' => variable_get('meetings_number_value', '10'),
//  );

  return system_settings_form($form);
}