<?php
/**
 * @file
 *    Template to generate a fancy_slide slideshow.
 *    
 * Variables:
 */
?>
<div id="fancy-slide-<?php print $sid; ?>" class="fancy-slide" style="<?php print $fancyslide_styles; ?>">
  <ul>
    <?php foreach ($slides as $slide): ?>
      <li>
        <?php print $slide['rendered']; ?>
      </li>
    <?php endforeach; ?>
  </ul>
  <script type="text/javascript"><?php print $fancyslide_js; ?></script>
</div>