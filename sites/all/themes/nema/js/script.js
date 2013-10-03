/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    //REMOVE TEXT FROM SOCIAL NAV
    $(document).ready(function(){
    	$('.sf-menu-social-nav a').empty();
    });

    // FORM ON FOCUS//
	var active_color = '#363636'; // Colour of user provided text
	var inactive_color = '#363636'; // Colour of default text

	jQuery(document).ready(function() {
	  jQuery("input.form-text").css("color", inactive_color);
	  var default_values = new Array();
	  jQuery("input.form-text").focus(function() {
	    if (!default_values[this.id]) {
	      default_values[this.id] = this.value;
	    }
	    if (this.value == default_values[this.id]) {
	      this.value = '';
	      this.style.color = active_color;
	    }
	    jQuery(this).blur(function() {
	      if (this.value == '') {
	        this.style.color = inactive_color;
	        this.value = default_values[this.id];
	      }
	    });
	  });
	});

	jQuery(document).ready(function() {
	  jQuery("textarea.form-textarea").css("color", inactive_color);
	  var default_values = new Array();
	  jQuery("textarea.form-textarea").focus(function() {
	    if (!default_values[this.id]) {
	      default_values[this.id] = this.value;
	    }
	    if (this.value == default_values[this.id]) {
	      this.value = '';
	      this.style.color = active_color;
	    }
	    jQuery(this).blur(function() {
	      if (this.value == '') {
	        this.style.color = inactive_color;
	        this.value = default_values[this.id];
	      }
	    });
	  });
	}); 

  }
};


})(jQuery, Drupal, this, this.document);
