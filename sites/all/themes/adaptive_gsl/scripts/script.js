// JavaScript Document
$(document).ready (
				function(){  
	$(".multivalue-field-item").parent().removeClass("bulletpoints").addClass("multivalue");

	$('.views-accordion-item .accordion-content .views-field-body').hide();
 
	$('.kaltura_thumb, .views-accordion-item .accordion-content .views-field-body').hover(
    function () {
        $('.views-accordion-item .accordion-content .views-field-body').show();
    },
    function () {
        $('.views-accordion-item .accordion-content .views-field-body').hide();
    }
);

				});