<?php
// $Id: dart-noscript-tag.tpl.php,v 1.6 2010/06/23 00:57:05 bleen18 Exp $

/**
 * @file
 * Display the js call to display a DART ad tag.
 *
 * Variables available:
 * - $tag:      The full tag object or NULL. If it's NULL, all other
 *              vars listed below will be NULL as well.
 * - $src:      The src path for a noscript ad call.
 * - $jump_src: The src path for the <a> tag within a noscript ad call.
 *
 * @see template_preprocess_dart_noscript_tag()
 */
?>

<noscript><a href="<?php print $jump_src; ?>"><img src="<?php print $src; ?>" alt="" /></a></noscript>