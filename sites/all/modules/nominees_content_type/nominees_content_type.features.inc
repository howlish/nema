<?php
/**
 * @file
 * nominees_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nominees_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nominees_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nominees_content_type_node_info() {
  $items = array(
    'nominees' => array(
      'name' => t('Nominees'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Band Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
