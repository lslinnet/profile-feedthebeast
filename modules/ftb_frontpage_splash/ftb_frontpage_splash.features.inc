<?php
/**
 * @file
 * ftb_frontpage_splash.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ftb_frontpage_splash_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ftb_frontpage_splash_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ftb_frontpage_splash_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A news article which goes on the frontpage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
