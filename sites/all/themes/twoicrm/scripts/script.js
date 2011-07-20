// JavaScript Document
$(document).ready (
				function(){  
				
					$(".multivalue-field-item").parent(".field-bullet-points-value").removeClass("field-bullet-points-value").addClass("field-bullet-points-value-multivalue");
	$(".multivalue-field-item").parent(".field-article-reference-nid").removeClass("field-article-reference-nid").addClass("field-article-reference-nid-multivalue");
	$(".multivalue-field-item").parent(".field-external-link-url").removeClass("field-external-link-url").addClass("field-external-link-url-multivalue");
	
	$(".multivalue-field-item").parent(".article-bulletpoints").removeClass("article-bulletpoints").addClass("article-bulletpoints-multivalue");
	$(".multivalue-field-item").parent(".article-links").removeClass("article-links").addClass("article-links-multivalue");
	$(".multivalue-field-item").parent(".article-external-links").removeClass("article-external-links").addClass("article-external-links-multivalue");
	

	
	$('.views-accordion-item .accordion-content .views-field-body').hide();
 
	$('.kaltura_thumb, .views-field-field-video-thumbnail-fid, .views-accordion-item .accordion-content .views-field-body').hover(
    function () {
        $('.views-accordion-item .accordion-content .views-field-body').show();
    },
    function () {
        $('.views-accordion-item .accordion-content .views-field-body').hide();
    }
);


				});