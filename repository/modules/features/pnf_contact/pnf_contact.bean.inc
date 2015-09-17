<?php
/**
 * @file
 * pnf_contact.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function pnf_contact_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'contact';
  $bean_type->label = 'Contact';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['contact'] = $bean_type;

  return $export;
}
