/**
 * Created by ubuntu on 02/12/16.
 */

(function ($) {
  Drupal.behaviors.newsletterMailchimp = {
    attach: function (context, settings) {
      var infoText = '<p class="mailchimp-signup-info">Inscrivez-vous et recevez régulièrement<br/>nos dernières actualités</p>';
      $('#mailchimp-signup-subscribe-block-newsletter-block-form').append(infoText);
    }
  };
}(jQuery));