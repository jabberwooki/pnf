/**
 * Created by chris on 10/12/15.
 */

(function ($) {
  Drupal.behaviors.advanced_pages = {
    attach: function (context, settings) {
      $("span.pnf-bg-color").each(function() {
        $(this).css('cursor', 'pointer');
      });
      $("span.pnf-bg-color").click(function() {
        parent_container_id = $(this).parent().parent().parent().attr('id');
        color_nb = $(this).text();
        $("#" + parent_container_id + " input").val(color_nb);
      });

      // jQuery actions depending on the various Paragraphs bundles displayed.
      if (settings.pnf_advanced_pages_view) {
        // Text background coloration for bundle colored_bg_text.
        if (settings.pnf_advanced_pages_view.bg_color) {
          bg_color = settings.pnf_advanced_pages_view.bg_color;
          //$('div.paragraphs-item-colored-bg-text div.field-name-field-texte').attr('style', 'background-color: #' + bg_color);
        }
        //
        if (settings.pnf_advanced_pages_view.images_group_item) {
          $('div.paragraphs-item-images-group div.field-items div.field-item').each(function () {
            $(this).addClass('col-md-4');
          });
        }
      }
    }
  };
}(jQuery));