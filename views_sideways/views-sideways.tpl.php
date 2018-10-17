<?php
/**
 * @file views-sideways.tpl.php
 * 
 * variabili (options) definite in template_preprocess_views_sideways
 * template per l'output dello stile
 *
 * $template_file
 * $variables
 * $view oggetto
 * $options (definite in template_preprocess_views_sideways)
 * $rows array
 * $title
 * $zebra
 * $id
 * $directory
 * $is_admin
 * $is_front
 * $logged_in
 * $db_is_active
 * $user
 *
 * @ingroup views_templates
 */
?>

<?php 
  $thumb_id = 0; // zero based index for id
  foreach ($rows as $row) :      
?>    
  <?php print $row; // tpl row plugin unformatted e impostazioni del campo nella vista ?>
<?php  
  $thumb_id++;
  endforeach; 
?>