/**
 * Created by ubuntu on 11/11/16.
 */

(function ($) {
  Drupal.behaviors.newsletter = {
    attach: function (context, settings) {
      $('.node-simplenews.view-mode-full .group-title-date-banner').append('<div class="newsletter-spacer clearfix"></div>');
      $('.node-simplenews.view-mode-full .group-title-date-banner > div.field-name-title').addClass('col-md-9');
      $('.node-simplenews.view-mode-full .group-title-date-banner > div.field-name-field-newsletter-date').addClass('col-md-3');
      
      $('.node-simplenews.view-mode-full h3').parent().parent().parent().addClass('newsletter-section-header');
    }
  };
}(jQuery));