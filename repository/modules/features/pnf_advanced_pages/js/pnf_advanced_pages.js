/**
 * Created by chris on 10/12/15.
 */

(function ($) {
  Drupal.behaviors.advanced_pages = {
    attach: function (context, settings) {
      if (settings.pnf_advanced_pages_edit) {
        if (!$('#available_colors').length) {
          color1 = settings.pnf_advanced_pages_edit.color1;
          color2 = settings.pnf_advanced_pages_edit.color2;
          color3 = settings.pnf_advanced_pages_edit.color3;
          available_colors =
            '<div id="available_colors">' +
            '<p>Couleurs disponibles : cliquer sur une couleur pour la sélectionner.</p>' +
            '<p>' +
            '<span class="pnf-bg-color" style="background-color: #' + color1 + ';">' + color1 + '</span>' + ' ' +
            '<span class="pnf-bg-color" style="background-color: #' + color2 + ';">' + color2 + '</span>' + ' ' +
            '<span class="pnf-bg-color" style="background-color: #' + color3 + ';">' + color3 + '</span>' + '' +
            '</p>' +
            '</div>';
          $("div.form-item-field-page-content-und-0-field-bg-color-und-0-value").append(available_colors);

          $("span.pnf-bg-color").each(function () {
            $(this).css('cursor', 'pointer');
            $(this).click(function () {
              color = $(this).text();
              $("#edit-field-page-content-und-0-field-bg-color-und-0-value").val(color);
            });
          });
        }
      }

      if (settings.pnf_advanced_pages_view) {
        if (settings.pnf_advanced_pages_view.bg_color) {
          bg_color = settings.pnf_advanced_pages_view.bg_color;
          $('div.paragraphs-item-colored-bg-text div.field-name-field-texte').attr('style', 'background-color: #' + bg_color);
        }
        if (settings.pnf_advanced_pages_view.images_group_item_class) {
          $('div.paragraphs-item-images-group div.field-items div.field-item').each(function () {
            class_name = settings.pnf_advanced_pages_view.images_group_item_class
            $(this).addClass(class_name);
          });
        }
      }
    }
  };
}(jQuery));