/**
 * jQuery for the fancy_slide admin interface
 */
 
$(document).ready(function() {
  fancy_slide_update_type_display();
  
  $("input[name=type]").change(function() {
    fancy_slide_update_type_display();
  });
});

/**
 * Checks to see which of the 'type of slideshow' radio buttons is checked and
 * toggles the display of the extra elements accordingly.
 */
function fancy_slide_update_type_display() {
	$("#edit-nid-wrapper").hide();
	$("#edit-nodequeue-wrapper").hide();
	
  if ($("#edit-type-0").attr("checked")) {
    $("#edit-nid-wrapper").show();
  }
  else if ($("#edit-type-1").attr("checked")) {
  	$("#edit-nodequeue-wrapper").show();
  }
}