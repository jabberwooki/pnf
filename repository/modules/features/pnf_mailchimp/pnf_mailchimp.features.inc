<?php
/**
 * @file
 * pnf_mailchimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_mailchimp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function pnf_mailchimp_default_mailchimp_signup() {
  $items = array();
  $items['newsletter_block'] = entity_import('mailchimp_signup', '{
    "name" : "newsletter_block",
    "mc_lists" : { "9399f4b3a4" : "9399f4b3a4" },
    "mode" : "1",
    "title" : "Lettre d\\u0027information",
    "settings" : {
      "path" : "",
      "submit_button" : "OK",
      "confirmation_message" : "Vous \\u00eates enregistr\\u00e9.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "FNAME" : 0,
        "LNAME" : 0
      },
      "description" : "",
      "doublein" : 1,
      "include_interest_groups" : 0
    }
  }');
  return $items;
}
