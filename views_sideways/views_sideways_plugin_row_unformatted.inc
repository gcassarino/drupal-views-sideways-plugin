<?php
/**
* Implementation of views_row_plugin
*
*/
class views_sideways_plugin_row_unformatted extends views_plugin_row {
   
  /**
  * Set default options.
  */  
  function option_definition() {
    $options = parent::option_definition();
    $options['separator'] = array('default' => '|');
  }
  
  /**
  * Provide a form for setting options.
  */  
  function options_form(&$form, &$form_state) {
    $fields = $this->display->handler->get_option('fields');
    $options = array();
    foreach ($fields as $field => $info) {
      $handler = views_get_handler($info['table'], $info['field'], 'field');      
      if ($handler) {	
        $options[$field] = $handler->ui_name();
      }
    }
 
    $form['separator'] = array(
      '#title' => t('Separator'),
      '#type' => 'textfield',
      '#size' => 10,
      '#default_value' => isset($this->options['separator']) ? $this->options['separator'] : ',',
      '#description' => t('The separator is placed between fields.'),
    );
  }
   
  /**
   * Allow the style to do stuff before each row is rendered.
   *
   * @param $result
   *   The full array of results from the query.
   */
  function pre_render($result) {
    /*
    foreach ($result as $row) {
      print("<pre>". print_r($this->theme_functions(), 1)."</pre>");
    }
    */    
  }

  /**
   * Render a row object. This usually passes through to a theme template
   * of some form, but not always.
   */
  function render($row) {
    return theme($this->theme_functions(), $this->view, $this->options, $row, isset($this->field_alias) ? $this->field_alias : '');
  }

}