<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 23/10/17
 * Time: 17:50
 */

function pnf_consultations_settings_form() {

  $form['moderators_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Modérateur(s)'),
  );

  $options = array('0' => 'NON', '1' => 'OUI');
  $form['moderators_settings']['consult_moderators_alert'] = array(
    '#type' => 'radios',
    '#title' => 'Envoyer un message d\'avertissement au(x) modérateur(s)',
    '#description' => 'Si OUI, un email est envoyé chaque fois qu\'un commentaire de consultation est posté.',
    '#options' => $options,
    '#default_value' => variable_get('consult_moderators_alert','1'),
  );

  $form['moderators_settings']['consult_moderators_emails'] = array(
    '#type' => 'textfield',
    '#title' => 'Adresse(s) email des modérateurs',
    '#description' => 'Entrez la ou les adresse email des modérateurs, séparées par une <b>virgule</b> ou un <b>point virgule</b>.',
    '#default_value' => variable_get('consult_moderators_emails', 'toto'),
  );

  $form['guidelines_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Charte des débats'),
  );

  $initial_guidelines_text = file_get_contents(drupal_get_path('module','pnf_consultations') . '/default_guidelines_text.txt');

  // We must first get the stored text and get the 'value' key
  // because text_format input are stored as array instead of string.
  $default_guideline_text = variable_get('consult_guidelines_text', 0);
  if ($default_guideline_text) {
    $default_guideline_text_value = $default_guideline_text['value'];
  }
  else {
    $default_guideline_text_value = $initial_guidelines_text;
  }

  $form['guidelines_settings']['consult_guidelines_text']['consult_guidelines_text'] = array(
    '#type' => 'text_format',
    '#title' => 'Texte de la charte',
    '#format' => 'filtered_html',
    '#default_value' => $default_guideline_text_value,
  );

  return system_settings_form($form);
}