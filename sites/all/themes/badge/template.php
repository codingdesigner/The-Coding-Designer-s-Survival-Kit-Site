<?php



function badge_preprocess_page(&$variables) {
// drupal_add_js(drupal_get_path('theme', 'MYTHEME') . '/mytheme.js', 'file');
  drupal_add_js(drupal_get_path('theme', 'badge') . '/js/jquery.lettering.js');
  drupal_add_js(drupal_get_path('theme', 'badge') . '/js/script.js');
  
  
  $variables['site_name_a'] = "The Coding Designer&rsquo;s";
  $variables['site_name_b'] = "Survival Kit";
}


// function badge_preprocess_node(&$variables) {
  // dsm($variables);
// }