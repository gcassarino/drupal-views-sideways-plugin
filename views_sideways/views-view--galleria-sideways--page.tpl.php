<?php
// $Id: views-view.tpl.php,v 1.13.2.2 2010/03/25 20:25:28 merlinofchaos Exp $
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * TODO: this tpl works only if the view is named "galleria-sideways" an implementation of hook_views_default_views()
 * in views_sideways.views_default.inc should provide a default view with correct name
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php if ($admin_links): ?>
    <div class="views-admin-links views-hide">
      <?php print $admin_links; ?>
    </div>
  <?php endif; ?>

  <div id="outer_container">
    <div id="customScrollBox">
	    <div class="container">
	    <div class="content">	    
		 
		  <?php if ($header): ?>		    
		      <?php print $header; ?>		      
		  <?php endif; ?>
		
		<div id="toolbar"></div>
		<div class="clear"></div>

		<?php if ($rows): ?>		  
		    <?php print $rows; ?>		  
		<?php endif; ?>
	    
		<p class="clear"></p>

		<?php if ($footer): ?>		  
		    <?php print $footer; ?>		    
		<?php endif; ?>		

	    </div>
	    </div>
	<div id="dragger_container"><div id="dragger"></div></div>
    </div>
  </div>
  <div id="bg">    
      <?php	
	print "<img src=\"". $primaImmagine ."\" id=\"bgimg\" />";	
      ?>	
      <div id="preloader"><img src="/sites/all/libraries/sideways/ajax-loader_dark.gif" width="32" height="32" align="absmiddle" />LOADING...</div>
      <div id="arrow_indicator"><img src="/sites/all/libraries/sideways/sw_arrow_indicator.png" width="50" height="50"  /></div>
      <div id="nextimage_tip">Click for next image</div>
  </div>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

</div> <?php /* class view */ ?>