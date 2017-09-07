<?php
/**
 * Created by PhpStorm.
 * User: ubuntu
 * Date: 06/09/17
 * Time: 13:52
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row">
    <<?php print $central_wrapper; ?> class="pnpc-content col-lg-8 col-lg-offset-2 <?php print $central_classes; ?>">
      <div class="content-wrapper">
        <?php print $central; ?>
      </div>
    </<?php print $central_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
