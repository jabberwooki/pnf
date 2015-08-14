<?php
/**
 * @file
 * kcore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kcore_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function kcore_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['D d F Y'] = 'D d F Y';
  $custom_date_formats['D d F Y - H\\hi'] = 'D d F Y - H\\hi';
  $custom_date_formats['D d M Y'] = 'D d M Y';
  $custom_date_formats['D d M Y - H\\hi'] = 'D d M Y - H\\hi';
  $custom_date_formats['d F Y'] = 'd F Y';
  $custom_date_formats['d F Y - H\\hi'] = 'd F Y - H\\hi';
  $custom_date_formats['d M Y'] = 'd M Y';
  $custom_date_formats['d M Y - H\\hi'] = 'd M Y - H\\hi';
  $custom_date_formats['d.m.Y'] = 'd.m.Y';
  $custom_date_formats['d.m.Y - H\\hi'] = 'd.m.Y - H\\hi';
  $custom_date_formats['d.m.y'] = 'd.m.y';
  $custom_date_formats['d.m.y - H\\hi'] = 'd.m.y - H\\hi';
  $custom_date_formats['d/m/Y'] = 'd/m/Y';
  $custom_date_formats['d/m/Y - H\\hi'] = 'd/m/Y - H\\hi';
  $custom_date_formats['d/m/y'] = 'd/m/y';
  $custom_date_formats['d/m/y - H\\hi'] = 'd/m/y - H\\hi';
  $custom_date_formats['l d F Y'] = 'l d F Y';
  $custom_date_formats['l d F Y - H\\hi'] = 'l d F Y - H\\hi';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function kcore_date_format_types() {
  $format_types = array();
  // Exported date format type: date_l
  $format_types['date_l'] = 'Date L';
  // Exported date format type: date_m
  $format_types['date_m'] = 'Date M';
  // Exported date format type: date_s
  $format_types['date_s'] = 'Date S';
  // Exported date format type: date_time_l
  $format_types['date_time_l'] = 'Date Heure L';
  // Exported date format type: date_time_m
  $format_types['date_time_m'] = 'Date Heure M';
  // Exported date format type: date_time_s
  $format_types['date_time_s'] = 'Date Heure S';
  // Exported date format type: date_time_xl
  $format_types['date_time_xl'] = 'Date Heure XL';
  // Exported date format type: date_time_xs
  $format_types['date_time_xs'] = 'Date Heure XS';
  // Exported date format type: date_time_xxl
  $format_types['date_time_xxl'] = 'Date Heure XXL';
  // Exported date format type: date_time_xxs
  $format_types['date_time_xxs'] = 'Date Heure XXS';
  // Exported date format type: date_time_xxxl
  $format_types['date_time_xxxl'] = 'Date Heure XXXL';
  // Exported date format type: date_time_xxxs
  $format_types['date_time_xxxs'] = 'Date Heure XXXS';
  // Exported date format type: date_xl
  $format_types['date_xl'] = 'Date XL';
  // Exported date format type: date_xs
  $format_types['date_xs'] = 'Date XS';
  // Exported date format type: date_xxl
  $format_types['date_xxl'] = 'Date XXL';
  // Exported date format type: date_xxs
  $format_types['date_xxs'] = 'Date XXS';
  // Exported date format type: date_xxxl
  $format_types['date_xxxl'] = 'Date XXXL';
  // Exported date format type: date_xxxs
  $format_types['date_xxxs'] = 'Date XXXS';
  return $format_types;
}
