/* Author: 

*/


$(document).ready(function () {
  var tabContainers = $('#intro #teasers article');
  tabContainers.hide().filter(':first').show();
  
  function badgeClick (el) {
    tabContainers.hide().removeClass('selected');
    tabContainers.filter(el.hash).show().addClass('selected');
    $('#intro nav.samples ul li a').removeClass('selected');
    $(el).addClass('selected');
    return false;
  }

  $('#intro nav.samples ul li a').click(function () {
    badgeClick(this);
    return false;
  }).filter(':first').click();
  $('#intro nav.samples ul li a').hover(
    function () {
      badgeClick(this);
    }, 
    function () {
      badgeClick(this);
    }
  );
  //
  $('#intro #teasers article h1').lettering();
  $('#learn h1, #learn h2, #learn h3').lettering();
});























