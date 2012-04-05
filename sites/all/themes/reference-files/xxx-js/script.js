(function ($) {
  // Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.teasers = {
    attach: function (context, settings) {
      // teaser tabs
      var teaserContainers = $('#all-teasers #teasers article');
      teaserContainers.hide().filter(':first').show();
      function badgeClick (el) {
        teaserContainers.hide().removeClass('selected');
        teaserContainers.filter(el.hash).show().addClass('selected');
        $('#all-teasers nav.samples ul li a').removeClass('selected');
        $(el).addClass('selected');
        return false;
      }
      $('#all-teasers nav.samples ul li a').css('cursor', 'default').click(function () {
        badgeClick(this);
        return false;
      }).filter(':first').click();
      $('#all-teasers nav.samples ul li a').mouseenter(
        function () {
          badgeClick(this);
        });
    }
  };
  
  Drupal.behaviors.codeexamples = {
    attach: function (context, settings) {
      // code example tabs
      var exampleContainers = $('#tools #tools-examples article');
      exampleContainers.hide().filter(':first').show();
      $('#tools nav.tabs ul li a').click(function () {
        // tabClick(this);
        // return false;
        exampleContainers.hide().removeClass('selected');
        exampleContainers.filter(this.hash).show().addClass('selected');
        $('#tools nav.tabs ul li a').removeClass('selected');
        $(this).addClass('selected');
        return false;
      }).filter(':first').click();
    }
  };
  
  Drupal.behaviors.typography = {
    attach: function (context, settings) {
      // typography
      $('#teasers article h1').lettering();
      $('#intro h1').lettering();
      $('#learn h1 a, #learn h2 a, #learn h3 a').lettering();
      $('#tools #tools-examples article h1').lettering();
      $('#survivors .views-row h1').lettering();
      // $('#prepared header h1').lettering('words');
      // $('#prepared h1, #prepared h2, #prepared h3').lettering();
      $('#prepared header h1').lettering('words').children('span').lettering();
      $('#prepared .download a').lettering('words');
    }
  };
}(jQuery));

/*
// syntax highlighter
SyntaxHighlighter.all();
*/

