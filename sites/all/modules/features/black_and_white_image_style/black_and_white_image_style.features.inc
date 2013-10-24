<?php
/**
 * @file
 * black_and_white_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function black_and_white_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: black_and_white.
  $styles['black_and_white'] = array(
    'name' => 'black_and_white',
    'label' => 'Black and White',
    'effects' => array(
      6 => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
