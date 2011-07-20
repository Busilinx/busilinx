<?php
// $Id: dart_tag.inc,v 1.8 2010/09/09 03:36:03 bleen18 Exp $

/**
 * @file
 * Class definition for creating and managing Dart Tag objects.
 */

class DartTag {

  public $dtid;       // Unique dart tag id.
  public $obj;        // The tag exactly as it exists in the database.

  public $active;     // Boolean; TRUE if tag is active.

  public $name;       // Unique tag name.
  public $pos;        // Dart pos (ex. top-banner).
  public $sz;         // Dart sz (ex. 300x250,300x600).

  public $site;       // Override for site-wide dart site.
  public $zone;       // Override for site-wide dart zone.
  public $slug;       // Override for site-wide dart slug.

  public $options;    // Array of tag options.
                      // 'block'      - True for tags that should show
                      //                up on the block admin screen.
                      // 'scriptless' - True for tags that should use
                      //                only <noscript> tags.
                      // 'keyvals'    - An array of key value pars to
                      //                include in the tags.
                      // 'method'     - javascript or iframe.
                      // 'terms'      - Keyed array of taxonomy terms to
                      //                be included in the tags.

  public $rules;      // Array of display rules for tag.
                      // - node_type
                      // - user_role
                      // - taxonomy
                      // - domains
                      // - views

  /**
   * Constructor for DartTag.
   *
   * @param $dtid
   *   Optional Dart Tag ID to load.
   */
  public function __construct($dtid = NULL) {
    $this->load($dtid);
  }

  /**
   * Creates and returns HTML for the tag based
   * on the display rules and options.
   *
   * @return
   *   html tag output.
   */
  public function display($class = '') {
    $output = '';

    // Check if tag exists & is active.
    if (!isset($this->dtid) || !$this->active) {
      return $output;
    }

    // Check global display rules.
    if (!$this->check_display_rule('user_role', variable_get('dart_display_rule_roles', array()))){
      return $output;
    }
    if (!$this->check_display_rule('admin_pages', variable_get('dart_display_rule_admin', 0))){
      return $output;
    }

    // Check tag-specific display rules.
    foreach ($this->rules as $key => $val) {
      if (!$this->check_display_rule($key, $val)) {
        return $output;
      }
    }

    // Build tag using display options.
    $show_script_tag = !$this->options['scriptless'];
    $show_noscript_tag = $this->options['scriptless'] || variable_get('dart_noscript', '');

    if ($show_script_tag) {
      $output .= theme('dart_tag', $this->dtid, $class);
    }
    if ($show_noscript_tag) {
      $output .= theme('dart_noscript_tag', $this);
    }

    return $output;
  }

  /**
   * Creates a DartTag object.
   *
   * @param $dtid
   *   A DartTagID as it exists in the database.
   */
  private function load($dtid) {
    // Load object data from database.
    $result = db_query('SELECT * FROM {dart_tags} WHERE dtid=%d', $dtid);

    if ($this->obj = db_fetch_object($result)) {
      $this->obj->settings  = unserialize($this->obj->settings);
      $this->obj->settings['options']['keyvals'] = stripcslashes($this->obj->settings['options']['keyvals']);

      $this->dtid   = $this->obj->dtid;
      $this->active = $this->obj->active;

      $this->name   = $this->obj->name;
      $this->pos    = $this->obj->pos;
      $this->sz     = $this->obj->sz;

      $this->prefix = variable_get('dart_prefix', '');
      $this->site   = $this->obj->settings['site'];
      $this->zone   = $this->obj->settings['zone'];
      $this->slug   = $this->obj->settings['slug'];

      $this->rules    = $this->obj->settings['rules'];
      $this->options  = $this->obj->settings['options'];

      // Load tag key|vals. Global tag variables are loaded,
      // then tag key|vals injected by other modules, finally
      // tag specific key|vals. Key|vals are overridden
      // in this order.
      $keyvals = $this->merge_key_vals(
        $this->key_vals_global(),
        module_invoke_all('dart_get_vars', $this),
        $this->key_vals($this->options['keyvals'])
      );
      $this->options['keyvals'] = $this->unique_key_vals($keyvals);

      // Setup block value properly.
      $this->options['block'] = $this->obj->settings['block'];

      // Setup the site & zone. Global site/zone value
      // is loaded first, then tag specific, then site/zone as
      // altered by other modules. Values are overridden
      // in this order.
      $sitezone = array_combine(array('site', 'zone'), explode('/', variable_get('dart_sitezone', '/')));
      $sitezone = array_merge(
                    $sitezone,
                    module_invoke_all('dart_sitezone', $sitezone)
                  );
      $this->site = empty($this->site) ? $sitezone['site'] : $this->site;
      $this->zone = empty($this->zone) ? $sitezone['zone'] : $this->zone;

      // Setup the slug properly.
      $this->slug = empty($this->slug) ? variable_get('dart_slug', '') : $this->slug;
      $this->slug = $this->slug == '<none>' ? '' : $this->slug;
    }
  }

  /**
   * Creates the "val" portion of a key|val array.
   *
   * @param $val
   *   The literal value for the key|val pair.
   *
   * @param $eval
   *   Boolean. True if $val is some javascript that
   *   will ultimately need to be evaluated. (ex. i++)
   *
   * @return
   *   An array with two keys, "val" & "eval".
   */
  private function key_val($val, $eval) {
    $value = array(
      "val" => $val,
      "eval" => $eval,
    );
    return $value;
  }

  /**
   * Creates an array of key|val pairs where
   * val is an array created using key_val().
   *
   * @param $keyvals
   *  A string in the form:
   *   key|val
   *   key|val|eval
   *   key|val|eval
   *
   * @return
   *   An array of key/val arrays.
   */
  private function key_vals($keyvals) {
    $vals = array();
    if (!empty($keyvals)) {
      $pairs = preg_split("/\r\n|\n|\r/", $keyvals);
      foreach ($pairs as $pair) {
        list($key, $val, $eval) = explode("|", $pair);
        $vals[$key][] = $this->key_val($val, $eval=='eval');
      }
    }
    return $vals;
  }

  /**
   * Gets key|val pairs that are global to
   * all tags.
   *
   * @return
   *   An array of key/val arrays
   *   as returned by key_vals().
   */
  private function key_vals_global() {
    $keyvals = variable_get('dart_kvs', '');

    // Include special vars (ex. tile & ord) as per the DART configuration form.
    foreach (variable_get('dart_special_kvs', array()) as $key => $val) {
      if (empty($val)) {
        continue;
      }
      switch ($key) {
        case 'tile':
          $keyvals .= "\n" . $key . '|Drupal.DART.tile++|eval';
          break;
      }
    }

    return $this->key_vals($keyvals);
  }

  /**
   * Merges arrays of key/val arrays. If two arrays have the same key,
   * then the resulting array will include a value in the form:
   * array('key' => array(
   *                  array('val' =>'val_1', 'eval' => TRUE),
   *                  array('val' =>'val_2', 'eval' => TRUE)
   *                ))
   *
   * @param ...
   *   A variable number of arguments each of which being an array
   *   in the form array('key' => array('val' => 'val_1', 'eval' => TRUE), ...)
   */
  private function merge_key_vals() {
    $keyvals = array();

    $args = func_get_args();
    foreach ($args as $arg) {
      foreach ($arg as $key => $val) {
        foreach ($val as $v) {
            $keyvals[$key][] = $v;
          }
        }
    }

    return $keyvals;
  }

  /**
   * Checks a display rule to determine if a
   * tag should be displayed or not.
   *
   * @param $rule
   *   The name of the rule to check.
   *
   * @param $data
   *   Mixed data needed by the given rule to determine
   *   if this tag should be displayed.
   *
   * @return
   *   A boolean indicating if the tag should be displayed.
   */
  private function check_display_rule($rule, $data) {
    $pass = TRUE;

    switch ($rule) {
      case 'domains':
        if (module_exists('domain')) {
          global $_domain;
          $domain_id = $_domain['domain_id'] == 0 ? 'zero' : $_domain['domain_id'];
          $pass = !empty($data[$domain_id]);
        }
        break;
      case 'paths':
        switch ($data) {
          case 'all_paths':
            break;
          case 'all_nodes':
            $pass = arg(0) == 'node';
            break;
          case 'non_nodes':
            $pass = arg(0) != 'node';
            break;
        }
        break;
      case 'node_types':
        if (arg(0) == 'node' && is_numeric(arg(1))) {
          $node = node_load(arg(1));
          $pass = !empty($data[$node->type]);
        }
        break;
      case 'taxonomy':
        if (module_exists('taxonomy')) {
          $dart_terms = array();
          foreach ($data as $d) {
            if (!empty($d)) {
              $dart_terms = array_merge($dart_terms, explode(', ', $d));
            }
          }
          if (!empty($dart_terms) && arg(0) == 'node' && is_numeric(arg(1))) {
            $node_terms = array();
            $node = node_load(arg(1));
            foreach ($node->taxonomy as $term) {
              $node_terms[] = $term->name;
            }
            $pass = count(array_intersect($dart_terms, $node_terms)) > 0;
          }
        }
        break;
      case 'user_role':
        global $user;
        $pass = count(array_intersect($data, array_keys($user->roles))) == 0;
        break;
      case 'admin_pages':
        $pass = arg(0) != 'admin' && !(arg(0) == 'node' && (in_array(arg(1), array('add', 'edit', 'delete'))));
        break;
    }

    return $pass;
  }

  /**
   * Remove duplicate values from a key|val array.
   *
   * @param keyvals
   *   An array of key/val arrays
   *   as returned by key_vals().
   *
   * @return
   *   An array of key/val arrays as returned
   *   by key_vals() without any duplicates.
   */
  static function unique_key_vals($keyvals) {
    foreach ($keyvals as $key => &$vals) {
      foreach ($vals as $k => $val) {
        $vals[$k] = serialize($val);
      }
      $vals = array_unique($vals);
      foreach ($vals as $k => $val) {
        $vals[$k] = unserialize($val);
      }
    }

    return $keyvals;
  }

}
