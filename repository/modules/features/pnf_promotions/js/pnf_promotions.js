/**
 * Created by ubuntu on 12/02/16.
 */

(function ($) {
    Drupal.behaviors.advanced_pages = {
        attach: function (context, settings) {
            $("div.view-display-id-promos_front div.col").addClass("col-sm-3 col-md-4");
            //alert('toto');

        }
    };
}(jQuery));