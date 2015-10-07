(function($) {
  $(document).ready(function() {

	$('.view-news .view-mode-teaser_home, .view-news .view-mode-teaser').matchHeight('options');
	$('.view-news .view-mode-teaser_home .field-name-body p, .view-news .view-mode-teaser .field-name-body p').matchHeight('options');
	$('.view-news .view-mode-teaser_home .field-name-title h3, .view-news .view-mode-teaser .field-name-title h3').matchHeight('options');


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