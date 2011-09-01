<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function article_imagecache_default_presets() {
  $items = array(
    'article-image' => array(
      'presetname' => 'article-image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '300',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'article-thumbnail' => array(
      'presetname' => 'article-thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '180',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function article_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function article_views_api() {
  return array(
    'api' => '2',
  );
}
