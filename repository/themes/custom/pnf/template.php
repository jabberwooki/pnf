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
  drupal_add_js(drupal_get_path('theme', 'pnf') . '/js/pnf.js', 'file');
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
		case 'pnca':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnca_style.css.less');
		break;
		case 'pnce':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnce_style.css.less');
		break;
		case 'pnec':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnec_style.css.less');
		break;
		case 'pngd':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pngd_style.css.less');
		break;
		case 'pnme':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
		break;
		case 'pnag':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
		break;
		case 'pnpy':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
		break;
		case 'pnf':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
		break;	
		case 'pnpc':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
		break;
		case 'pnre':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
		break;
		case 'pnva':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
		break;	
	}
}