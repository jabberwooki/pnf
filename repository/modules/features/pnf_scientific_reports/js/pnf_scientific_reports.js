/**
 * Created by ubuntu on 18/08/17.
 */


(function ($) {
  Drupal.behaviors.scientificReports = {
    attach: function (context, settings) {
      // alert($('.breadcrumb .last').text());
      var nodeTitle = $('.breadcrumb .last').text();
      // alert(nodeTitle.length);
      if (nodeTitle.length > 75) {
        $('.breadcrumb .last').text(nodeTitle.substring(0, 72) + '...');
      }
    }
  };
}(jQuery));