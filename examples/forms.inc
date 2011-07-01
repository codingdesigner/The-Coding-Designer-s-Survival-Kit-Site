// USE FORMALIZE TO EVEN FORMS ACROSS BROWSERS
@import _formalize

// aditional form styles 

fieldset
  +trailer
  +rhythm-borders(1px)
  border-color: $base-color
  border-style: dotted

legend
  padding: 0 0.25em

label, input[type=button], input[type=submit], button
  cursor: pointer

label
  font-weight: bold
  margin-right: 0.5em

.textinput
  @extend .sans
  +adjust-font-size-to($ms0, 1)
  +rhythm-borders(1px, 0.25, $ms0)
  border-width: 1px
  +trailer(0.5)
  +box-sizing(border-box)
  width: ($col-width * 2) + ($gutter * 1)
  max-width: 100%
  margin-top: 0
  border-color: $base-color
  height: $base-line-height / $ms0 * 1.5

textarea
  @extend .textinput
  height: $base-line-height / $ms0 * 6.5

input
  &amp;[type=text], &amp;[type=password], &amp;[type=email], &amp;[type=url], &amp;[type=tel],
  &amp;[type=date], &amp;[type=datetime], &amp;[type=datetime-local], &amp;[type=month], &amp;[type=week], &amp;[type=time],
  &amp;[type=number], &amp;[type=range], &amp;[type=search], &amp;[type=color]
    @extend .textinput
  // reset webkit search styles
  &amp;[type=search]
    -webkit-appearance: none
    &amp;::-webkit-search-decoration
      display: none

button, input[type=button], input[type=submit]
  width: auto
  overflow: visible
  // +fancy-button($gray, $ms2)

textarea
  +box-sizing(border-box) 
  width: ($col-width * 2) + ($gutter * 1)

input
  &amp;[type=&quot;radio&quot;], &amp;[type=&quot;checkbox&quot;]
    margin-left: 0.25em
    margin-right: 0.25em

textarea, input:not([type=&quot;radio&quot;]) 
  max-width: 100%