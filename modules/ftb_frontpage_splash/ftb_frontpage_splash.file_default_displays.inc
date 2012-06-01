<?php
/**
 * @file
 * ftb_frontpage_splash.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function ftb_frontpage_splash_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid2__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__ftb_styles_grid2__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid2__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid2__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid2__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_field_panels_ref_ref_formatter_mini';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mini_panel' => '',
    'language_filter' => 1,
    'cols' => '0',
  );
  $export['video__ftb_styles_grid2__file_field_panels_ref_ref_formatter_mini'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:name]',
    'title' => '[file:name]',
  );
  $export['video__ftb_styles_grid2__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'grid2-140x78',
  );
  $export['video__ftb_styles_grid2__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid2__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '140',
    'height' => '78',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 0,
    'hd' => 0,
    'showsearch' => 0,
    'modestbranding' => 1,
    'showinfo' => 0,
    'chromeless' => 0,
  );
  $export['video__ftb_styles_grid2__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid3__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__ftb_styles_grid3__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid3__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid3__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid3__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_field_panels_ref_ref_formatter_mini';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mini_panel' => '',
    'language_filter' => 1,
    'cols' => '0',
  );
  $export['video__ftb_styles_grid3__file_field_panels_ref_ref_formatter_mini'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:name]',
    'title' => '[file:name]',
  );
  $export['video__ftb_styles_grid3__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'grid3-220x140',
  );
  $export['video__ftb_styles_grid3__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid3__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '220',
    'height' => '140',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 0,
    'hd' => 0,
    'showsearch' => 0,
    'modestbranding' => 1,
    'showinfo' => 0,
    'chromeless' => 0,
  );
  $export['video__ftb_styles_grid3__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid4__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__ftb_styles_grid4__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid4__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid4__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid4__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_field_panels_ref_ref_formatter_mini';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mini_panel' => '',
    'language_filter' => 1,
    'cols' => '0',
  );
  $export['video__ftb_styles_grid4__file_field_panels_ref_ref_formatter_mini'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:name]',
    'title' => '[file:name]',
  );
  $export['video__ftb_styles_grid4__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'grid4-300x170',
  );
  $export['video__ftb_styles_grid4__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid4__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '300',
    'height' => '170',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 0,
    'hd' => 0,
    'showsearch' => 0,
    'modestbranding' => 1,
    'showinfo' => 0,
    'chromeless' => 0,
  );
  $export['video__ftb_styles_grid4__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid5__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__ftb_styles_grid5__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid5__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid5__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__ftb_styles_grid5__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_field_panels_ref_ref_formatter_mini';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mini_panel' => '',
    'language_filter' => 1,
    'cols' => '0',
  );
  $export['video__ftb_styles_grid5__file_field_panels_ref_ref_formatter_mini'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:name]',
    'title' => '[file:name]',
  );
  $export['video__ftb_styles_grid5__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'grid5-380x214',
  );
  $export['video__ftb_styles_grid5__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__ftb_styles_grid5__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'version' => '3',
    'theme' => 'dark',
    'width' => '380',
    'height' => '214',
    'fullscreen' => 1,
    'autoplay' => 0,
    'related' => 1,
    'hd' => 0,
    'showsearch' => 0,
    'modestbranding' => 1,
    'showinfo' => 0,
    'chromeless' => 0,
  );
  $export['video__ftb_styles_grid5__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__media_large__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_panels_ref_ref_formatter_mini';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mini_panel' => '',
    'language_filter' => 1,
    'cols' => '0',
  );
  $export['video__media_large__file_field_panels_ref_ref_formatter_mini'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'alt' => '[file:name]',
    'title' => '[file:name]',
  );
  $export['video__media_large__file_image'] = $file_display;

  return $export;
}
