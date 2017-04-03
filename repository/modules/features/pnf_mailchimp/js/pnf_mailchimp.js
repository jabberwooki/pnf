/**
 * Created by ubuntu on 22/03/17.
 */
//
(function ($) {
  Drupal.behaviors.mailchimp = {
    attach: function (context, settings) {
      var infoText = '<p class="mailchimp-signup-info">Inscrivez-vous et recevez régulièrement<br/>nos dernières actualités</p>';
      $('#mailchimp-signup-subscribe-block-newsletter-block-form').append(infoText);
    }
  };
}(jQuery));
