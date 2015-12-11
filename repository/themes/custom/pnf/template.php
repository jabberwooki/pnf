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
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/jquery.matchHeight-min.js', 'file');
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/pnf.js', array('type' => 'file','scope' => 'footer', 'weight' => -50));
}

/**
 * Loads compiled stylesheet depending on site URL, OK for dev, staging and production sites.
 */

$parts = array_reverse(explode('.', $_SERVER['SERVER_NAME']));

if ($parts[0] != 'xyz') {
	switch($parts[1]) {
		case 'calanques-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
		break;
		case 'cevennes-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
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
	}
} else {
	switch($parts[2]) {
	  // Calanque
	  case 'pnca':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
		break;
	  case 'preprod-pncal':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
		break;
	  case 'prod-pncal':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
		break;
	  // Cévennes
	  case 'pnce':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
		break;
	  case 'preprod-pnc':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
		break;
	  case 'prod-pnc':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
		break;
	  // Ecrins
	  case 'pnec':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
		break;
	  case 'preprod-pne':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
		break;
	  case 'prod-pne':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
		break;
	  // Guadeloupe
	  case 'pngd':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
		break;
	  case 'preprod-png':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
		break;
	  case 'prod-png':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
		break;
	  // Mercantour
	  case 'pnme':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
		break;
	  case 'preprod-pnm':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
		break;
	  case 'prod-pnm':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
		break;
	  // Amazonien de Guyane
	  case 'pnag':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
		break;
	  case 'preprod-pag':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
		break;
	  case 'prod-pag':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
		break;
	  // Pyrénées
	  case 'pnpy':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
		break;
	  case 'preprod-pnp':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
		break;
	  case 'prod-pnp':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
		break;
	  // Parcs nationaux de France
	  case 'pnf':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
		break;
	  case 'preprod-pnf':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
		break;
	  case 'prod-pnf':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
		break;
	  // Port-Cros
	  case 'pnpc':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
		break;
	  case 'preprod-pnpc':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
		break;
	  case 'prod-pnpc':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
		break;
	  // Réunion
	  case 'pnre':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
		break;
	  case 'preprod-pnrun':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
		break;
	  case 'prod-pnrun':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
		break;
	  // Vanoise
	  case 'pnva':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
		break;
	  case 'preprod-pnv':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
		break;
	  case 'prod-pnv':
		drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
		break;
	}
}