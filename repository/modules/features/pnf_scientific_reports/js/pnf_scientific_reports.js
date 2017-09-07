/**
 * Created by ubuntu on 18/08/17.
 */


(function ($) {
  Drupal.behaviors.scientificReports = {
    attach: function (context, settings) {

      // Too long breadcrumbs handling
      var nodeTitle = $('.breadcrumb .last').text();
      if (nodeTitle.length > 75) {
        $('.breadcrumb .last').text(nodeTitle.substring(0, 72) + '...');
      }

      // Scientific report page horizontal positionning
      // if ($.trim($(".node-news .pnf-content-right .content-wrapper").html()).length == 0) {
        // Central positionning of page title
        $(".page-header").addClass("col-lg-8 col-lg-offset-2");
        $(".page-header").css("font-size", "40px");
        $(".page-header").removeClass("page-header");
        $("ul.tabs--primary").addClass("col-lg-12");
        // // Central positionning of left content
        // // $(".node-news .pnf-content-right").remove();
        // $(".node-scientific-report .pnf-content-left").removeClass("col-sm-12");
        // $(".node-scientific-report .pnf-content-left").addClass("col-lg-8 col-lg-offset-2");
      // }

      // $('.node-scientific-report .field-name-field-displayed-pub-date').removeClass('clearfix');
    }
  };
}(jQuery));