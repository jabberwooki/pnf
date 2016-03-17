<?php
/**
 * @file
 * kcore.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function kcore_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Les parcs nationaux en France',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '19887e85-1916-4d3f-8919-b562fb3074a4',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1446738254,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '63926957-1118-4a4e-a72a-ba949a5f9e0f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Texte d\'introduction de la rubrique des parcs nationaux.<br />
A rédiger...</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Texte d\'introduction de la rubrique des parcs nationaux.<br />
A rédiger...</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'name' => 'superadmin',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'print_html_display' => 1,
  'print_html_display_comment' => 0,
  'print_html_display_urllist' => 0,
  'date' => '2015-11-05 16:44:14 +0100',
);
  return $nodes;
}
