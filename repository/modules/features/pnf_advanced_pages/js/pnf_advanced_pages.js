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
        // alt attribute value of image added as caption (new div) below <a><img/></a>
        if (settings.pnf_advanced_pages_view.text_image_50_50_item) {
          $('div.paragraphs-item-text-image-50-50 div.field-items').find('img').each(function() {
            if (!$(this).parent().parent().find('div.field-image-caption').length) {
              caption = '<div class="field-image-caption">' + $(this).attr('alt') + '</div>';
              $(this).parent().after(caption);
            }
          });
        }
        // alt attribute value of image added as caption (new div) below <a><img/></a>
        if (settings.pnf_advanced_pages_view.image_text_50_50_item) {
          $('div.paragraphs-item-image-text-50-50 div.field-items').find('img').each(function() {
            if (!$(this).parent().parent().find('div.field-image-caption').length) {
              caption = '<div class="field-image-caption">' + $(this).attr('alt') + '</div>';
              $(this).parent().after(caption);
            }
          });
        }
      }

      // Advanced page horizontal position, depending on content of non-paragraphs fields (field_page_linked_content, ...).
      if ($('div.field-name-field-page-linked-content').length == 0) {
        $('div.node-advanced-page h2').addClass('col-lg-offset-2');
        $('div.field-name-field-page-content').addClass('col-lg-offset-2');
      }
    }
  };
}(jQuery));