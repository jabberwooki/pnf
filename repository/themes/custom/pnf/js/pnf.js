(function($) {
  $(document).ready(function() {

	$('.view-news .view-mode-teaser_home, .view-news .view-mode-teaser').matchHeight('options');
	$('.view-news .view-mode-teaser_home .field-name-body p, .view-news .view-mode-teaser .field-name-body p').matchHeight('options');
	$('.view-news .view-mode-teaser_home .field-name-title h3, .view-news .view-mode-teaser .field-name-title h3').matchHeight('options');

  $('.page-agenda .view-mode-teaser').matchHeight('options');
  $('.page-agenda .view-mode-teaser h3').matchHeight('options');

    positionMegaMenuDropDown();

	$( window ).resize( positionMegaMenuDropDown );

// DEF Function positionMegaMenuDropDown
    function positionMegaMenuDropDown() {
    	$('.mega-dropdown-menu').width($(window).width());
   		var offset = $('ul.tb-megamenu-nav').offset();
    	//console.log(offset.left);
    	$('.mega-dropdown-menu').css({ "margin-left": - offset.left});
    }

    // Remove data-toggle attribute from first level item link to make it clickable
    // in current park and all parks menus.
    // (JQuery adaptation of a solution proposed by gaslamp in the following post :
    // https://www.gaslampmedia.com/clickable-parent-menu-items-with-roots-theme-and-twitter-bootstrap/)
    $('#block-menu-menu-menu-park ul li.first a').removeAttr( "data-toggle" );
    $('#block-menu-menu-national-parks ul li.first a').removeAttr( "data-toggle" );

 });
})(jQuery);