$bordercolor_default: $gray !default


/* Links --------------------------------------------------------------
// replace underlines on links with bottom borders
=better-links($normal, $hover: false, $active: false, $visited: false, $focus: false)
  &amp;
    text-decoration: none
    border-bottom: 1px solid $normal
    @if $visited 
      &amp;:visited 
        border-bottom-color: $visited
    @if $focus 
      &amp;:focus 
        border-bottom-color: $focus
    @if $hover 
      &amp;:hover 
        border-bottom-color: $hover
    @if $active 
      &amp;:active 
        border-bottom-color: $active


// fade between default and hover colors
=link-transitions($time: 0.5s, $easing: &#x27;ease-out&#x27;, $property: &#x27;all&#x27;)
  +transition($property, $time, $easing)

// remove bottom borders from better links
// call directly from an &lt;a&gt; element
// (needed when linking an &lt;img/&gt; for example)
=remove-link-underlines()
  &amp;
    border-bottom: none
    &amp;:hover
      border-bottom: none


=accessible-color($background: $white)
  @if lightness($background) &gt;= 65%
    color: $base-color
  @else
    color: white    


=vertical-separation($margin: $baseline, $divide: false, $bordercolor: $bordercolor_default, $borderstyle: solid)
  +pie-clearfix
  @if $divide
    border-bottom: $divide $borderstyle $bordercolor
    margin-bottom: $margin * 0.5
    padding-bottom: $margin * 0.5 - $divide
  @else
    margin-bottom: $margin * 0.5
    padding-bottom: $margin * 0.5
    border-bottom: none
  &amp;:last-child
    padding-bottom: 0
    border-bottom-width: 0
    margin-bottom: 0

=un-vertical-separation
  border-bottom: none
  margin-bottom: 0
  padding-bottom: 0

=visually-hide
  position: absolute !important
  clip: rect(1px 1px 1px 1px)
  /* IE6, IE7
  clip: rect(1px, 1px, 1px, 1px)


=tabs
  // assumes placement on UL
  +horizontal-list(3px)
  position: relative
  li
    border-bottom: 1px solid $base-color
    &amp;.active
      a
        padding-bottom: 0
        border-bottom: 1px solid $white
    a
      border:
        width: 1px
        style: solid
        color: $base-color
      +remove-link-underlines
      float: left
      padding: 0 0.25em 1px
      position: relative
      bottom: -1px
      +border-top-radius

=decending-z-order-tab($count: 20)
  // assumes placement on UL
  position: relative
  li
    position: relative
    $t: 0
    $i: $count
    @while $i &gt; 0
      &amp;:nth-child(#{$t})
        z-index: #{$i}
      $t: $t + 1
      $i: $i - 1


// css3 page curl effect
  page-curl(
    $position: top, right, bottom, left, top-left, top-right, bottom-right, bottom-left, top-left-bottom-right, top-right-bottom-left
    $box-color: color
    $shadow-color: color
    $box-shadow: true, false
    $skew: xxdeg
    $rotate: xxdeg
=page-curl($position: bottom, $box-color: $white, $shadow-color: transparentize($black, 0.7), $box-shadow: true, $skew: 15deg, $rotate: 6deg)
  display: block
  background: $box-color
  position: relative
  @if $box-shadow
    +box-shadow(transparentize($shadow-color, 0.15), 0px, 4px, 8px)
  &amp;:before, &amp;:after
    position: absolute
    background: transparent
    width: 70%
    height: 55%
    content: &quot;\0020&quot;
  &amp;:before
    z-index: -1
  &amp;:after
    z-index: -2
  @if $position == top
    &amp;:before
      left: 0px
      top: 0px
      +transform-origin(0%, 0%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
    &amp;:after
      right: 0
      top: 0
      +transform-origin(100%, 0%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
  @if $position == right
    &amp;:before
      right: 0px
      top: 0px
      +transform-origin(100%, 0%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 8px, 0px, 16px)
    &amp;:after
      right: 0
      bottom: 0
      +transform-origin(100%, 100%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 8px, 0px, 16px)
  @if $position == bottom
    &amp;:before
      left: 0px
      bottom: 0px
      +transform-origin(0%, 100%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)
    &amp;:after
      right: 0
      bottom: 0
      +transform-origin(100%, 100%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)
  @if $position == left
    &amp;:before
      left: 0px
      top: 0px
      +transform-origin(0%, 0%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, -8px, 0px, 16px)
    &amp;:after
      left: 0
      bottom: 0
      +transform-origin(0%, 100%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, -8px, 0px, 16px)
  @if $position == top-left
    &amp;:before
      left: 0px
      top: 0px
      +transform-origin(0%, 0%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
  @if $position == top-right
    &amp;:before
      right: 0
      top: 0
      +transform-origin(100%, 0%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
  @if $position == bottom-right
    &amp;:before
      right: 0
      bottom: 0
      +transform-origin(100%, 100%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)
  @if $position == bottom-left
    &amp;:before
      left: 0px
      bottom: 0px
      +transform-origin(0%, 100%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)
  @if $position == top-left-bottom-right
    &amp;:before
      left: 0px
      top: 0px
      +transform-origin(0%, 0%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
    &amp;:after
      right: 0
      bottom: 0
      +transform-origin(100%, 100%)
      +transform(1, $rotate, 0, 0, $skew, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)
  @if $position == top-right-bottom-left
    &amp;:before
      right: 0
      top: 0
      +transform-origin(100%, 0%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, -8px, 16px)
    &amp;:after
      left: 0px
      bottom: 0px
      +transform-origin(0%, 100%)
      +transform(1, $rotate * -1, 0, 0, $skew * -1, 0)
      +box-shadow($shadow-color, 0px, 8px, 16px)

=gradient-bg($color, $top: 5, $bottom: $top)
  @if $top &lt; 0 and $bottom &lt; 0
    $color1: darken($color, abs($top))
    $color2: lighten($color, abs($bottom))
    +linear-gradient(color-stops($color1, $color2))
  @else
    $color1: lighten($color, abs($top))
    $color2: darken($color, abs($bottom))
    +linear-gradient(color-stops($color1, $color2))
  background-color: $color


=clean-list
  +no-bullets
  margin-left: 0
  padding-left: 0