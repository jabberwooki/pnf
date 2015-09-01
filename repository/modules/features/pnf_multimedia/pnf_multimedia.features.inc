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

/**
 * Implements hook_scald_default_context_types().
 */
function pnf_multimedia_scald_default_context_types() {
  $contexts = array();
  $contexts['full-audio'] = array(
    'player' => array(
      'audio' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'audio' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'galleria',
        'settings' => array(
          'width' => 690,
          'height' => 450,
          'fullscreen_link' => 1,
          'thumb_style' => 'thumbnail',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'classic',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-large',
      ),
    ),
  );
  $contexts['full-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['list-audio'] = array(
    'player' => array(
      'audio' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'audio' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['list-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['list-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
        'settings' => array(
          'width' => 690,
          'height' => 450,
          'fullscreen_link' => FALSE,
          'thumb_style' => 'thumbnail',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'classic',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['list-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-medium',
      ),
    ),
  );
  $contexts['list-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'style-thumbnail',
      ),
    ),
  );
  $contexts['sdl_editor_representation-audio'] = array(
    'player' => array(
      'audio' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'audio' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'galleria',
        'settings' => array(
          'width' => 690,
          'height' => 450,
          'fullscreen_link' => FALSE,
          'thumb_style' => 'thumbnail',
          'normal_style' => 'large',
          'big_style' => 'original',
          'theme' => 'classic',
          'options' => '',
        ),
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['sdl_editor_representation-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(
          'classes' => '',
          'caption' => '[atom:title], by [atom:author]',
        ),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-large',
      ),
    ),
  );
  $contexts['sdl_editor_representation-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  return $contexts;
}
