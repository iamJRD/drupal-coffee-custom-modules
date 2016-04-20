<?php
/**
 * @file
 * coffee_imports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coffee_imports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function coffee_imports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function coffee_imports_node_info() {
  $items = array(
    'coffee_imports' => array(
      'name' => t('Coffee Imports'),
      'base' => 'node_content',
      'description' => t('for entry of new coffee imports'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('enter your information regarding new coffee types'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
