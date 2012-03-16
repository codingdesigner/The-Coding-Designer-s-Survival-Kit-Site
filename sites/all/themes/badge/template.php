<?php



function badge_preprocess_page(&$variables) {
  // drupal_add_js(drupal_get_path('theme', 'MYTHEME') . '/mytheme.js', 'file');
  // drupal_add_js(drupal_get_path('theme', 'badge') . '/js/jquery.lettering.js');
  drupal_add_js(drupal_get_path('theme', 'badge') . '/js/sources/Lettering.js/jquery.lettering.js');
  drupal_add_js(drupal_get_path('theme', 'badge') . '/js/script.js');
  drupal_add_js("<script>document.write('<script src=\"http://' + (location.host || 'localhost').split(':')[0] + ':35729/livereload.js?snipver=1\"></' + 'script>')</script>",
    array('type' => 'inline', 'scope' => 'footer')
  );


  $variables['site_name_a'] = "The Coding Designer&rsquo;s";
  $variables['site_name_b'] = "Survival Kit";
}


// function badge_preprocess_node(&$variables) {
  // dsm($variables);
// }


function badge_preprocess_media_vimeo_video(&$variables) {
  $variables['output'] = <<<OUTPUT
    <iframe src="http://player.vimeo.com/video/{$variables['video_id']}?title=0&amp;byline=0&amp;portrait=0" width="640" height="480" frameborder="0"></iframe>
OUTPUT;
}

function badge_preprocess_node(&$variables) {
  $variables['submitted'] = 'Posted on ' . format_date($variables['created'], 'custom', 'l, F jS, Y');
}
