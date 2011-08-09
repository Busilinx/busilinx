<div>
  <?php if ( $options['navigator'] ): ?>
    <!-- navigator -->
    <div class="navi"></div>
  <?php endif; ?>

  <?php if ( $options['prevbutton'] ): ?>
    <!-- prev link --> 
    <a class="prev"></a>
  <?php endif; ?>

    <!-- root element for scrollable --> 
    <div class="scrollable <?php print($options['vertical'] ? 'vertical' : 'horizontal'); ?>"> 
         
        <!-- root element for the items --> 
        <div class="items"> 
            <?php
            foreach ( $rows as $id => $row ) {
              print '<div class="item">'. $row .'</div>';  
            }
            ?>        
        </div> 
         
    </div>
    
  <?php if ( $options['nextbutton'] ): ?>
    <!-- next link --> 
    <a class="next"></a>
  <?php endif; ?>
</div>