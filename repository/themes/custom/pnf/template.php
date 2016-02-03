<?php

/**
 * @file
 * template.php
 */

/*respônsive image*/
function pnf_preprocess_image(&$vars) {
        $vars['attributes']['class'][] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
}

function pnf_preprocess_page(&$variables) {
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/jquery-ui-1.11.4.custom/jquery-ui.min.js', 'file');
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/jquery.matchHeight-min.js', 'file');
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/pnf.js', array('type' => 'file','scope' => 'footer', 'weight' => -50));
}

/**
 * Loads compiled stylesheet depending on site URL, OK for dev, staging, pre-production and production sites.
 */

$parts = explode('.', $_SERVER['SERVER_NAME']);

// dev and live instances :
// - www.<park-name>.dev
// - www.<park-name>.fr
if ($parts[0] == 'www') {
	global $google_validation_key;
	$google_validation_key = 'none';

	global $is_live_domain;
	$is_live_domain = ($parts[2] == 'fr' || $parts[2] == 'eu');

  switch ($parts[1]) {
		case 'calanques-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
			break;
		case 'cevennes-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
			if ($is_live_domain) $google_validation_key = '8hrvr44vC-SC_mz27Ur2CZwvCyoqp5eho2U_IQnWQTM';
			break;
		case 'ecrins-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
			break;
		case 'guadeloupe-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
			break;
		case 'mercantour':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
			break;
		case 'parc-amazonien-guyane':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
			break;
		case 'parc-pyrenees':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
			break;
		case 'parcsnationaux':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
			break;
		case 'portcrosparcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
			break;
		case 'reunion-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
			break;
		case 'vanoise-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
			break;
		default :
			$google_validation_key = 'none';
  }
}
// AR staging instance :
// - <acronym>.pnfdev.xyz
elseif ($parts[2] == 'xyz') {
  switch ($parts[0]) {
	// Calanque
	case 'pnca':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
	  break;
	// Cévennes
	case 'pnce':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
	  break;
	// Ecrins
	case 'pnec':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
	  break;
	// Guadeloupe
	case 'pngd':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
	  break;
	// Mercantour
	case 'pnme':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
	  break;
	// Amazonien de Guyane
	case 'pnag':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
	  break;
	// Pyrénées
	case 'pnpy':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
	  break;
	// Parcs nationaux de France
	case 'pnf':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
	  break;
	// Port-Cros
	case 'pnpc':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
	  break;
	// Réunion
	case 'pnre':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
	  break;
	// Vanoise
	case 'pnva':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
	  break;
  }
}
// preprod and prod instances :
// - preprod-<acronym>.<park-name>.fr
// - prod-<acronym>.<park-name>.fr
else {
  switch(substr($parts[0], strpos($parts[0], '-') +1)) {
	// Calanque
	case 'pncal':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
	  break;
	// Cévennes
	case 'pnc':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
	  break;
	// Ecrins
	case 'pne':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
	  break;
	// Guadeloupe
	case 'png':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
	  break;
	// Mercantour
	case 'pnm':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
	  break;
	// Amazonien de Guyane
	case 'pag':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
	  break;
	// Pyrénées
	case 'pnp':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
	  break;
	// Parcs nationaux de France
	case 'pnf':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
	  break;
	// Port-Cros
	case 'pnpc':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
	  break;
	// Réunion
	case 'pnrun':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
	  break;
	// Vanoise
	case 'pnv':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
	  break;
  }
}

function pnf_preprocess_html(&$vars) {
	global $google_validation_key;

	if ($google_validation_key != 'none') {
		$google_webmasters_verification = array(
			'#type' => 'html_tag',
			'#tag' => 'meta',
			'#attributes' => array(
				'name' => 'google-site-verification',
				'content' => $google_validation_key,
			)
		);

		drupal_add_html_head($google_webmasters_verification, 'google_webmasters_verification');
	}
}
