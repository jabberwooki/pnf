/**
 * Created by ubuntu on 20/10/17.
 */

(function ($) {
  Drupal.behaviors.publicConsultations = {
    attach: function (context, settings) {
      // Too long breadcrumbs handling
      var nodeTitle = $('.breadcrumb .last').text();
      if (nodeTitle.length > 75) {
        $('.breadcrumb .last').text(nodeTitle.substring(0, 72) + '...');
      }

      // Central positionning of page title
      $(".page-header").addClass("col-lg-8 col-lg-offset-2");
      $(".page-header").css("font-size", "40px");
      $(".page-header").removeClass("page-header");
      $("ul.tabs--primary").addClass("col-lg-12");

      // Guidelines text dialog
      $(".field-name-guidelines-text").dialog({
        autoOpen: false,
        show: {effect: "size", duration: 500},
        hide: {effect: "fade", duration: 500},
      });

      // Dialog opening
      var width = $(window).width() * 0.8;
      var height = $(window).height() * 0.8;
      $(".field-name-comments-rules-link a").click(function () {
        $(".field-name-guidelines-text").dialog("option", "width", width);
        $(".field-name-guidelines-text").dialog("option", "height", height);
        $(".field-name-guidelines-text").dialog("open");
      });

      // Consultations settings form - Emails typing control.
      $('#edit-consult-moderators-emails').keypress(function(e) {
        if (String.fromCharCode(e.which).match(/[^A-Za-z0-9\.\;\@\b]/)) {
          e.preventDefault();
        }
      });
    }
  };
}(jQuery));