<?php
/**
 * @file
 * kcore.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kcore_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kcore_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
  $custom_date_formats['d F'] = 'd F';
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
  // Exported date format type: date_day_month
  $format_types['date_day_month'] = 'Date JM (jour mois)';
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

/**
 * Implements hook_image_default_styles().
 */
function kcore_image_default_styles() {
  $styles = array();

  // Exported image style: 196x138.
  $styles['196x138'] = array(
    'label' => '196x138',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 196,
          'height' => 138,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 250x175.
  $styles['250x175'] = array(
    'label' => '250x175',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 264x164.
  $styles['264x164'] = array(
    'label' => '264x164',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 264,
          'height' => 164,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 855x415.
  $styles['855x415'] = array(
    'label' => '855x415',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 855,
          'height' => 415,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
