/**
 * Created by chris on 10/12/15.
 */

(function ($) {
  Drupal.behaviors.advanced_pages = {
    attach: function (context, settings) {
      // Make clickable the available colors displayed below the field field_bg_color.
      $("span.pnf-bg-color").each(function () {
        $(this).css('cursor', 'pointer');
        $(this).click(function () {
          color = $(this).text();
          $("#edit-field-page-content-und-0-field-bg-color-und-0-value").val(color);
        });
      });

      // jQuery actions depending on the various Paragraphs bundles displayed.
      if (settings.pnf_advanced_pages_view) {
        // Text background coloration for bundle colored_bg_text.
        if (settings.pnf_advanced_pages_view.bg_color) {
          bg_color = settings.pnf_advanced_pages_view.bg_color;
          $('div.paragraphs-item-colored-bg-text div.field-name-field-texte').attr('style', 'background-color: #' + bg_color);
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