<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 10/11/16
 * Time: 09:18
 */

/**
 * Form for uploading the newsletter header image.
 */
function pnf_newsletter_settings_form() {
  // IMAGE
  $form['pnf_newsletter_header'] = array(
    '#type' => 'fieldset',
    '#title' => t('Paramétrages de l\'image d\'en-tête'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  // If there is already an uploaded header image, display the image here.
  if ($header_image_fid = variable_get('newsletter_header_image_fid', FALSE)) {
    $header_image = file_load($header_image_fid);

    $form['pnf_newsletter_header']['image'] = array(
      '#markup' => theme('image_style',
        array(
          'style_name' => 'newsletter_header',
          'path' => $header_image->uri,
          'alt' => 'Newsletter header image',
        )
      ),
    );
  }
  $form['pnf_newsletter_header']['newsletter_header_image_fid'] = array(
    '#title' => t('Fichier image'),
    '#type' => 'managed_file',
    '#description' => t('Image que vous voulez afficher dans l\'en-tête de la lettre d\'infos.<br/>Dimensions préconisées : largeur <b>600 px</b>, hauteur <b>125 px</b>.'),
    '#default_value' => variable_get('newsletter_header_image_fid', ''),
    '#upload_location' => 'public://pnf_newsletter/',
  );

  // LOGO
  $form['pnf_newsletter_logo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Paramétrages du logo'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
//  // If there is already an uploaded logo image, display the image here.
//  if ($logo_image_fid = variable_get('newsletter_logo_image_fid', FALSE)) {
//    $logo_image = file_load($logo_image_fid);
//
//    $form['pnf_newsletter_logo']['logo'] = array(
//      '#markup' => theme('image_style',
//        array(
//          'style_name' => 'newsletter_logo',
//          'path' => $logo_image->uri,
//          'alt' => 'Newsletter logo',
//        )
//      ),
//    );
//  }
//  $form['pnf_newsletter_logo']['newsletter_logo_image_fid'] = array(
//    '#title' => t('Fichier du logo'),
//    '#type' => 'managed_file',
//    '#description' => t('Loge que vous voulez afficher dans l\'en-tête de la lettre d\'infos.<br/>Dimensions préconisée : hauteur <b>125 px</b>.'),
//    '#default_value' => variable_get('newsletter_logo_image_fid', ''),
//    '#upload_location' => 'public://pnf_newsletter/',
//  );

  return system_settings_form($form);
}

/**
 * Verifies that the user supplied an image with the form.
 *
 */
function pnf_newsletter_settings_form_validate($form, &$form_state) {
  if (!isset($form_state['values']['newsletter_header_image_fid']) || !is_numeric($form_state['values']['newsletter_header_image_fid'])) {
    form_set_error('newsletter_header_image_fid', t('Please select an image to upload.'));
  }
//  if (!isset($form_state['values']['newsletter_logo_image_fid']) || !is_numeric($form_state['values']['newsletter_logo_image_fid'])) {
//    form_set_error('newsletter_header_image_fid', t('Please select an image to upload.'));
//  }
}

/**
 * Submit handler for the Newsletter for the Newsletter image form.
 *
 */
function image_example_style_form_submit($form, &$form_state) {
  if ($form_state['values']['newsletter_header_image_fid'] != 0) {
    $file = file_load($form_state['values']['newsletter_header_image_fid']);
    $file->status = FILE_STATUS_PERMANENT;
    file_save($file);
    file_usage_add($file, 'pnf_newsletter', 'header_image', 1);

    // Save the fid of the file so that the module can reference it later.
    variable_set('newsletter_header_image_fid', $file->fid);
    drupal_set_message(t('The image @image_name was uploaded.', array('@image_name' => $file->filename)));
  }
  elseif ($form_state['values']['newsletter_header_image_fid'] == 0) {
    // Retrieve the old file's id.
    $fid = variable_get('newsletter_header_image_fid', FALSE);
    $file = $fid ? file_load($fid) : FALSE;
    if ($file) {
      file_usage_delete($file, 'pnf_newsletter', 'header_image', 1);
      file_delete($file);
    }

    variable_set('newsletter_header_image_fid', FALSE);
    drupal_set_message(t('The image @image_name was removed.', array('@image_name' => $file->filename)));
  }

//  if ($form_state['values']['newsletter_logo_image_fid'] != 0) {
//    $file = file_load($form_state['values']['newsletter_logo_image_fid']);
//    $file->status = FILE_STATUS_PERMANENT;
//    file_save($file);
//    file_usage_add($file, 'pnf_newsletter', 'logo_image', 1);
//
//    // Save the fid of the file so that the module can reference it later.
//    variable_set('newsletter_logo_image_fid', $file->fid);
//    drupal_set_message(t('The logo @logo_name was uploaded.', array('@logo_name' => $file->filename)));
//  }
//  elseif ($form_state['values']['newsletter_logo_image_fid'] == 0) {
//    // Retrieve the old file's id.
//    $fid = variable_get('newsletter_header_image_fid', FALSE);
//    $file = $fid ? file_load($fid) : FALSE;
//    if ($file) {
//      file_usage_delete($file, 'pnf_newsletter', 'logo_image', 1);
//      file_delete($file);
//    }
//
//    variable_set('newsletter_logo_image_fid', FALSE);
//    drupal_set_message(t('The logo @logo_name was removed.', array('@logo_name' => $file->filename)));
//  }
}

/**
 * Theme function to display selected image using the thumbnail style.
 *
 */
function theme_pnf_newsletter_header_image($variables) {
  $image = $variables['image'];
  $style = 'thumbnail';

  $output = theme('image_style',
    array(
      'style_name' => $style,
      'path' => $image->uri,
      'getsize' => FALSE,
    )
  );
//  $output .= '<p>' . t('This image is being displayed using the image style %style_name.', array('%style_name' => $style)) . '</p>';
  return $output;
}