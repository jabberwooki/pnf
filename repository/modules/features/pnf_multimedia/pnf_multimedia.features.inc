<?php
/**
 * @file
 * pnf_multimedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_multimedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_multimedia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
