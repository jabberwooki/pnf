/**
 * Created by ubuntu on 14/06/16.
 */

(function ($) {
  Drupal.behaviors.pnf_multimedia = {
    attach: function (context, settings) {
      // Removal of select source field tooltip "Veuillez choisir la source de votre nouvel Atome".
      $("#scald-atom-add-form-source .form-type-select").attr("title", "");
    }
  };
}(jQuery));
