<?php

/**
 * Implementation of hook_views_default_views().
 */
function article_views_default_views() {
  $views = array();

  // Exported view: article_pages
  $view = new view;
  $view->name = 'article_pages';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '65' => 65,
        '4' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_thumbnail_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'article-thumbnail_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_thumbnail_fid',
      'table' => 'node_data_field_thumbnail',
      'field' => 'field_thumbnail_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(
        '873' => '873',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '62',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('footer_format', '1');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 6);
  $handler->override_option('offset', 1);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('style_plugin', 'fluid_grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'advanced_layout' => array(
      'align' => TRUE,
      'margins' => TRUE,
    ),
    'items_width' => '250',
    'items_height' => '',
    'list_alignment' => 'left',
    'items_alignment' => 'left',
    'items_h_margin' => '8px',
    'items_v_margin' => '8px',
    'box_shadow' => '0',
    'border_radius' => '0',
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'tid' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'p',
        'class' => 'article-standfirst',
      ),
      'field_thumbnail_fid' => array(
        'element_type' => 'div',
        'class' => 'article-thumbnails',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 1,
  ));
  $handler = $view->new_display('panel_pane', 'News round list panel', 'panel_pane_5');
  $handler->override_option('fields', array(
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => '[type_1]',
        'link_class' => '',
        'alt' => '[type]',
        'prefix' => '',
        'suffix' => '',
        'target' => '_parent',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 0,
      'exclude' => 0,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'type' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'p',
        'class' => 'article-standfirst',
      ),
      'field_thumbnail_fid' => array(
        'element_type' => 'div',
        'class' => 'article-thumbnails',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 1,
  ));
  $handler->override_option('pane_title', 'News round article list');
  $handler->override_option('pane_description', 'News round article list');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'News round primary article', 'panel_pane_6');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('items_per_page', 1);
  $handler->override_option('offset', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'tid' => 'tid',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'type_1' => 'header',
      'tid' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('pane_title', 'News round primary article');
  $handler->override_option('pane_description', 'News round primary article');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Taxonomy article list', 'panel_pane_13');
  $handler->override_option('fields', array(
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '65' => 65,
        '4' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '8' => 0,
        '14' => 0,
        '7' => 0,
        '12' => 0,
        '13' => 0,
        '11' => 0,
        '3' => 0,
        '15' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => 'if (arg(0) == \'taxonomy\' && arg(1) == \'term\' && arg(2) != \'\') {
      return arg(2);
    }',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'kaltura_playlist' => 0,
        'kaltura_entry' => 0,
        'kaltura_mix' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'panel' => 0,
        'comment_piece' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'executive_profile' => 0,
        'feature_article' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'podcast' => 0,
        'press_release' => 0,
        'print_edition_sample' => 0,
        'webform' => 0,
        'white_papers' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '4' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'comment_piece' => 'comment_piece',
        'executive_profile' => 'executive_profile',
        'feature_article' => 'feature_article',
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'term_node_tid_depth' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_op',
        'identifier' => 'term_node_tid_depth',
        'label' => '',
        'bef_filter_description' => '',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '62',
      'depth' => '0',
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'term_node_tid_depth_1' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_1_op',
        'identifier' => 'term_node_tid_depth_1',
        'label' => '',
        'bef_filter_description' => '',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '65',
      'depth' => '0',
      'id' => 'term_node_tid_depth_1',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('items_per_page', 8);
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'tid' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'p',
        'class' => 'article-standfirst',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 1,
  ));
  $handler->override_option('pane_title', 'Taxonomy article list');
  $handler->override_option('pane_description', 'Taxonomy article list');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Taxonomy primary article', 'panel_pane_14');
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '8' => 0,
        '14' => 0,
        '7' => 0,
        '12' => 0,
        '13' => 0,
        '11' => 0,
        '3' => 0,
        '15' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => 'if (arg(0) == \'taxonomy\' && arg(1) == \'term\' && arg(2) != \'\') {
      return arg(2);
    }',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'kaltura_playlist' => 0,
        'kaltura_entry' => 0,
        'kaltura_mix' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'panel' => 0,
        'comment_piece' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'executive_profile' => 0,
        'feature_article' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'podcast' => 0,
        'press_release' => 0,
        'print_edition_sample' => 0,
        'webform' => 0,
        'white_papers' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '4' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'comment_piece' => 'comment_piece',
        'executive_profile' => 'executive_profile',
        'feature_article' => 'feature_article',
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('empty', '<div class="messages help">There is no news or premium content for this tag. Please contact our editorial team if you would like us to write an article about it at <a href="mailto:editorial@eFunds.tv">editorial@eFunds.tv</a>.</div>');
  $handler->override_option('empty_format', '4');
  $handler->override_option('items_per_page', 1);
  $handler->override_option('offset', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'type_1' => 'type_1',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'type_1' => 'header',
      'tid' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('pane_title', 'Taxonomy primary article');
  $handler->override_option('pane_description', 'Taxonomy primary article');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => FALSE,
    'items_per_page' => FALSE,
    'offset' => FALSE,
    'link_to_view' => FALSE,
    'more_link' => FALSE,
    'path_override' => FALSE,
    'title_override' => FALSE,
    'exposed_form' => FALSE,
    'fields_override' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('feed', 'Fundamentals News Feed', 'feed_1');
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Fundamentals News Feed');
  $handler->override_option('items_per_page', 20);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'news.xml');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'panel_pane_5' => 'panel_pane_5',
    'default' => 0,
    'panel_pane_6' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
    'panel_pane_7' => 0,
    'panel_pane_8' => 0,
    'panel_pane_9' => 0,
    'panel_pane_10' => 0,
    'panel_pane_11' => 0,
    'panel_pane_12' => 0,
    'panel_pane_13' => 0,
    'panel_pane_14' => 0,
  ));
  $handler->override_option('sitename_title', 0);
  $handler = $view->new_display('feed', 'Fundamentals Premium Content Feed', 'feed_2');
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'comment_piece' => 'comment_piece',
        'executive_profile' => 'executive_profile',
        'feature_article' => 'feature_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Fundamentals Premium Content Feed');
  $handler->override_option('items_per_page', 20);
  $handler->override_option('offset', 0);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'premium-content.xml');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'panel_pane_3' => 'panel_pane_3',
    'default' => 0,
    'panel_pane_5' => 0,
    'panel_pane_6' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_4' => 0,
    'panel_pane_7' => 0,
    'panel_pane_8' => 0,
    'panel_pane_9' => 0,
    'panel_pane_10' => 0,
    'panel_pane_11' => 0,
    'panel_pane_12' => 0,
    'panel_pane_13' => 0,
    'panel_pane_14' => 0,
  ));
  $handler->override_option('sitename_title', 0);

  $views[$view->name] = $view;

  // Exported view: blogs
  $view = new view;
  $view->name = 'blogs';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 1,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<h4 class="blog-listing-blog-title">[title]</h4><span class="blog-listing-blog-date">[name]</span>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'blog' => 'blog',
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'promote' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'relationship' => 'none',
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(
        '4939' => '4939',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '65',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', '<a href="/blogs" target="_parent"><h2>Blogs</h2></a>');
  $handler->override_option('header_format', '4');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('use_more_text', '');
  $handler->override_option('distinct', 0);
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => 'ul',
      'class' => 'item-list blog-list',
    ),
    'row' => array(
      'element_type' => 'li',
      'class' => 'views-list-item blog-list-list-item',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('header', '
');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'blogs/feed');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'block_1' => 'block_1',
    'default' => 0,
    'page_2' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('block', 'Blogs by taxonomy', 'block_2');
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1 Blogs',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '8' => 0,
        '14' => 0,
        '7' => 0,
        '12' => 0,
        '13' => 0,
        '11' => 0,
        '3' => 0,
        '15' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => 'if (arg(0) == \'taxonomy\' && arg(1) == \'term\' && arg(2) != \'\') {
              return arg(2);
            }',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'kaltura_playlist' => 0,
        'kaltura_entry' => 0,
        'kaltura_mix' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'panel' => 0,
        'comment_piece' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'executive_profile' => 0,
        'feature_article' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'podcast' => 0,
        'press_release' => 0,
        'print_edition_sample' => 0,
        'webform' => 0,
        'white_papers' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '4' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('header', '<a target="_parent"  href="/article-type/blog"><h2>Latest Blogs</h2></a>');
  $handler->override_option('header_empty', 1);
  $handler->override_option('empty', '<div class="messages help">There is no blogs for this tag. if you would like us to write an blog about it or you would like to become a guest blogger please contact our editorial team at <a href="mailto:editorial@eFunds.tv">editorial@eFunds.tv</a>.</div>');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 4);
  $handler->override_option('block_description', 'Blogs by taxonomy');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: front_page_articles
  $view = new view;
  $view->name = 'front_page_articles';
  $view->description = 'Display a list of all articles on the front page article list';
  $view->tag = 'front page article list';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'tid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '65' => 65,
        '4' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'relationship' => 'none',
    ),
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_thumbnail_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'article-thumbnail_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_thumbnail_fid',
      'table' => 'node_data_field_thumbnail',
      'field' => 'field_thumbnail_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'term_node_tid_depth' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_op',
        'identifier' => 'term_node_tid_depth',
        'label' => '',
        'bef_filter_description' => '',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 1,
        'reduce' => 0,
        'bef_select_all_none' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '62',
      'depth' => '0',
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 0,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'term_node_tid_depth_1' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_1_op',
        'identifier' => 'term_node_tid_depth_1',
        'label' => '',
        'bef_filter_description' => '',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '65',
      'depth' => '0',
      'id' => 'term_node_tid_depth_1',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 0,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('footer_format', '1');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 200);
  $handler->override_option('use_pager', '1');
  $handler->override_option('use_more', 0);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'fluid_grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'advanced_layout' => array(
      'align' => TRUE,
      'margins' => TRUE,
    ),
    'items_width' => '250',
    'items_height' => '',
    'list_alignment' => 'left',
    'items_alignment' => 'left',
    'items_h_margin' => '8px',
    'items_v_margin' => '8px',
    'box_shadow' => '0',
    'border_radius' => '0',
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'tid' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'p',
        'class' => 'article-standfirst',
      ),
      'field_thumbnail_fid' => array(
        'element_type' => 'div',
        'class' => 'article-thumbnails',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 1,
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('path', 'nodequeue/1');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('row_plugin', 'fields');
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
  ));
  $handler->override_option('block_description', 'Queue \'Front page article list\'');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('panel_pane', 'Primary article', 'panel_pane_1');
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'tid' => 'tid',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'tid' => 'header',
      'type_1' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'picture' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('pane_title', 'Primary article');
  $handler->override_option('pane_description', 'Primary article front page');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => '0',
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 0,
    'exposed_form' => 0,
    'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Main article list', 'panel_pane_2');
  $handler->override_option('fields', array(
    'tid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '65' => 65,
        '4' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '2',
        'multiple_from' => '0',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '2',
        'multiple_from' => '0',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('items_per_page', 8);
  $handler->override_option('offset', 1);
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'tid' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'div',
        'class' => 'article-standfirst',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler->override_option('pane_title', 'Main article list');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 0,
    'exposed_form' => 0,
    'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Primary article by taxonomy', 'panel_pane_3');
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'taxonomy_tid',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '8' => 0,
        '14' => 0,
        '7' => 0,
        '12' => 0,
        '13' => 0,
        '11' => 0,
        '3' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'kaltura_playlist' => 0,
        'kaltura_entry' => 0,
        'kaltura_mix' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'comment_piece' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'executive_profile' => 0,
        'feature_article' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'podcast' => 0,
        'press_release' => 0,
        'print_edition_sample' => 0,
        'webform' => 0,
        'white_papers' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '4' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'tid' => 'tid',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'tid' => 'header',
      'type_1' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'picture' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('pane_title', 'Primary article by taxonomy');
  $handler->override_option('pane_description', 'Primary article by taxonomy');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 0,
    'exposed_form' => 0,
    'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Main article list by taxonomy', 'panel_pane_4');
  $handler->override_option('fields', array(
    'type_1' => array(
      'label' => 'Type: Machine name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type_1',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ', ',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '65' => 65,
        '4' => 0,
        '66' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'field_standfirst_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_standfirst_value',
      'table' => 'node_data_field_standfirst',
      'field' => 'field_standfirst_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_bullet_points_value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 0,
        'ellipsis' => 0,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_bullet_points_value',
      'table' => 'node_data_field_bullet_points',
      'field' => 'field_bullet_points_value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_article_reference_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_article_reference_nid',
      'table' => 'node_data_field_article_reference',
      'field' => 'field_article_reference_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_external_link_url' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_external_link_url',
      'table' => 'node_data_field_external_link',
      'field' => 'field_external_link_url',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'taxonomy_tid',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '8' => 0,
        '14' => 0,
        '7' => 0,
        '12' => 0,
        '13' => 0,
        '11' => 0,
        '3' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'kaltura_playlist' => 0,
        'kaltura_entry' => 0,
        'kaltura_mix' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'comment_piece' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'executive_profile' => 0,
        'feature_article' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'podcast' => 0,
        'press_release' => 0,
        'print_edition_sample' => 0,
        'webform' => 0,
        'white_papers' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '4' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'term_node_tid_depth_1' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'term_node_tid_depth_1_op',
        'identifier' => 'term_node_tid_depth_1',
        'label' => '',
        'bef_filter_description' => '',
        'bef_format' => 'bef',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
        'bef_select_all_none' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '65',
      'depth' => '0',
      'id' => 'term_node_tid_depth_1',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'hierarchy' => 0,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('items_per_page', 8);
  $handler->override_option('offset', 1);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'tid' => array(
        'element_type' => 'span',
        'class' => 'content-type',
      ),
      'created' => array(
        'element_type' => 'span',
        'class' => 'post-date',
      ),
      'title' => array(
        'element_type' => 'h2',
        'class' => 'article-title',
      ),
      'field_standfirst_value' => array(
        'element_type' => 'p',
        'class' => 'article-standfirst',
      ),
      'field_bullet_points_value' => array(
        'element_type' => 'div',
        'class' => 'article-bulletpoints bulletpoints',
      ),
      'field_article_reference_nid' => array(
        'element_type' => 'div',
        'class' => 'article-links bulletpoints',
      ),
      'field_external_link_url' => array(
        'element_type' => 'div',
        'class' => 'article-external-links bulletpoints',
      ),
    ),
    'skip_blank' => 1,
  ));
  $handler->override_option('pane_title', 'Main article list by taxonomy');
  $handler->override_option('pane_description', 'Main article list by taxonomy');
  $handler->override_option('pane_category', array(
    'name' => 'View panes',
    'weight' => 0,
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 0,
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 0,
    'exposed_form' => 0,
    'fields_override' => 0,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'latest-news-all.xml');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'panel_pane_2' => 'panel_pane_2',
    'panel_pane_4' => 'panel_pane_4',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'panel_pane_1' => 0,
    'panel_pane_3' => 0,
    'page_1' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('attachment', 'Primary article attachment', 'attachment_1');
  $handler->override_option('sorts', array(
    'position' => array(
      'order' => 'DESC',
      'id' => 'position',
      'table' => 'nodequeue_nodes',
      'field' => 'position',
      'relationship' => 'nodequeue_rel',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('css_class', 'primary-article-frontpage');
  $handler->override_option('use_ajax', FALSE);
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'tid' => 'tid',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'tid' => 'header',
      'type_1' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'picture' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', 1);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'panel_pane_2' => 'panel_pane_2',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'panel_pane_1' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
  ));
  $handler = $view->new_display('attachment', 'Primary article by taxonomy attachment', 'attachment_2');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'taxonomy_tid',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'use_taxonomy_term_path' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '19' => 0,
        '8' => 0,
        '14' => 0,
        '21' => 0,
        '16' => 0,
        '3' => 0,
        '15' => 0,
        '17' => 0,
        '20' => 0,
        '9' => 0,
        '18' => 0,
      ),
      'me_redirect' => 0,
      'me_validate_user_argument_type' => 'uid',
      'me_validate_user_roles' => array(
        '2' => 0,
        '10' => 0,
        '19' => 0,
        '8' => 0,
        '14' => 0,
        '21' => 0,
        '16' => 0,
        '3' => 0,
        '15' => 0,
        '17' => 0,
        '20' => 0,
        '9' => 0,
        '18' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'poll' => 0,
        'ad' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'panel' => 0,
        'directory_listing' => 0,
        'documents' => 0,
        'event' => 0,
        'feed' => 0,
        'fintuition_course' => 0,
        'fundamentals_event' => 0,
        'job_application' => 0,
        'job_listing' => 0,
        'mandate_update' => 0,
        'news_article' => 0,
        'page' => 0,
        'people_moves' => 0,
        'podcast' => 0,
        'premium_publication' => 0,
        'press_release' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '4' => 0,
        '65' => 0,
        '66' => 0,
        '62' => 0,
        '61' => 0,
        '60' => 0,
        '2' => 0,
        '56' => 0,
        '7' => 0,
        '9' => 0,
        '11' => 0,
        '58' => 0,
        '64' => 0,
        '57' => 0,
        '6' => 0,
        '8' => 0,
        '10' => 0,
        '13' => 0,
        '59' => 0,
        '55' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
      'me_validate_user_restrict_roles' => 0,
    ),
  ));
  $handler->override_option('css_class', 'primary-article-frontpage');
  $handler->override_option('use_ajax', FALSE);
  $handler->override_option('items_per_page', 1);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('row_plugin', 'panels_fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'tid' => 'tid',
      'created' => 'created',
    ),
    'separator' => '',
    'hide_empty' => 0,
    'layout' => 'flexible:primary_article_layout',
    'change' => 'Change',
    'regions' => array(
      'tid' => 'header',
      'type_1' => 'header',
      'created' => 'header',
      'title' => 'header',
      'field_standfirst_value' => 'header',
      'field_thumbnail_fid' => 'image',
      'picture' => 'image',
      'field_bullet_points_value' => 'center',
      'field_article_reference_nid' => 'center',
      'field_external_link_url' => 'center',
    ),
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', 1);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'panel_pane_4' => 'panel_pane_4',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
  ));

  $views[$view->name] = $view;

  // Exported view: news
  $view = new view;
  $view->name = 'news';
  $view->description = 'Bulleted list of all lastest news headlines';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Latest News', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'date_format' => 'custom',
      'custom_date_format' => 'dMy',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'sticky' => array(
      'order' => 'DESC',
      'id' => 'sticky',
      'table' => 'node',
      'field' => 'sticky',
      'relationship' => 'none',
    ),
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'press_release' => 'press_release',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'promote' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'News');
  $handler->override_option('header', '<a href="/news" target="_parent"><h2>Latest News</h2></a>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer_format', '3');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', '0');
  $handler->override_option('use_more', 1);
  $handler->override_option('distinct', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
    ),
    'separator' => '',
  ));
  $handler = $view->new_display('block', 'Latest News Inner Page', 'block_1');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'teaser' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'exclude' => 1,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Post date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'custom',
      'custom_date_format' => 'dMy',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('block_description', 'Latest News Inner Page');
  $handler->override_option('block_caching', '-1');
  $handler = $view->new_display('block', 'Latest News Front Page', 'block_2');
  $handler->override_option('block_description', 'Latest News Front Page');
  $handler->override_option('block_caching', '2');
  $handler = $view->new_display('block', 'News by channel', 'block_3');
  $handler->override_option('arguments', array(
    'term_node_tid_depth' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1 News',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'depth' => '1',
      'break_phrase' => 0,
      'set_breadcrumb' => 0,
      'id' => 'term_node_tid_depth',
      'table' => 'node',
      'field' => 'term_node_tid_depth',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '4' => 0,
        '6' => 0,
        '5' => 0,
        '3' => 0,
        '9' => 0,
      ),
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => 'if (arg(0) == \'taxonomy\' && arg(1) == \'term\' && arg(2) != \'\') {
          return arg(2);
        }',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'blog' => 0,
        'kaltura_entry' => 0,
        'product' => 0,
        'membership' => 0,
        'ipaper' => 0,
        'book' => 0,
        'directory_listing' => 0,
        'event' => 0,
        'image_gallery' => 0,
        'news_article' => 0,
        'news_release' => 0,
        'page' => 0,
        'papers_publications' => 0,
        'uploaded_video' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '4' => 0,
        '1' => 0,
        '3' => 0,
        '7' => 0,
        '6' => 0,
        '9' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('header', '');
  $handler->override_option('empty', '<p>There is no news currently on this channel.</p><p>If you have some news you would like us to report please <a href="../contact">CLICK HERE</a> to contact our editor.</p>');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 0);
  $handler->override_option('block_description', 'News by channel');
  $handler->override_option('block_caching', '-1');
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('header', '');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'news/feed');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
    'page_1' => 0,
    'block_3' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('feed', 'Feed', 'feed_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news_article' => 'news_article',
        'news_release' => 'news_release',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'promote' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('items_per_page', 20);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'all-news/feed');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array());
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('header', '<h3>Press releases</h3>');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'created' => 'created',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', 0);
  $handler->override_option('render_pager', 1);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
