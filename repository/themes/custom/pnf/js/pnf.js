(function($) {
  $(document).ready(function() {

	$('.view-mode-teaser_home').matchHeight('options');
	$('.view-mode-teaser_home .field-name-body p').matchHeight('options');
	$('.view-mode-teaser_home .field-name-title h3').matchHeight('options');


    positionMegaMenuDropDown();

	$( window ).resize( positionMegaMenuDropDown );

// DEF Function positionMegaMenuDropDown
    function positionMegaMenuDropDown() {
    	$('.mega-dropdown-menu').width($(window).width());
   		var offset = $('ul.tb-megamenu-nav').offset();
    	//console.log(offset.left);
    	$('.mega-dropdown-menu').css({ "margin-left": - offset.left});
    }

 });
})(jQuery);