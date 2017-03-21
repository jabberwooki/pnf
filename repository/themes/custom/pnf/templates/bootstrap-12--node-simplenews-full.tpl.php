<?php
/**
 * @file
 * Bootstrap 12 template for Display Suite.
 * Template customisation for simplenews nodes.
 */
?>

  <<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

  <?php if (user_access('administer mailchimp campaigns')): ?>
  <div class="mailchimp-campaign-links">
    <p><a href="/admin/config/services/mailchimp/campaigns/add">Créer une campagne Mailchimp</a></p>
    <p><a href="/admin/config/services/mailchimp/campaigns">Voir les campagnes Mailchimp</a></p>
  </div>
  <?php endif; ?>

  <div class="row">
  <<?php print $central_wrapper; ?> class="col-sm-12 <?php print $central_classes; ?>">
<?php print $central; ?>
  </<?php print $central_wrapper; ?>>
  </div>
  </<?php print $layout_wrapper ?>>


  <!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>