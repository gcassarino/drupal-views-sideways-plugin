<?php
/**
* Implementation of views_plugin_style
*
*/
class views_sideways_plugin_style_sideways extends views_plugin_style {

  // just set default options on this object. These variables are available in array [style_options] in views-sideways-tpl.php
  function options(&$options) { 
    $options['bgAutoColor'] = FALSE; // generates the background color for the image based on the color of the image (JQuery/HTML5 canvas)    
    $options['sbEffect'] = array('easeInOutExpo' => t('easeInOutExpo')); // Set effect for the ScrollBox
  }
  
  // Provide a form to edit options for this plugin. 
  function options_form(&$form, &$form_state) {
    $options = $this->display->handler->get_field_labels();
    
    $form['bgAutoColor'] = array(
      '#type' => 'checkbox',
      '#title' => t('Generates the background color for the image based on the color of the image (JQuery/HTML5 canvas)'),
      '#default_value' => $this->options['bgAutoColor'],
    );    
    $form['sbEffect'] = array(
      '#type' => 'radios',
      '#title' => t('ScrollBox slide effect'),
      '#description' => t('Set effect for the ScrollBox'),
      '#default_value' => $this->options['sbEffect'],
      '#options' => array(
	'easeInOutExpo' => t('easeInOutExpo'),
	'easeInExpo' => t('easeInExpo'),
	'easeOutExpo' => t('easeOutExpo'),
	'easeOutCirc' => t('easeOutCirc'),	
	'easeOutBounce' => t('easeOutBounce')	
      ),
    );    
  }

  /**
   * Validate the options form.
   */
  function options_validate(&$form, &$form_state) {
    parent::options_validate($form, $form_state);
    $options = &$form_state['values']['style_options'];
  }
  

  // Allow the style to do stuff before each row is rendered. 
  function pre_render($result) {
    if (!empty($this->row_plugin)) {
      $this->row_plugin->pre_render($result);
    }
  }


}


