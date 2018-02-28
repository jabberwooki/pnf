/**
 * Created by ubuntu on 24/12/17.
 */

(function ($) {
  Drupal.behaviors.extranet = {
    attach: function (context, settings) {
      // Taxonomy term add/edit form handling
      if ($('select#edit-parent').length) {
        $('select#edit-parent').removeAttr('multiple');

        var termPerRoleSettings = settings.extranet.termPerRoleSettings;
        var extranetManagerRid = settings.extranet.extranetManagerRid;
        var previouslySelectedOption = 0;

        $('select#edit-parent').change(function () {
          selectedOption = $('select#edit-parent option:selected').val();

          if (selectedOption > 0) {
            termPerRoleSettings[selectedOption].rids.forEach(function (rid) {
              if (rid != extranetManagerRid) {
                $('#edit-term-per-role-roles-' + rid).prop('checked', true);
              }
            });

            if (previouslySelectedOption > 0) {
              termPerRoleSettings[previouslySelectedOption].rids.forEach(function (rid) {
                if (rid != extranetManagerRid) {
                  $('#edit-term-per-role-roles-' + rid).prop('checked', false);
                }
              });
            }
            previouslySelectedOption = selectedOption;
          }
          else {
            termPerRoleSettings[previouslySelectedOption].rids.forEach(function (rid) {
              if (rid != extranetManagerRid) {
                $('#edit-term-per-role-roles-' + rid).prop('checked', false);
              }
            });
            previouslySelectedOption = selectedOption;
          }
        });
      }

      // Extranet views handling
      if ($('#block-pnf-extranet-extranet-folders')) {
        $('#block-pnf-extranet-extranet-folders').addClass('col-md-4');
        $('#block-views-extranet-folders-root-folders').addClass('col-md-8');
        $('#block-views-extranet-folders-child-folders').addClass('col-md-8');
        $('#block-system-main').addClass('col-md-7');

        // $('.region-content section').matchHeight();
      }
    }
  };
}(jQuery));