<?php

/**
 * Implements hook_views_plugins().
 */
/*
module must have a .tpl.php file for each theme declared in hook_views_plugins. 
In this case, a file named views-sideways.tpl.php with the style template 
and a file named views-sideways-view-row-unformatted.tpl.php with the row template, are required. 
*/
function views_sideways_views_plugins() {

  // see http://drupalcontrib.org/api/drupal/contributions!calendar!includes!calendar.views.inc/function/calendar_views_plugins/6
  $path = drupal_get_path('module', 'views_sideways');
  $theme_path = $path;
  
  $views_path = drupal_get_path('module', 'views');
  
  $theme_inc_path = "$views_path/theme/theme.inc";
  require_once $theme_inc_path;

  $plugins = array(
    'module' => 'views_sideways', // This just tells our themes are elsewhere. 
    'style' => array(
      'parent' => array(
        // this isn't really a display but is necessary so the file can
        // be included.
        'no ui' => TRUE,
        'handler' => 'views_plugin_style',
	'path' => "$views_path/plugins",
        'parent' => '',
      ),
      'sideways' => array( // definition of the new plugin style output
        'title' => t('Sideways'),
        'help' => t('Display the results using Sideways.'),
        'handler' => 'views_sideways_plugin_style_sideways',
        'theme' => 'views_sideways',
        'uses options' => TRUE,
        'uses row plugin' => TRUE,
        'type' => 'normal',
	'parent' => 'parent',
      ),
    ),
    'row' => array( //declare the unformatted row plugin
      'parent' => array(
        // this isn't really a display but is necessary so the file can
        // be included.
        'no ui' => TRUE,
        'handler' => 'views_plugin_row',
	'path' => "$views_path/plugins",
        'parent' => '',
      ),
      'unformatted' => array(
        'title' => t('Unformatted'),
        'help' => t('(Displays the unformatted data for each row from the views query with each row on a new line.'),
        'handler' => 'views_sideways_plugin_row_unformatted',
        'theme' => 'views_sideways_view_row_unformatted',
        'uses fields' => TRUE,
        'uses options' => FALSE, // determines whether or not the presence of options in the row plugin, currently not used but defined as example
        'type' => 'normal',
	'parent' => 'parent',
      )
    )  
  );
  
  return $plugins;

}


