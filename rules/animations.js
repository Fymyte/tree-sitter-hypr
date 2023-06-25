module.exports = {
  _slide: ($) => 'slide',
  _popin: ($) => seq('popin', optional($.percent)),

  _animation_window: ($) => choice($._slide, $._popin),

}
