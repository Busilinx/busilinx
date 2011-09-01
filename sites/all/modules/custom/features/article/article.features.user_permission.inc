<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function article_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: access print
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: access send to friend
  $permissions['access send to friend'] = array(
    'name' => 'access send to friend',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: access seochecklist content
  $permissions['access seochecklist content'] = array(
    'name' => 'access seochecklist content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer addtoany
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer ctools access ruleset
  $permissions['administer ctools access ruleset'] = array(
    'name' => 'administer ctools access ruleset',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imce(execute PHP)
  $permissions['administer imce(execute PHP)'] = array(
    'name' => 'administer imce(execute PHP)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer mini panels
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer print
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: administer referential integrity
  $permissions['administer referential integrity'] = array(
    'name' => 'administer referential integrity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer save and edit
  $permissions['administer save and edit'] = array(
    'name' => 'administer save and edit',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer scheduler
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer seo_checker configuration
  $permissions['administer seo_checker configuration'] = array(
    'name' => 'administer seo_checker configuration',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: cancel own vote
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: clone node
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: clone own nodes
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: create mini panels
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create news_article content
  $permissions['create news_article content'] = array(
    'name' => 'create news_article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create poll content
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any news_article content
  $permissions['delete any news_article content'] = array(
    'name' => 'delete any news_article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any poll content
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(),
  );

  // Exported permission: delete own news_article content
  $permissions['delete own news_article content'] = array(
    'name' => 'delete own news_article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own poll content
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any news_article content
  $permissions['edit any news_article content'] = array(
    'name' => 'edit any news_article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any poll content
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit field_article_poll
  $permissions['edit field_article_poll'] = array(
    'name' => 'edit field_article_poll',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: edit field_article_reference
  $permissions['edit field_article_reference'] = array(
    'name' => 'edit field_article_reference',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: edit field_body_standard
  $permissions['edit field_body_standard'] = array(
    'name' => 'edit field_body_standard',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
    ),
  );

  // Exported permission: edit field_bullet_points
  $permissions['edit field_bullet_points'] = array(
    'name' => 'edit field_bullet_points',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: edit field_external_link
  $permissions['edit field_external_link'] = array(
    'name' => 'edit field_external_link',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: edit field_new_article
  $permissions['edit field_new_article'] = array(
    'name' => 'edit field_new_article',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: edit field_paywall_status
  $permissions['edit field_paywall_status'] = array(
    'name' => 'edit field_paywall_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit field_standfirst
  $permissions['edit field_standfirst'] = array(
    'name' => 'edit field_standfirst',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: edit own news_article content
  $permissions['edit own news_article content'] = array(
    'name' => 'edit own news_article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own poll content
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: inspect all votes
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: node-specific print configuration
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: schedule (un)publishing of nodes
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
      '2' => 'sales',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for link visibility
  $permissions['use PHP for link visibility'] = array(
    'name' => 'use PHP for link visibility',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use save and edit
  $permissions['use save and edit'] = array(
    'name' => 'use save and edit',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'sales',
    ),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view field_article_poll
  $permissions['view field_article_poll'] = array(
    'name' => 'view field_article_poll',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_article_reference
  $permissions['view field_article_reference'] = array(
    'name' => 'view field_article_reference',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_body_standard
  $permissions['view field_body_standard'] = array(
    'name' => 'view field_body_standard',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'sales',
      '4' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_bullet_points
  $permissions['view field_bullet_points'] = array(
    'name' => 'view field_bullet_points',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'editor',
      '4' => 'sales',
      '5' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_external_link
  $permissions['view field_external_link'] = array(
    'name' => 'view field_external_link',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
      '4' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_new_article
  $permissions['view field_new_article'] = array(
    'name' => 'view field_new_article',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
      '4' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_paywall_status
  $permissions['view field_paywall_status'] = array(
    'name' => 'view field_paywall_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: view field_standfirst
  $permissions['view field_standfirst'] = array(
    'name' => 'view field_standfirst',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'sales',
      '3' => 'unauthenticated user',
    ),
  );

  // Exported permission: view field_thumbnail
  $permissions['view field_thumbnail'] = array(
    'name' => 'view field_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'sales',
      '4' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache WeeklyWire-sidebar
  $permissions['view imagecache WeeklyWire-sidebar'] = array(
    'name' => 'view imagecache WeeklyWire-sidebar',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache article-image
  $permissions['view imagecache article-image'] = array(
    'name' => 'view imagecache article-image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache article-thumbnail
  $permissions['view imagecache article-thumbnail'] = array(
    'name' => 'view imagecache article-thumbnail',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache directory_listing
  $permissions['view imagecache directory_listing'] = array(
    'name' => 'view imagecache directory_listing',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache event-calendar
  $permissions['view imagecache event-calendar'] = array(
    'name' => 'view imagecache event-calendar',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache features_test
  $permissions['view imagecache features_test'] = array(
    'name' => 'view imagecache features_test',
    'roles' => array(),
  );

  // Exported permission: view imagecache logos
  $permissions['view imagecache logos'] = array(
    'name' => 'view imagecache logos',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache publication-thumbail
  $permissions['view imagecache publication-thumbail'] = array(
    'name' => 'view imagecache publication-thumbail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache video-page-thumbnail
  $permissions['view imagecache video-page-thumbnail'] = array(
    'name' => 'view imagecache video-page-thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view imagecache video-thumbnail
  $permissions['view imagecache video-thumbnail'] = array(
    'name' => 'view imagecache video-thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'unauthenticated user',
    ),
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: vote on polls
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'editor',
      '3' => 'unauthenticated user',
    ),
  );

  return $permissions;
}
