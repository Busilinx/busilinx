<?php

/**
 * Implementation of hook_content_default_fields().
 */
function article_content_default_fields() {
  $fields = array();

  // Exported field: field_article_poll
  $fields['news_article-field_article_poll'] = array(
    'field_name' => 'field_article_poll',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '30',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'full',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'poll' => 'poll',
      'ad' => 0,
      'blog' => 0,
      'comment_piece' => 0,
      'directory_listing' => 0,
      'event' => 0,
      'executive_profile' => 0,
      'feature_article' => 0,
      'feed' => 0,
      'fintuition_course' => 0,
      'job_application' => 0,
      'job_listing' => 0,
      'kaltura_mix' => 0,
      'kaltura_playlist' => 0,
      'mandate_update' => 0,
      'membership' => 0,
      'news_article' => 0,
      'page' => 0,
      'panel' => 0,
      'people_moves' => 0,
      'podcast' => 0,
      'premium_publication' => 0,
      'press_release' => 0,
      'print_edition_sample' => 0,
      'product' => 0,
      'ipaper' => 0,
      'video' => 0,
      'kaltura_entry' => 0,
      'video_preview' => 0,
      'webform' => 0,
      'documents' => 0,
      'inhouse_event' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
      'field_element' => 'div',
      'field_class' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => '',
      'multiple_item_element' => 'div',
      'multiple_item_class' => '',
      'use_singlevalue_settings' => 0,
      'single_item_element' => 'div',
      'single_item_class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Poll',
      'weight' => '30',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_article_reference
  $fields['news_article-field_article_reference'] = array(
    'field_name' => 'field_article_reference',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_bulletpoints_news',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'news_article' => 'news_article',
      'directory_listing' => 'directory_listing',
      'documents' => 'documents',
      'event' => 'event',
      'fintuition_course' => 'fintuition_course',
      'job_listing' => 'job_listing',
      'poll' => 'poll',
      'premium_publication' => 'premium_publication',
      'press_release' => 'press_release',
      'ipaper' => 'ipaper',
      'video' => 'video',
      'webform' => 'webform',
      'ad' => 0,
      'feed' => 0,
      'job_application' => 0,
      'mandate_update' => 0,
      'membership' => 0,
      'page' => 0,
      'panel' => 0,
      'people_moves' => 0,
      'podcast' => 0,
      'product' => 0,
      'inhouse_event' => 'inhouse_event',
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 1,
      'field_element' => '',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => 'bulletpoints article-links-multivalue',
      'multiple_item_element' => 'div',
      'multiple_item_class' => 'multivalue-field-item field-item-0',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 1,
      'single_item_element' => 'div',
      'single_item_class' => 'article-links bulletpoints',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_article_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Internal link',
      'weight' => '7',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_body_standard
  $fields['news_article-field_body_standard'] = array(
    'field_name' => 'field_body_standard',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '29',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'trimmed',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
      'field_element' => 'div',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => '',
      'multiple_item_element' => 'div',
      'multiple_item_class' => '',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 0,
      'single_item_element' => 'div',
      'single_item_class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'rows' => '20',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_body_standard][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Body',
      'weight' => '29',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_bullet_points
  $fields['news_article-field_bullet_points'] = array(
    'field_name' => 'field_bullet_points',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_bulletpoints_news',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 1,
      'field_element' => '',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => 'bulletpoints article-bulletpoints-multivalue',
      'multiple_item_element' => 'div',
      'multiple_item_class' => 'multivalue-field-item field-item-0',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 1,
      'single_item_element' => 'div',
      'single_item_class' => 'article-bulletpoints bulletpoints',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_bullet_points][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Bullet points',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_external_link
  $fields['news_article-field_external_link'] = array(
    'field_name' => 'field_external_link',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_bulletpoints_news',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => 'nofolllow',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'semantic_cck_field_settings' => array(
      'enabled' => 1,
      'field_element' => '',
      'field_class' => '',
      'label_element_above' => '',
      'label_class_above' => '',
      'label_class_inline' => '',
      'label_suffix_above' => '',
      'label_suffix_inline' => '',
      'label_element_inline' => '',
      'multiple_items_element' => 'div',
      'multiple_items_class' => 'bulletpoints article-external-links-multivalue',
      'multiple_item_element' => 'div',
      'multiple_item_class' => 'multivalue-field-item field-item-0',
      'use_singlevalue_settings' => 1,
      'single_item_element' => 'div',
      'single_item_class' => 'article-external-links bulletpoints',
      'last_every_nth' => '0',
      'first_class' => '',
      'last_class' => '',
      'striping_classes' => '',
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'External link',
      'weight' => '8',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_new_article
  $fields['news_article-field_new_article'] = array(
    'field_name' => 'field_new_article',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '24',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Old|Old
New|New
',
    'allowed_values_php' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Old',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'New article',
      'weight' => '24',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_paywall_status
  $fields['news_article-field_paywall_status'] = array(
    'field_name' => 'field_paywall_status',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '23',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'standard|Standard
premium|Premium',
    'allowed_values_php' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
      'field_element' => 'div',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => '',
      'multiple_item_element' => 'div',
      'multiple_item_class' => '',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 0,
      'single_item_element' => 'div',
      'single_item_class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Paywall status',
      'weight' => '23',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_standfirst
  $fields['news_article-field_standfirst'] = array(
    'field_name' => 'field_standfirst',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '26',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
      'field_element' => 'div',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => '',
      'multiple_item_element' => 'div',
      'multiple_item_class' => '',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 0,
      'single_item_element' => 'div',
      'single_item_class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '140',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_standfirst][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Standfirst',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_thumbnail
  $fields['news_article-field_thumbnail'] = array(
    'field_name' => 'field_thumbnail',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '27',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'article-thumbnail_default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'article-image_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'semantic_cck_field_settings' => array(
      'enabled' => 0,
      'field_element' => 'div',
      'field_class' => '',
      'field_prefix' => '',
      'field_suffix' => '',
      'label_element_above' => 'h3',
      'label_class_above' => '',
      'label_suffix_above' => '',
      'label_element_inline' => 'span',
      'label_class_inline' => '',
      'label_suffix_inline' => ':',
      'multiple_items_element' => 'div',
      'multiple_items_class' => '',
      'multiple_item_element' => 'div',
      'multiple_item_class' => '',
      'multiple_item_separator' => '',
      'use_singlevalue_settings' => 0,
      'single_item_element' => 'div',
      'single_item_class' => '',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'article-thumbnails',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '200x200',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'semantic_cck_widget_settings' => array(
        'use_widget_settings' => 0,
      ),
      'label' => 'Thumbnail',
      'weight' => '27',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Bullet points');
  t('External link');
  t('Internal link');
  t('New article');
  t('Paywall status');
  t('Poll');
  t('Standfirst');
  t('Thumbnail');

  return $fields;
}
