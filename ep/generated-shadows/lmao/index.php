<!doctype html>  
<!-- paulirish.com/2008/conditional-stylesheets-vs-css-hacks-answer-neither/ --> 
<!--[if lt IE 7 ]> <html class="no-js ie6"> <![endif]-->
<!--[if IE 7 ]>    <html class="no-js ie7"> <![endif]-->
<!--[if IE 8 ]>    <html class="no-js ie8"> <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--> <html class="no-js"> <!--<![endif]-->
<head>
  <meta charset="utf-8">

  <!-- Always force latest IE rendering engine (even in intranet) & Chrome Frame 
       Remove this if you use the .htaccess -->
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <title></title>

  <!--  Mobile viewport optimized: j.mp/bplateviewport -->
  <meta name="viewport" content="width=device-width, initial-scale=1.0">

  <!-- Place favicon.ico & apple-touch-icon.png in the root of your domain and delete these references -->
  <link rel="shortcut icon" href="/favicon.ico">
  <link rel="apple-touch-icon" href="/apple-touch-icon.png">

  <!-- CSS : implied media="all" -->
  <link rel="stylesheet" href="css/style.css?v=2">

  <!-- Uncomment if you are specifically targeting less enabled mobile browsers
  <link rel="stylesheet" media="handheld" href="css/handheld.css?v=2">  -->
 
  <!-- All JavaScript at the bottom, except for Modernizr which enables HTML5 elements & feature detects -->
  <script src="js/libs/modernizr-2.0.min.js"></script>
  
  <!-- Also put Selectivizr at the top -->
  <script type="text/javascript" src="js/libs/mootools-core-1.3.1-full-compat-yc.js"></script>
  <!--[if (gte IE 6)&(lte IE 8)]>
    <script type="text/javascript" src="js/libs/selectivizr.js"></script>
    <noscript><link rel="stylesheet" href="css/selectivizr.css" /></noscript>
  <![endif]-->
  

</head>

<body>

  <div id="page"> 
    <header >
      <h1 contenteditable="true">+</h1>
    </header>
    
    <div id="main" role="main">
      <h2>Generate iterative shadows in a <a href="http://en.wikipedia.org/wiki/Lorenz_Attractor">Lorenz Attractor</a></h2>
      <pre>
        @function lmao() {
          $output: '';
          $end: 5000;

          $x0: 6 / 10;
          $y0: 4;
          $z0: 6;
          $h: 0.01;
          $a: 10.0;
          $b: 28.0;
          $c: 8.0 / 3.0;

          @for $i from 0 through $end {
            $x1: $x0 + $h * $a * ($y0 - $x0);
            $y1: $y0 + $h * ($x0 * ($b - $z0) - $y0);
            $z1: $z0 + $h * ($x0 * $y0 - $c * $z0);

            $xval: $x1 * -50;
            $yval: $y1 * -20;
            $spread: $z1 * .1;

            $color: rgba($red, ($i / $end));
            $color: adjust-hue($color, $z1);
        /*    $color: rgba($red, ($z1 * .1));*/

            $output: $output + '#{$color} #{$xval}px #{$yval}px #{$spread}px';
             @if $i < $end {
               $output: $output + ', ';
             }

             $x0: $x1;
             $y0: $y1;
             $z0: $z1;

          }

          @return unquote($output);
        }
        
        h1 {
          @include text-shadow(lmao());
        }
      </pre>
    </div>
    
    <footer>

    </footer>
  </div> <!--! end of #container -->


  <!-- JavaScript at the bottom for fast page loading -->

  <!-- Grab Google CDN's jQuery. fall back to local if necessary -->
  <script src="//ajax.googleapis.com/ajax/libs/jquery/1.5.2/jquery.js"></script>
  <script>!window.jQuery && document.write(unescape('%3Cscript src="js/libs/jquery-1.5.2.min.js"%3E%3C/script%3E'))</script>
  
  <!-- Formalize (http://formalize.me) -->
  <script src="js/libs/formalize/jquery.formalize.js"></script>
  
  <!-- Lettering.js -->
  <!-- <script src="js/libs/jquery.lettering.js"></script> -->
  
  <!-- scripts concatenated and minified via ant build script-->
  <script src="js/script.js"></script>
  <!-- end concatenated and minified scripts-->
  
  
  <!--[if lt IE 7 ]>
    <script src="js/libs/dd_belatedpng.js"></script>
    <script>DD_belatedPNG.fix('img, .png_bg'); // Fix any <img> or .png_bg bg-images. Also, please read goo.gl/mZiyb </script>
  <![endif]-->


  <!-- mathiasbynens.be/notes/async-analytics-snippet Change UA-XXXXX-X to be your site's ID -->
  <script>
    var _gaq=[['_setAccount','UA-XXXXX-X'],['_trackPageview']];
    (function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];g.async=1;
    g.src=('https:'==location.protocol?'//ssl':'//www')+'.google-analytics.com/ga.js';
    s.parentNode.insertBefore(g,s)}(document,'script'));
  </script>
  
</body>
</html>