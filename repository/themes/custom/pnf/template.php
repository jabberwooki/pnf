<?php

/**
 * @file
 * template.php
 */

/*respônsive image*/
function pnf_preprocess_image(&$vars) {
	if (isset($vars['attributes']['class'])) {
    $key = sizeof($vars['attributes']['class']);
    $vars['attributes']['class'][$key] = ' img-responsive';
	}
	else {
		$vars['attributes']['class'] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
	}
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
		case 'mercantour-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnme_style.css.less');
			break;
		case 'parc-amazonien-guyane':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnag_style.css.less');
			break;
		case 'parc-pyrenees':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
			break;
    case 'pyrenees-parcnational':
      drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpy_style.css.less');
      break;
		case 'parcsnationaux':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnf_style.css.less');
			break;
		case 'portcrosparcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
			break;
		case 'portcros-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnpc_style.css.less');
			break;
		case 'reunion-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnre_style.css.less');
			break;
		case 'vanoise-parcnational':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/pnva_style.css.less');
			break;
		case 'forets-champagne-bourgogne':
			drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/fcb_style.css.less');
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
	// FCB
	case 'fcb':
	  drupal_add_css(drupal_get_path('theme', 'pnf') . '/less/fcb_style.css.less');
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

function pnf_print_ui_format_link($vars) {
	$format = $vars['format'];

	foreach (module_implements('print_link') as $module) {
		$function = $module . '_print_link';
		if (function_exists($function)) {
			$link = call_user_func_array($function, array());

			if ($link['format'] == $format) {
				$link_class = variable_get('print_' . $link['format'] . '_link_class', $link['class']);

				$new_window = FALSE;
				$func = $module . '_print_new_window_alter';
				if (function_exists($func)) {
					$func($new_window, $link['format']);
				}

				$show_link = variable_get('print_' . $link['format'] . '_show_link', PRINT_UI_SHOW_LINK_DEFAULT);
				$link_text = filter_xss(variable_get('print_' . $link['format'] . '_link_text', $link['text']));

				if ($show_link >= 2) {
					$img = drupal_get_path('module', $module) . '/icons/' . $link['icon'];

					// PNF Customisation.
					if ($module == 'print') {
						$img = drupal_get_path('theme', 'pnf') . '/images/print.png';
					}
					// End of PNF customisation.

					switch ($show_link) {
						case 2:
							$text = theme('image', array('path' => $img, 'width' => '20px', 'height' => '20px', 'alt' => $link_text, 'title' => $link_text, 'attributes' => array('class' => array('print-icon'))));
							break;
						case 3:
							$text = theme('image', array('path' => $img, 'width' => '20px', 'height' => '20px', 'alt' => $link_text, 'title' => $link_text, 'attributes' => array('class' => array('print-icon', 'print-icon-margin')))) . $link_text;
							break;
					}
					$html = TRUE;
				}
				else {
					$text = $link_text;
					$html = FALSE;
				}

				return array(
					'text' => $text,
					'html' => $html,
					'attributes' => _print_ui_fill_attributes($link['description'], strip_tags($link_class), $new_window),
				);
			}
		}
	}
}
