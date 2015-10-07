<?php
/**
 * @file
 * pnf_landing_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pnf_landing_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cmi_col_number';
  $strongarm->value = '4';
  $export['cmi_col_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cmi_image_format';
  $strongarm->value = 'landing_page_260x260';
  $export['cmi_image_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_menu_fields__menu_menu_themes';
  $strongarm->value = array(
    'view_modes' => array(
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'menu_fields_links_primary' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'landing_page' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'menu_fields_links_secondary' => array(
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'landing_page' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_menu_fields__menu_menu_themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_fields_menus';
  $strongarm->value = array(
    0 => 'menu-menu-themes',
  );
  $export['menu_fields_menus'] = $strongarm;

  return $export;
}
