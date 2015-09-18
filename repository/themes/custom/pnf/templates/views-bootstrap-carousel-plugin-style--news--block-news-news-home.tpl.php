<div id="views-bootstrap-carousel-<?php print $id ?>" class="col-md-12<?php print $classes ?>" <?php print $attributes ?>>
  <!-- The array containing rows is splitted into X, X being the number of books we want per slide -->
  <?php $slides = array_chunk($rows, 4, true); ?>
  
  <?php if ($indicators): ?>
    <!-- Carousel indicators -->
    <ol class="carousel-indicators">
      <?php foreach ($slides as $key => $value): ?>
        <li data-target="#views-bootstrap-carousel-<?php print $id ?>" data-slide-to="<?php print $key ?>" class="<?php if ($key === 0) print 'active' ?>"></li>
      <?php endforeach ?>
    </ol>
  <?php endif ?>

  <!-- Carousel items - Here, a carousel item (slide) contains several view items (row)-->
  <div class="carousel-inner">
  <?php foreach ($slides as $key => $slide): ?>
    <div class="item <?php if ($key === 0) print 'active' ?>">
          <?php foreach ($slide as $key => $item): ?>
            <div class="col-md-3">
              <?php print $item ?>
            </div>
          <?php endforeach ?>
    </div>
  <?php endforeach ?>
   
  </div>

  <?php if ($navigation && (count($rows) > 4)): ?>

    <!-- Carousel navigation -->
    <a class="carousel-control left" href="#views-bootstrap-carousel-<?php print $id ?>" data-slide="prev">
      <span class="icon-prev"></span>
    </a>
    <a class="carousel-control right" href="#views-bootstrap-carousel-<?php print $id ?>" data-slide="next">
      <span class="icon-next"></span>
    </a>
  <?php endif ?>
</div>
