# drupal-views-sideways-plugin
Drupal 6 Views Style plugin that displays results using the [Sideways](http://manos.malihu.gr/sideways-jquery-fullscreen-image-gallery/) plugin for JQuery.

[DEMO](https://www.quovadiscom.com/old-site/www.quovadiscom.com/sideways/index.html)

Sideways is a plugin for JQuery created by [Malihu](http://manos.malihu.gr/). 
Sideways uses jQuery 1.6.2. The method "jQuery.noConflict" is used to avoid breaking other scripts on the page.

This module provides a new Style option called "sideways" when choosing the Display Style of the View.

The module should create a new view called "galleria_sideways" (this is actually untested). Note: the tpl template in the module works only if the view is named "galleria_sideways", an implementation of hook_views_default_views() in views_sideways.views_default.inc should provide a default view with correct name, otherwise you need to create the view naming it galleria_sideways.

The "views_sideways" archive contains the module: install as usual, dependencies are "views" and "libraries" modules.

**The "sideways-20022013.tgz" archive contains the adapted implementation of Sideways plugin created by Malihu, must be uncompressed and placed inside the "libraries" folder of Drupal.** The goal is to have the library within this folder "/sites/all/libraries/sideways/" (not tested in multi-site environment). Correct version of JQuery and other scripts are provided by Malihu's plugin.

![galleria_sideways settings](http://www.quovadiscom.com/sites/default/files/galleria_sideways-settings.jpg "galleria_sideways settings") Access to plugin settings page (inside the view) to adjust the options. The module provides an interface to choose the animation effect and an option to tune the color of the background with the image above using html5 canvas. Needless to say, it does not work on IE8, and I think the 9 too etc. ..
Works well in Firefox, Opera, and Chrome.

Sideways module actually does not support 3 events: on start, stop and on load. The files event_init.js, event_slidesLoaded.js, event_completed.js are not used, you should implement by yourself as suggested inside the module.

# NOTE:
this is an old project for Drupal 6 reported here on Github for the convenience of [those who still use D6](https://www.drupal.org/project/usage/drupal), the original page is here [http://www.quovadiscom.com/content/drupal-views-sideways-plugin](http://www.quovadiscom.com/content/drupal-views-sideways-plugin)

