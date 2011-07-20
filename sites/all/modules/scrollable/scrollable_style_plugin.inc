<?php
/**
 * @file
 *  Provide the views scrollable plugin object with default options and form.
 */

/**
  * Implementation of views_plugin_style().
  */
class scrollable_style_plugin extends views_plugin_style {
  function option_definition() {
    $options = parent::option_definition();
    $options['size'] = array('default' => 3);
    $options['vertical'] = array('default' => FALSE);
    $options['clickable'] = array('default' => TRUE);
    $options['loop'] = array('default' => FALSE);
    $options['interval'] = array('default' => 0);
    $options['speed'] = array('default' => 400);
    $options['keyboard'] = array('default' => TRUE);
    $options['items'] = array('default' => 'items');
    
    $options['prevbutton'] = array('default' => TRUE);
    $options['prev'] = array('default' => 'prev');
    $options['prevPage'] = array('default' => 'prevPage');
    
    $options['nextbutton'] = array('default' => TRUE);
    $options['next'] = array('default' => 'next');
    $options['nextPage'] = array('default' => 'nextPage');
    
    $options['navigator'] = array('default' => TRUE);    
    $options['navi'] = array('default' => 'navi');
    
    $options['mousewheel'] = array('default' => TRUE);
    
    $options['easing'] = array('default' => 'swing');
    
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['size'] = array(
      '#type' => 'select',
      '#title' => t('Size'),
      '#default_value' => $this->options['size'],
      '#description' => t('The number of visible items within the scrollable-enabled HTML element.'),
      '#options' => drupal_map_assoc(range(1,10)),
    );
    $form['vertical'] = array(
      '#type' => 'checkbox',
      '#title' => t('Vertical'),
      '#description' => t('Whether items will be scrolled vertically. (If set to false, items will be scrolled horizontally.)'),
      '#default_value' => $this->options['vertical'],
    );
    $form['clickable'] = array(
      '#type' => 'checkbox',
      '#title' => t('Clickable'),
      '#description' => t('Whether scrolling occurs when an item is clicked inside the scrollable-enabled element.'),
      '#default_value' => $this->options['clickable'],
    );
    $form['loop'] = array(
      '#type' => 'checkbox',
      '#title' => t('Loop'),
      '#description' => t('Whether scrolling starts from the first item in the list when the last item is reached.'),
      '#default_value' => $this->options['loop'],
    );
    $form['interval'] = array(
      '#type' => 'select',
      '#title' => t('Interval'),
      '#default_value' => $this->options['interval'],
      '#description' => t('The time (in milliseconds) between automatic scrolling of items (one step forward). 0 to disable automatic scrolling.'),
      '#options' => drupal_map_assoc(array(0, 100, 250, 500, 1000, 2000, 5000, 10000)),
    );
    $form['speed'] = array(
      '#type' => 'select',
      '#title' => t('Speed'),
      '#default_value' => $this->options['speed'],
      '#description' => t('The time (in milliseconds) of the scrolling animation.'),
      '#options' => drupal_map_assoc(array(100, 400, 500, 1000, 2000, 5000, 10000)),
    );
    $form['keyboard'] = array(
      '#type' => 'checkbox',
      '#title' => t('Keyboard'),
      '#description' => t('Whether keyboard arrow key navigation is enabled. (Horizontal scroller moves back/forward with left/right arrow keys; vertical scroller moves with up/down keys.'),
      '#default_value' => $this->options['keyboard'],
    );   
    $form['items'] = array(
      '#type' => 'textfield',
      '#title' => t('Items'),
      '#default_value' => $this->options['items'],
      '#size' => 15,
      '#description' => t('Selector for the element that contains the scrollable items. This must be located inside the parent scrollable-enabled HTML element.'),
    );
    $form['prevbutton'] = array(
      '#type' => 'checkbox',
      '#title' => t('Prevbutton'),
      '#description' => t('Activate the prevbutton.'),
      '#default_value' => $this->options['prevbutton'],
    );
    $form['prev'] = array(
      '#type' => 'textfield',
      '#title' => t('prev'),
      '#default_value' => $this->options['prev'],
      '#size' => 15,
      '#description' => t('Selector for the sibling element to which a "scroll backwards" action should be bound. '),
    );
    $form['prevPage'] = array(
      '#type' => 'textfield',
      '#title' => t('prevPage'),
      '#default_value' => $this->options['prevPage'],
      '#size' => 15,
      '#description' => t('Selector for the sibling element to which a "previous page" action should be bound.'),
    );
    $form['nextbutton'] = array(
      '#type' => 'checkbox',
      '#title' => t('Nextbutton'),
      '#description' => t('Activate the nextbutton.'),
      '#default_value' => $this->options['nextbutton'],
    );    
    $form['next'] = array(
      '#type' => 'textfield',
      '#title' => t('next'),
      '#default_value' => $this->options['next'],
      '#size' => 15,
      '#description' => t('Selector for the sibling element to which a "scroll forwards" action should be bound.'),
    );
    $form['nextPage'] = array(
      '#type' => 'textfield',
      '#title' => t('nextPage'),
      '#default_value' => $this->options['nextPage'],
      '#size' => 15,
      '#description' => t('Selector for the sibling element to which a "next page" action should be bound.'),
    );
    $form['navigator'] = array(
      '#type' => 'checkbox',
      '#title' => t('Navigator'),
      '#description' => t('Activate the navigator.'),
      '#default_value' => $this->options['navigator'],
    );     
    $form['navi'] = array(
      '#type' => 'textfield',
      '#title' => t('navi'),
      '#default_value' => $this->options['navi'],
      '#size' => 15,
      '#description' => t('Selector for the sibling element that contains a navigator for switching between pages. This topic is covered in more depth below.'),
    );
    $form['mousewheel'] = array(
      '#type' => 'checkbox',
      '#title' => t('Mousewheel'),
      '#description' => t('Activate mousewheel navigator.'),
      '#default_value' => $this->options['mousewheel'],
    ); 
    $form['easing'] = array(
      '#type' => 'select',
      '#title' => t('Easing'),
      '#default_value' => $this->options['easing'],
      '#description' => t('The type of "easing" applied to the scrolling animation. "swing" means that there is an acceleration, followed by a constant speed, followed by a deceleration. "linear" means that the whole animation happens at a constant speed.'),
      '#options' => drupal_map_assoc(array('swing', 'linear')),
    );
  }    
}