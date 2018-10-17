<?php
/*
* Implementation of hook_views_default_views()
*/
function views_sideways_views_default_views(){
  $view = new view;
  // export view
  $view->name = 'galleria_sideways';
  $view->description = 'mostra le immagini con uno stile Sideways JQuery';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Predefinite', 'default');
  $handler->override_option('relationships', array(
    'gid' => array(
      'label' => 'Parent Gallery',
      'required' => 0,
      'id' => 'gid',
      'table' => 'node_gallery_images',
      'field' => 'gid',
      'override' => array(
	'button' => 'Sovrascrivi',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'field_node_gallery_image_fid' => array(
      'label' => '',
      'alter' => array(
	'alter_text' => 0,
	'text' => '',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'node-gallery-cover_default',
      'multiple' => array(
	'group' => TRUE,
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_node_gallery_image_fid',
      'table' => 'node_data_field_node_gallery_image',
      'field' => 'field_node_gallery_image_fid',
      'override' => array(
	'button' => 'Sovrascrivi',
      ),
      'relationship' => 'none',
    ),
    'gid' => array(
      'id' => 'gid',
      'table' => 'node_gallery_galleries',
      'field' => 'gid',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
	'operator' => FALSE,
	'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
	'button' => 'Sovrascrivi',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
	'node_gallery_image' => 'node_gallery_image',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
	'operator' => FALSE,
	'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
	'button' => 'Sovrascrivi',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('distinct', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler = $view->new_display('page', 'Pagina', 'page_1');
  $handler->override_option('fields', array(
    'field_node_gallery_image_fid' => array(
      'label' => '',
      'alter' => array(
	'alter_text' => 0,
	'text' => '',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'url_plain',
      'multiple' => array(
	'group' => TRUE,
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_node_gallery_image_fid',
      'table' => 'node_data_field_node_gallery_image',
      'field' => 'field_node_gallery_image_fid',
      'override' => array(
	'button' => 'Usa predefinito',
      ),
      'relationship' => 'none',
    ),
    'field_node_gallery_image_fid_1' => array(
      'label' => '',
      'alter' => array(
	'alter_text' => 0,
	'text' => '',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'node-sideways-145x91-thumbnail_url',
      'multiple' => array(
	'group' => TRUE,
	'multiple_number' => '',
	'multiple_from' => '',
	'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_node_gallery_image_fid_1',
      'table' => 'node_data_field_node_gallery_image',
      'field' => 'field_node_gallery_image_fid',
      'override' => array(
	'button' => 'Usa predefinito',
      ),
      'relationship' => 'none',
    ),
    'field_node_gallery_image_data' => array(
      'label' => '',
      'alter' => array(
	'alter_text' => 0,
	'text' => '',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'data_key' => 'title',
      'exclude' => 1,
      'id' => 'field_node_gallery_image_data',
      'table' => 'node_data_field_node_gallery_image',
      'field' => 'field_node_gallery_image_data',
      'override' => array(
	'button' => 'Usa predefinito',
      ),
      'relationship' => 'none',
    ),
    'field_node_gallery_image_data_1' => array(
      'label' => '',
      'alter' => array(
	'alter_text' => 0,
	'text' => '',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'data_key' => 'alt',
      'exclude' => 1,
      'id' => 'field_node_gallery_image_data_1',
      'table' => 'node_data_field_node_gallery_image',
      'field' => 'field_node_gallery_image_data',
      'override' => array(
	'button' => 'Usa predefinito',
      ),
      'relationship' => 'none',
    ),
    'nothing' => array(
      'label' => '',
      'alter' => array(
	'text' => '<a href="[field_node_gallery_image_fid] " class="thumb_link"><span class="selected"></span><img src="[field_node_gallery_image_fid_1]" title="[field_node_gallery_image_data]" alt="[field_node_gallery_image_data_1]" class="thumb" /></a>
  ',
	'make_link' => 0,
	'path' => '',
	'absolute' => 0,
	'link_class' => '',
	'alt' => '',
	'rel' => '',
	'prefix' => '',
	'suffix' => '',
	'target' => '',
	'help' => '',
	'trim' => 0,
	'max_length' => '',
	'word_boundary' => 1,
	'ellipsis' => 1,
	'html' => 0,
	'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'override' => array(
	'button' => 'Usa predefinito',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Titolo vista');
  $handler->override_option('header', '<h1>SIDE<span class="lightgrey">WAYS</span> <br /><span class="light"><span class="grey"><span class="s36">JQUERY FULLSCREEN IMAGE GALLERY</span></span></span></h1>
			<p>A simple, yet elegant fullscreen image gallery created with the jQuery framework and some simple CSS. <a href="http://manos.malihu.gr/sideways-jquery-fullscreen-image-gallery" target="_blank">Full post and download files.</a></p>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 1);
  $handler->override_option('footer', '<p>Created by <a href="http://manos.malihu.gr" target="_blank">malihu</a> and his cats on a hot summer day.</p>');
  $handler->override_option('footer_format', '2');
  $handler->override_option('footer_empty', 1);
  $handler->override_option('style_plugin', 'sideways');
  $handler->override_option('style_options', array(
    'bgAutoColor' => 1,
    'sbEffect' => 'easeInOutExpo',
  ));
  $handler->override_option('row_plugin', 'unformatted');
  $handler->override_option('row_options', array());
  $handler->override_option('path', 'sideways');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  //
  $views[$view->name] = $view;
  return $views;
}