/**
 * Created by ubuntu on 18/08/17.
 */


(function ($) {
  Drupal.behaviors.scientificReports = {
    attach: function (context, settings) {
      /* Teaser mode */
      $('#edit-field-displayed-pub-date-value-value-date').attr('size', '3');
      $('#edit-field-displayed-pub-date-value-value-date').attr('maxlength', '4');

      /* Full mode */
      // alert($('.breadcrumb .last').text());
      var nodeTitle = $('.breadcrumb .last').text();
      // alert(nodeTitle.length);
      if (nodeTitle.length > 75) {
        $('.breadcrumb .last').text(nodeTitle.substring(0, 72) + '...');
      }
    }
  };
}(jQuery));