<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function article_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_bulletpoints_news
  $groups['news_article-group_bulletpoints_news'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_bulletpoints_news',
    'label' => 'Bulletpoints',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '28',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'simple',
          'exclude' => 1,
        ),
        'description' => '',
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '28',
    'fields' => array(
      '0' => 'field_bullet_points',
      '1' => 'field_article_reference',
      '2' => 'field_external_link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bulletpoints');

  return $groups;
}
