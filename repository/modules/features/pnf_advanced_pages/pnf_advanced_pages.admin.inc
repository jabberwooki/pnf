<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 09/12/15
 * Time: 16:33
 */

function pnf_adv_pages_settings_form() {
  $form['page_background_color'] = array(
    '#type' => 'fieldset',
    '#title' => t('Page background colors'),
  );


  $default_color = 'eeeeee';
  $form['page_background_color']['bg_color_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Color') . ' 1',
    '#size' => 5,
    '#default_value' => variable_get('bg_color_1', $default_color),
    '#attributes' => array('style' => 'background-color: #' . variable_get('bg_color_1', $default_color)),
  );
  $form['page_background_color']['bg_color_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Color') . ' 2',
    '#size' => 5,
    '#default_value' => variable_get('bg_color_2', $default_color),
    '#attributes' => array('style' => 'background-color: #' . variable_get('bg_color_2', $default_color)),
  );
  $form['page_background_color']['bg_color_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Color') . ' 3',
    '#size' => 5,
    '#default_value' => variable_get('bg_color_3', $default_color),
    '#attributes' => array('style' => 'background-color: #' . variable_get('bg_color_3', $default_color)),
  );

  return system_settings_form($form);
}

