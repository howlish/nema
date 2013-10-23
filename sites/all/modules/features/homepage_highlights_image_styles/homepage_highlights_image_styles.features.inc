<?php
/**
 * @file
 * homepage_highlights_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function homepage_highlights_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_highlight.
  $styles['homepage_highlight'] = array(
    'name' => 'homepage_highlight',
    'label' => 'Homepage Highlight',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 271,
          'height' => 219,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_highlight_hover.
  $styles['homepage_highlight_hover'] = array(
    'name' => 'homepage_highlight_hover',
    'label' => 'Homepage Highlight Hover',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 271,
          'height' => 219,
        ),
        'weight' => 1,
      ),
      5 => array(
        'label' => 'Desaturate',
        'help' => 'Desaturate converts an image to grayscale.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
