<?php

function ftb_theme_preprocess_field(&$variables) {
  if (in_array($variables['element']['#field_name'], array('field_ns_media_credit', 'field_ns_media_caption'))) {
    if (in_array('clearfix', $variables['classes_array'])) {
      foreach ($variables['classes_array'] as $key => $value) {
        if ($value == 'clearfix') {
          unset($variables['classes_array'][$key]);
        }
      }
    }
  }
  // Add slideshow if necessary.
  if ($variables['element']['#field_type'] == 'file' && $variables['element']['#formatter'] == 'file_rendered') {
    $cycle = libraries_get_path('jquery.cycle') . '/jquery.cycle.min.js';
    drupal_add_js($cycle);
    drupal_add_js(drupal_get_path('theme', 'ftb_theme') . '/js/media_slideshow.js');
  }
}
