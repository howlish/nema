<?php
/**
 * @file
 * job_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function job_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function job_listings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function job_listings_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: job_listing
  $nodequeues['job_listing'] = array(
    'name' => 'job_listing',
    'title' => 'Job Listing',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to Job Listings',
    'link_remove' => 'Remove from Job Listings',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'accordion',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function job_listings_node_info() {
  $items = array(
    'accordion' => array(
      'name' => t('Accordion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
