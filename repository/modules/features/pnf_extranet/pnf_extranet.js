/**
 * Created by ubuntu on 24/12/17.
 */

(function ($) {
  Drupal.behaviors.extranet = {
    attach: function (context, settings) {
      $('select#edit-parent').removeAttr('multiple');

      var termPerRoleSettings = settings.extranet.termPerRoleSettings;
      var extranetManagerRid = settings.extranet.extranetManagerRid;
      var previouslySelectedOption = 0;

      $('select#edit-parent').change(function () {
        selectedOption = $('select#edit-parent option:selected').val();

        if(selectedOption > 0) {
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
  };
}(jQuery));