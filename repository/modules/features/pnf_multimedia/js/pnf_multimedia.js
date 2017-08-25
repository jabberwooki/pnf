/**
 * Created by ubuntu on 24/08/17.
 */

(function ($) {
  Drupal.behaviors.multimedia = {
    attach: function (context, settings) {
      $('.form-item-language').wrap('<p class="lang-selector-container">');
      $('.atom-wrapper div:eq(0)').after($('.lang-selector-container').html());
      $('.lang-selector-container').remove();
    }
  };
}(jQuery));