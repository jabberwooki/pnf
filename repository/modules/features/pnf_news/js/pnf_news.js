/**
 * Created by chris on 10/12/15.
 */

(function ($) {
  Drupal.behaviors.advanced_pages = {
    attach: function (context, settings) {
      // News page horizontal positionning, depending on the right column filling.
      if ($.trim($(".node-news .pnf-content-right .content-wrapper").html()).length == 0) {
        // Central positionning of page title
        $(".page-header").addClass("col-lg-8 col-lg-offset-2");
        $(".page-header").css("font-size", "40px");
        $(".page-header").removeClass("page-header");
        $("ul.tabs--primary").addClass("col-lg-12");
        // Central positionning of left content
        $(".node-news .pnf-content-right").remove();
        $(".node-news .pnf-content-left").removeClass("col-sm-9");
        $(".node-news .pnf-content-left").addClass("col-lg-8 col-lg-offset-2");
      }    
    }
  }
}(jQuery));