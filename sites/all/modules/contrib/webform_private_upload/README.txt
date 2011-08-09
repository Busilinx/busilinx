// $Id: README.txt,v 1.1 2009/09/10 15:47:46 jcfiala Exp $

Webform Private Upload
----------------------

The Webform Private Upload module, which I'm going to refer to as WPU from now on for ease
of typing, allows you to set up file upload fields in webforms to be private - that only
people who have been given the permission 'view private webform file uploads' can see, without
having to set the entire filesystem as private.

The way this works is that after the module is installed you can go into
admin/settings/webform/private_upload and set the directory under files/webform/ to
be private - by default this is the 'private' directory.  Then, whenever you have a file
component in a webform whose upload should be private, you direct the upload to that directory
or a child of it.  For simplicity, if you know that all webform uploads need to be private, you
can set the subdirectory to '.' - a single period means *this* directory, which means the entire
/files/webform directory is then set private.

It's important to note that this system works by adding an invisible .htaccess file to the
directory in question, which Apache then honors by preventing people from being able to
access those files.  If you are not using Apache as your web server, then this module will not work.

Large parts of this code were copied from the 'private_upload' module
(http://drupal.org/project/private_upload), along with webform-specific tweaks so that webform's
results page would properly link to the private url of the files.

Module created with the financial support of pingVision (http://pingv.com/).