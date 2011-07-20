/*
 *  jQuery to power the fancy slide module.
 *
 */
 
(function($) {
  $.fn.fancySlide = function(options){  
    var defaultoptions = {
      animation:      'slide', // Transition style
      continuous:     true,    // Return to first slide when last slide is
                               // reached
      controlsBefore: '',      // Prefix slide description
      controlsAfter:  '',      // Suffix slide description
      showControls:   true,    // Add controller to the slider
      slideControls:  false,   // Makes controls slide up and down on mouseover
      vertical:       false,   // Slide animations move vertically
      speed:          800,     // Transition time
      rotate:         true,    // Let slider animate by itself
      pause:          4000     // Pause time between transitions
    };

    var options = $.extend(defaultoptions, options);
    var obj = $(this);
    var slidewidth = $(this).outerWidth();
    var slideheight = $(this).outerHeight();
    var slides = $('li', obj).length;
    var currentslide = 0;
    var previousslide = 0;
    var position = 0;
    var timeout;
    var depth = 99;
    // Append to animation function name
    var animationtype = options.animation + 'animate';
   
    if (options.speed == 0) {
      animationtype = 'dontanimate';
    }
    
    /*
     *  Initiate the fancy slider.
     *
     */
    return this.each(function() {

      obj.width(slidewidth);
      obj.height(slideheight);
      obj.css('overflow', 'hidden');
      
      if(options.showControls) {
        var html = '<div id="controller">';
        html += '<span>' + options.controlsBefore + '</span>';
        for (i = 0; i < slides; i++){
          var thistitle = $('li img:eq(' + i + ')');
          html += '<p>' + thistitle.attr('alt') + '</p>';
        }
        html += '<div class="controls">';
        for (i = 0; i < slides; i++){
          var thisslide = $('li img:eq(' + i + ')');
          html += '<a href="#" title ="' + thisslide.attr('alt') + '">'
          html += '<img src="' + thisslide.attr('src') + '" alt="' + thisslide.attr('alt') + '" />'
          html += '</a>';
        }
        html += '</div>';
        html += '</div>';
        html += options.controlsAfter;            
        $(obj).append(html);
    
        $('#controller').css('zIndex', depth + 1);
        $('#controller').css('width', slidewidth - 20);
        
        // Make sure controller link images are sized correctly
        $('#controller img').attr('height', '40');     

        // Set classes for controller text and buttons
        showinfo();

        // Add sliding animation for controller
        if (options.slideControls) {
        var controlsheight = $('#controller').outerHeight();
        $('#controller').css('bottom','-' + controlsheight + 'px');
        obj.hover(
          function() {
            $('#controller').stop().animate({bottom:'0px'}, 300);
            }, 
            function() {
              $('#controller').stop().animate({bottom:'-' + controlsheight + 'px'}, 300);
            }
          );
        }
        
        // Give controller links functionality to change slides
        $('#controller a').each(function(i) {
          $(this).bind('click', function() {
              previousslide = currentslide;
              currentslide = i;
              eval(animationtype + '(' + currentslide + ',' + previousslide + ',' + true + ')');
              return false;
            });
        });
      };
      
      // Set slider CSS to override default drupal
      if (animationtype == 'slideanimate') {
        $('ul', obj).css({
          'margin' : 0,
          'padding' : 0,
          'width': slides*slidewidth
          });    
        $('li', obj).css({
          'float' : (options.vertical ? 'none' : 'left'),
          'height' : slideheight,
          'width' : slidewidth
        });
      } else if (animationtype == 'fadeanimate' || animationtype == 'dontanimate') {
        $('ul', obj).css({
          'height' : slideheight,
          'width' : slidewidth
        });
        $('li', obj).css({
          'height' : slideheight,
          'left' : '0',
          'position' : 'absolute',
          'top' : '0',
          'width' : slidewidth
        });
                  
        for (i = 0; i < slides; i++){
          $('li:eq(' + i + ')', obj).css('zIndex', depth);
          depth--;
        }
      }
      
      if (options.rotate) {
        timeout = setTimeout(function(){
          eval(animationtype + '("rotate",' + previousslide + ',' + false + ')');
          },options.pause);
      };
    });
    
    // Work out which slide to animate to
    function animationmechanic(destination) {
      if (destination == 'rotate') {
        currentslide++;
        if (currentslide > slides - 1) {
          currentslide = options.continuous ? 0 : currentslide - 1;
        }
      } else {      
        currentslide = destination;
      };
      
      return currentslide;
      
    };
    
    /*
     *  Dont animate transition. If speed is set to 0 use this to save on overhead
     *
     */
    function dontanimate(destination, current, clicked) {
      var theslide = currentslide;
     
      if (destination == current){ //prevent button clicks on current slide
        if(clicked) clearTimeout(timeout); //reset timeout if controller links are clicked
        return;
      }
      animationmechanic(destination);
      
      if (options.showControls) {
        showinfo();
      };
      
      var diff = Math.abs(theslide-currentslide);
      var speed = diff * options.speed;
      
      if (!clicked){
        if (currentslide == 0){
          previousslide = slides - 1;
        } else {
          previousslide = currentslide - 1;
        }
      }
           
      $('li:eq(' + previousslide + ')', obj).stop(true, true).hide();
      $('li:eq(' + currentslide + ')', obj).stop(true, true).show();
     
      if(clicked) clearTimeout(timeout); // Reset timeout if controller links are clicked
      
      if(options.rotate) {
        timeout = setTimeout(function(){
          eval(animationtype + '("rotate",' + previousslide + ',' + false + ')');
        }, diff*speed + options.pause);
      }; 
    };
       
    /*
     *  Slide transition
     *
     */
    function slideanimate(destination, current, clicked) {
      var theslide = currentslide;
      
      if (destination == current){ // Prevent button clicks on current slide
        if(clicked) clearTimeout(timeout); // Reset timeout if controller links are clicked
        return;
      }
      animationmechanic(destination);
      
      if (options.showControls) {
        showinfo();
      };

      var diff = Math.abs(theslide-currentslide);
      var speed = diff * options.speed;
      
      if (!options.vertical) {
        position = (currentslide * slidewidth * -1);
        $('ul', obj).stop().animate({marginLeft: position}, speed);
      } else {
        position = (currentslide * slideheight * -1);
        $('ul', obj).stop().animate({marginTop: position}, speed);
      };

      if (clicked) clearTimeout(timeout); // Reset timeout if controller links are clicked
    
      if (options.rotate) {
        timeout = setTimeout(function(){
          eval(animationtype + '("rotate",' + previousslide + ',' + false + ')');
        }, diff*speed + options.pause);
      };
      
    };
    
    /*
     *  Fade transition
     *
     */
    function fadeanimate(destination, current, clicked) {
      var theslide = currentslide;
     
      if (destination == current){ //Prevent button clicks on current slide
        if(clicked) clearTimeout(timeout); // Reset timeout if controller links are clicked
        return;
      }
      animationmechanic(destination);
      
      if (options.showControls) {
        showinfo();
      };

      if (!clicked){
        if (currentslide == 0){
          previousslide = slides - 1;
        } else {
          previousslide = currentslide - 1;
        }
      }
      
      var diff = Math.abs(theslide - currentslide);
      var speed = diff * options.speed;
      
      $('li:eq(' + previousslide + ')', obj).stop(true, true).fadeOut(speed);
      $('li:eq(' + currentslide + ')', obj).stop(true, true).fadeIn(speed);
     
      if(clicked) clearTimeout(timeout); // Reset timeout if controller links are clicked
      
      if(options.rotate) {
        timeout = setTimeout(function(){
          eval(animationtype + '("rotate",' + previousslide + ',' + false + ')');
        }, diff*speed + options.pause);
      }; 
    };
    
    // Change classes on controller info and button states 
    function showinfo() {
      $('#controller p, #controller a').addClass('inactive');
      $('#controller p.active, #controller a.active').removeClass('active');
      $('#controller p:eq(' + currentslide + ')').removeClass('inactive');
      $('#controller p:eq(' + currentslide + ')').addClass('active');
      $('#controller a:eq(' + currentslide + ')').removeClass('inactive');
      $('#controller a:eq(' + currentslide + ')').addClass('active');
    };
  };
  
})(jQuery);
