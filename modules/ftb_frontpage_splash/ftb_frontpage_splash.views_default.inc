<?php
/**
 * @file
 * ftb_frontpage_splash.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ftb_frontpage_splash_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'news_flow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news_flow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['display_comment'] = 'This view is outputting the default articles which should be going on the frontpage';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Media */
  $handler->display->display_options['fields']['field_media']['id'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media']['ui_name'] = 'Media';
  $handler->display->display_options['fields']['field_media']['label'] = '';
  $handler->display->display_options['fields']['field_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_media']['element_class'] = 'slides';
  $handler->display->display_options['fields']['field_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_media']['element_wrapper_class'] = 'media-slider';
  $handler->display->display_options['fields']['field_media']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media']['settings'] = array(
    'file_view_mode' => 'media_large',
  );
  $handler->display->display_options['fields']['field_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_media']['separator'] = '';
  $handler->display->display_options['fields']['field_media']['field_api_classes'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_lead']['id'] = 'field_lead';
  $handler->display->display_options['fields']['field_lead']['table'] = 'field_data_field_lead';
  $handler->display->display_options['fields']['field_lead']['field'] = 'field_lead';
  $handler->display->display_options['fields']['field_lead']['label'] = '';
  $handler->display->display_options['fields']['field_lead']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_lead']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_lead']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead']['alter']['preserve_tags'] = '<strong> <i> <b> <em>';
  $handler->display->display_options['fields']['field_lead']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead']['element_type'] = '0';
  $handler->display->display_options['fields']['field_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lead']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_lead']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_lead']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_lead']['field_api_classes'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['display_comment'] = 'A basic news flow for the frontpage.';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['news_flow'] = $view;

  return $export;
}
