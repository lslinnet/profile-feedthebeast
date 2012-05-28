/**
 * JS file for media slideshow
 */

(function ($) {
  Drupal.behaviors.slideshow = {
    attach:function (context, settings) {
      $(window).load(function () {
        var pagerNumber = 0;
        $('.media-slider', context).each(function() {
          attachSlideshow($(this));
        });

        function attachSlideshow(field) {
          console.log($(field));
          if ($('.field-media > div', field).length > 1) {
            pagerNumber = pagerNumber + 1;
            field.append('<div class="slideshow-controls-bottom"></div>');
            $('.slideshow-controls-bottom', field).append('<div class="slideshow-pager-' + pagerNumber + '"></div>');
            $('.slides', field).cycle({
              fx:'fade',
              pager:'.slideshow-pager-' + pagerNumber,
              timeout:0
            });
          }
        }
      });
    }
  }
})(jQuery);
