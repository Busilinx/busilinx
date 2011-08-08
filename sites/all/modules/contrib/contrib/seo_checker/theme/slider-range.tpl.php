<?php
// $Id: slider-range.tpl.php,v 1.1.2.1.2.1 2010/02/28 15:21:45 miruoss Exp $

/**
 * @file
 * Default theme implementation to display the slider-range form element
 *
 * Available variables:
 * - $element: The element array containing #id, #name,...
 */

?>
<div>
  <strong><?php echo $element["#title"];?>:</strong>
</div>
<div id="<?php echo $element["#id"]; ?>" class="slider-widget-container">
  <div style="float:left">
    <div id='<?php echo $element["#id"]; ?>_slider' class='ui-slider-1'></div>
  </div>
  <span style="margin-left: 15px;">[<span id='<?php echo $element["#id"]; ?>_nr_0'><?php echo $element["#default_value"][0]; ?>%</span>,<span id='<?php echo $element["#id"]; ?>_nr_1'><?php echo $element["#default_value"][1]; ?>%</span>]</span>
</div>
<div style="clear:both;"></div>
<script type="text/javascript">
<!--
  $('#<?php echo $element["#id"];?>_slider').slider({
    slide: changeHandle,
    step: 100/<?php echo $element["#steps"]; ?>,
    values: [
      <?php echo $element["#default_value"][0]; ?>,
      <?php echo $element["#default_value"][1]; ?>,
      
    ],
    range: true
});
//-->
</script>
<div class="description" style="margin-bottom:10px;"><?php echo $element["#description"];?></div>
<input type="hidden" name='<?php echo $element["#name"]; ?>[]' id='<?php echo $element["#id"];?>_value_0' value='<?php echo $element["#default_value"][0]; ?>' />
<input type="hidden" name='<?php echo $element["#name"]; ?>[]' id='<?php echo $element["#id"];?>_value_1' value='<?php echo $element["#default_value"][1]; ?>' />