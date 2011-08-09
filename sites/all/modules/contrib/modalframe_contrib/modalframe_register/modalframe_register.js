// $Id:

// Helper function to refresh the page after closing modal login window
function refreshSite(args, statusMessages) {
  location.reload();
}

// This is our onSubmit callback that will be called from the child window
// when it is requested by a call to modalframe_close_dialog() performed
// from server-side submit handlers.
function onSubmitCallback(args) {
  if (args.redirect) {
    setTimeout(function() { window.location = args.redirect; }, 1);
  } else {
  refreshSite();
  }
}


// Opens Login and Register links in a Modal Frame

(function ($) {
  Drupal.behaviors.modalFrameRegister = function(context) {
    $('a.gomodal:not(.gomodal-processed)', context)
    
      // Now that we have matched an element, we add a CSS class, so that
      // we do not process the same element more than once.
      .addClass('gomodal-processed')

      // Now, we attach an onClick event handler to the element.
      .click(function() {

      // When the A element is clicked, the URL of the same link will be opened within a modal frame.
      Drupal.modalFrame.open({
        url: $(this).attr('href'),
        width: 500,
        height: 600,
        onSubmit: onSubmitCallback
      });

      // Return false so that we cancel the default link behavior.
    return false;
    });  
  }

})(jQuery);
