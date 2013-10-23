<?php
/**
 * @file
 * homepage_highlights.features.inc
 */

/**
 * Implements hook_node_info().
 */
function homepage_highlights_node_info() {
  $items = array(
    'homepage_highlights' => array(
      'name' => t('Homepage Highlights'),
      'base' => 'node_content',
      'description' => t('Add a homepage highlight.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
