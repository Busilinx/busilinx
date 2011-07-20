FANCY SLIDE
-----------

Maintainers:
  Jack Westbrook (http://drupal.org/user/303538)
  Chris Cohen (http://drupal.org/user/306375)
  
Developed by Creative Message Ltd (http://www.creativemessage.com)

INSTALLATION & USAGE
--------------------

* Install and enable the module. You need to have the CCK and imagefield
  modules installed and enabled.

* Set up a new content type with at least one imagefield CCK field. If you want
  to attach all slideshow images to the same node, allow the CCK field to have
  multiple values (can be unlimited values if you wish).
  
  If you want to have multiple nodes in the slideshow, each of which have a
  single image, allow the CCK imagefield to have 1 value. You will need to use
  nodequeue for this type of slideshow (http://drupal.org/project/nodequeue).
  
  In order to have captions show up automatically, enable the alt text for the
  imagefield. When adding images, use the alt text to describe the image.
  
  Alternatively, you could use an existing content type if you have one that
  has an imagefield.

* For a single-node slideshow, create a new node and upload all of the slideshow
  images to the node's imagefields.
  
  For a nodequeue slideshow, create one node for each slide in the slideshow,
  and upload one image to each node's imagefield. You will also need to create a
  nodequeue and assign each slide's node to the queue. Please consult the
  nodequeue documentation here if you need more guidance.
  
* You can use imagecache to automatically adjust the images in the slideshow,
  to the right size, for example. If desired, set up an imagecache preset with
  the required settings (such as Scale & Crop to 640x480).
  
  You should make sure that all images in your slideshow are the same size. You
  can accomplish this using imagecache, or by manually ensuring that the images
  you upload are all the same size.

* Go to admin/content/fancy-slide and add a new slideshow. Configure the options
  as desired.
  
* Visit your block configuration. You will see one block for each slideshow.
  Their names will begin with 'Fancy Slide:'. Set the block to show up in a
  specific region.
  
EXAMPLES FOR USE IN THEME TEMPLATES
-----------------------------------

If you write your own template files and would like to call a slideshow
manually, you can do so, providing you know its ID:

<?php print theme('fancy_slide', 5); ?>

The above example will render the slideshow with ID 5. If you need to, you can
load ALL of the slideshows using fancy_slide_get_all() and query the array that
is returned in order to find out which slideshow you need, or get further
slideshow information.
