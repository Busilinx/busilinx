<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function article_default_panels_layout() {
  $export = array();

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'front_page';
  $layout->admin_title = 'Front page';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '39.81134361530532',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 13,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tag_cloud',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Directory',
        'width' => '45.31024531024531',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => '60.18865638469468',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
          1 => 8,
        ),
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'primary_article',
        ),
        'parent' => '1',
      ),
      'primary_article' => array(
        'type' => 'region',
        'title' => 'Primary article',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'parent' => '1',
      ),
      9 => array(
        'type' => 'column',
        'width' => '67.18882157987075',
        'width_type' => '%',
        'parent' => '8',
        'children' => array(
          0 => 12,
        ),
      ),
      10 => array(
        'type' => 'column',
        'width' => '32.811178420129245',
        'width_type' => '%',
        'parent' => '8',
        'children' => array(
          0 => 11,
        ),
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'latest_publication',
        ),
        'parent' => '10',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_summary',
        ),
        'parent' => '9',
      ),
      'content_summary' => array(
        'type' => 'region',
        'title' => 'Content summary',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
      ),
      'latest_publication' => array(
        'type' => 'region',
        'title' => 'Latest publication',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
      ),
      'tag_cloud' => array(
        'type' => 'region',
        'title' => 'Tag cloud',
        'width' => '54.68975468975469',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'video_listings',
        ),
        'parent' => 'main',
      ),
      'video_listings' => array(
        'type' => 'region',
        'title' => 'Video listings',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
      ),
    ),
  );
  $export['front_page'] = $layout;

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'frontpage_layout';
  $layout->admin_title = 'Frontpage layout';
  $layout->admin_description = '';
  $layout->category = 'custom';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 13,
          1 => 5,
          2 => 8,
        ),
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => '1',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 16,
        ),
        'parent' => '1',
      ),
      9 => array(
        'type' => 'column',
        'width' => '100',
        'width_type' => '%',
        'parent' => '8',
        'children' => array(
          0 => 12,
          1 => 20,
        ),
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_summary',
        ),
        'parent' => '9',
      ),
      'content_summary' => array(
        'type' => 'region',
        'title' => 'Main article list',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'section_menu',
        ),
        'parent' => '1',
      ),
      'section_menu' => array(
        'type' => 'region',
        'title' => 'Section menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
      ),
      16 => array(
        'type' => 'column',
        'width' => '374',
        'width_type' => 'px',
        'parent' => '8',
        'children' => array(
          0 => 22,
          1 => 19,
          2 => 18,
        ),
      ),
      18 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'extra_info',
        ),
        'parent' => '16',
      ),
      'extra_info' => array(
        'type' => 'region',
        'title' => 'extra info',
        'width' => 100,
        'width_type' => '%',
        'parent' => '18',
      ),
      19 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'publication',
          1 => 'directory_slideshow',
        ),
        'parent' => '16',
      ),
      'directory_slideshow' => array(
        'type' => 'region',
        'title' => 'Directory top',
        'width' => '100',
        'width_type' => '%',
        'parent' => '19',
        'class' => '',
      ),
      'publication' => array(
        'type' => 'region',
        'title' => 'Publication top',
        'width' => '154',
        'width_type' => 'px',
        'parent' => '19',
        'class' => '',
      ),
      20 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'publication_bottom',
          1 => 'directory_bottom',
        ),
        'parent' => '9',
        'class' => '',
      ),
      'publication_bottom' => array(
        'type' => 'region',
        'title' => 'Publication bottom',
        'width' => '27.995370640061495',
        'width_type' => '%',
        'parent' => '20',
        'class' => '',
      ),
      'directory_bottom' => array(
        'type' => 'region',
        'title' => 'Directory bottom',
        'width' => '72.0046293599385',
        'width_type' => '%',
        'parent' => '20',
        'class' => '',
      ),
      22 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'column_top',
        ),
        'parent' => '16',
        'class' => '',
      ),
      'column_top' => array(
        'type' => 'region',
        'title' => 'Column top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '22',
        'class' => '',
      ),
    ),
  );
  $export['frontpage_layout'] = $layout;

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'primary_article_layout';
  $layout->admin_title = 'Primary article layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Bulletpoints',
        'width' => '67.92250320361977',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => '32.07749679638023',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $export['primary_article_layout'] = $layout;

  return $export;
}
