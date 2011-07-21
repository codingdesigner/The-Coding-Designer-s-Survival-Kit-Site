/* Typography --------------------------------------------------------------
html
  text-rendering: optimizeLegibility
  -webkit-font-smoothing: antialiased

/* The following classes are for use with @extend.
.serif
  font-family: $font-serifs  

.sans
  font-family: $font-sans

.mono
  font-family: $font-mono

.caps
  letter-spacing: 0.1em

.headers
  font-family: $font-headline
  // +sans-family

.allcaps
  @extend .caps
  text-transform: uppercase

.amp
  font-family: $font-amp

.smallcaps
  @extend .caps
  font-variant: small-caps


/* Body --------------------------------------------------------------

body
  @extend .serif
  color: $base-color
  background: $background-color