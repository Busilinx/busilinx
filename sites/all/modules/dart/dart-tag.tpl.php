<?php
// $Id: dart-tag.tpl.php,v 1.7 2010/06/23 00:57:05 bleen18 Exp $

/**
 * @file
 * Display the js call to display a DART ad tag.
 *
 * Variables available:
 * - $tag: The full tag object or NULL. If it's NULL, all other
 *        vars listed below will be NULL as well
 * - $pos: The position (pos).
 * - $sz: The size (sz).
 * - $js_tag: a js version of $tag.
 * - $slug: A label to display above the ad.
 *
 * @see template_preprocess_dart_tag()
 */
?>

<?php if ($tag) { ?>
  <?php if ($slug) { ?>
    <span class="dart_slug"><?php print $slug; ?></span>
  <?php } ?>
  <script type="text/javascript">Drupal.DART.tag('<?php print $pos; ?>', '<?php print $sz; ?>', <?php print $js_tag; ?>);</script>
<?php }