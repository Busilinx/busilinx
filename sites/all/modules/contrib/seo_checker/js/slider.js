function changeHandle(e,ui) {
  var id = $(ui.handle).parents('div.slider-widget-container').attr('id');
  if (typeof(ui.values) != 'undefined') {
    $.each(ui.values, function(i,val) {
      $("#"+id+"_value_"+i).val(val);
      $("#"+id+"_nr_"+i).text(val+"%");
    });
  } else {
    $("#"+id+"_value_0").val(ui.value);
    $("#"+id+"_nr_0").text(ui.value+"%");
  }
}