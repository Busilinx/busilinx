// $Id: vbo_contextmenu.js,v 1.2 2010/10/26 16:40:16 jide Exp $

Drupal.behaviors.VBOContextMenu = function(context) {
  var form = $("form[id^=views-bulk-operations-form]:not(.vbo-contextmenu-processed)");
  
  if (!form.size()) {
    return;
  }
  
  form.addClass('vbo-contextmenu-processed');
  
  var markup = Drupal.settings.vbo_contextmenu;
  var options = Drupal.settings.vbo_contextmenu_options;
  var current;

  if (options['hide_form'] == 1) {
    $('#views-bulk-operations-select').hide();
  }
  
  // Append menu markup
  $('body').append(markup);
  
  // Handle single row click : we want a single row to be selected on right click
  $(".views-node-selector tr", form).mousedown( function(e) {
    var evt = e;
    $(this).mouseup( function(e) {
      if(evt.button == 2) {
        // A right button has been clicked on a row
        var checkbox = $('input[name^=objects]', this);
        // If there is a currently single checked row, uncheck it
        if (current) {
          // A single row is checked, uncheck it
          checkbox.attr('checked', false);
          current = null;
        }
        // It is not checked, so trigger the click event
        if (!checkbox.attr('checked')) {
          current = $(this);
          checkbox.attr('checked', true);
        }
        // Uncheck current row on blur
        setTimeout(function() { // Delay for Mozilla
          $(document).click( function() {
            if (current) {
              // A single row is checked, uncheck it
              checkbox.attr('checked', false);
              current = null;
            }
          });
        }, 0);
      }
    });
  });
  
  // Attach context menu to VBO view rows
  $(".views-node-selector tr", form).contextMenu({
    menu: 'vbo_contextmenu'
  },
  function(action, el, pos) {
    var checkbox = $('input[name^=objects]', el);
    var actionInput = $('#views-bulk-operations-dropdown #edit-operation');
    // Give the hidden VBO form input the value of the action (a hash)
    // and submit the form
    actionInput.val(action);
    form.submit();
  });

}