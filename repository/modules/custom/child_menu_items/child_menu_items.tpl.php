<?php
/**
 * Created by PhpStorm.
 * User: chris
 * Date: 06/10/15
 * Time: 12:10
 */
?>

<?php foreach($split_items as $row): ?>
  <div class="row">
    <?php foreach($row as $item): ?>
    <?php
      $image_variables = array(
        'path' => $item->uri,
        'width' => $item->width,
        'height' => $item->height,
        'alt' => $item->alt,
        'title' => $item->title,
        'attributes' => array(),
      );
      if ($image_style != 'none') {
        $image_variables['style_name'] = $image_style;
        $image = theme('image_style', $image_variables);
      }
      else {
        $image = theme('image', $image_variables);
      }
    ?>
    <div class="col col-md-<?php print 12/$col_number; ?>">
      <div class="cmi-wrapper">
        <div class="cmi-field cmi-field-item-image">
          <?php print l($image, $item->link_path, array('html' => TRUE)); ?>
        </div>
        <div class="cmi-field cmi-field-menu-item-title">
        <?php print l($item->link_title, $item->link_path); ?>
        </div>
      </div>
    </div>
    <?php endforeach ?>
  </div>
<?php endforeach ?>
