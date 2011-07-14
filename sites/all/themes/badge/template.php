<?php

drupal_add_js('js/Lettering.js');
drupal_add_js('js/script.js');

function badge_preprocess_page(&$variables) {
  $variables['site_name_a'] = "The Coding Designer&rsquo;s";
  $variables['site_name_b'] = "Survival Kit";
}


// function badge_preprocess_node(&$variables) {
  // dsm($variables);
// }