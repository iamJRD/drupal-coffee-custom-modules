<?php
/**
 * @file
 * todotoday.features.inc
 */

/**
 * Implements hook_views_api().
 */
function todotoday_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function todotoday_node_info() {
  $items = array(
    'todotoday_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Task for adding to To Do List'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
