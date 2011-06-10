/* Author: 

*/

$(document).ready(function () {
  // teaser tabs
  var teaserContainers = $('#intro #teasers article');
  teaserContainers.hide().filter(':first').show();
  function badgeClick (el) {
    teaserContainers.hide().removeClass('selected');
    teaserContainers.filter(el.hash).show().addClass('selected');
    $('#intro nav.samples ul li a').removeClass('selected');
    $(el).addClass('selected');
    return false;
  }
  $('#intro nav.samples ul li a').click(function () {
    badgeClick(this);
    return false;
  }).filter(':first').click();
  $('#intro nav.samples ul li a').mouseenter(
    function () {
      badgeClick(this);
    });
  
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
    
  // typography
  $('#teasers article h1').lettering();
  $('#intro h1').lettering();
  $('#learn h1, #learn h2, #learn h3').lettering();
  $('#tools #tools-examples article h1').lettering();
  $('#survivors .survivor h1').lettering();
  // $('#prepared header h1').lettering('words');
  // $('#prepared h1, #prepared h2, #prepared h3').lettering();
  $('#prepared header h1').lettering('words').children('span').lettering();
  $('#prepared .download a').lettering('words');
  
  // syntax highlighter
  SyntaxHighlighter.all();
  
  
  //   // Geared Scrolling
  //   "use strict";
  //   var syncColumn;
  //   console.log(syncColumn);
  //   console.log('helllo');
  //   $('#all-examples #tools-nav').addClass("column");
  //   $('#all-examples #tools-examples').addClass("column");
  //   $(window).load(function () {
  //     console.log('hi mom');
  //     // syncColumn = $('#all-examples').gearedscrolling();
  //     
  //     syncColumn = $('#all-examples').gearedscrolling();
  //     // $('#all-examples').gearedscrolling();
  //  console.log(syncColumn);
  // });
});

