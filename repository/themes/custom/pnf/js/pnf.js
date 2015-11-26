(function($) {
  $(document).ready(function() {

    // Temporary solution for the dropdowns menus
    $('#block-menu-menu-menu-park, #block-menu-menu-national-parks').addClass('dropdown');
    $('#block-menu-menu-menu-park ul li ul, #block-menu-menu-national-parks ul li ul').addClass('dropdown-menu');

    // Position the mega menu
    positionMegaMenuDropDown();
    $( window ).resize( positionMegaMenuDropDown );

    // Remove data-toggle attribute from first level item link to make it clickable
    // in current park and all parks menus.
    // (JQuery adaptation of a solution proposed by gaslamp in the following post :
    // https://www.gaslampmedia.com/clickable-parent-menu-items-with-roots-theme-and-twitter-bootstrap/)
    $('#block-menu-menu-menu-park ul li.first a').removeAttr( "data-toggle" );
    $('#block-menu-menu-national-parks ul li.first a').removeAttr( "data-toggle" );

    // Match Height for teasers of news and agenda
    $('.view-news .view-mode-teaser_home, .view-news .view-mode-teaser').matchHeight('options');
    //$('.view-news .view-mode-teaser_home .field-name-body p, .view-news .view-mode-teaser .field-name-body p').matchHeight('options');
    $('.view-news .view-mode-teaser_home .field-name-title h3, .view-news .view-mode-teaser .field-name-title h3').matchHeight('options');
    
    $('.page-agenda .view-mode-teaser').matchHeight('options');
    $('.page-agenda .view-mode-teaser h3').matchHeight('options');

    $('.view-multimedia .multimedia-teaser').matchHeight('options');
    $('.view-multimedia .multimedia-teaser h3').matchHeight('options');

    /* Resumes image overlay */
    setParagraphSize();

    $( window ).resize( setParagraphSize );

    $('.group-resume p').hide();
    
    $('.group-resume').mouseenter(function() {
      $('p', this).slideDown('fast');
    });

    $('.group-resume').mouseleave(function() {
      $('p', this).slideUp('slow');
    });

  /* Resumes p link to node */
    $('.group-resume').click(function(event) {
      var link = $('a',this).attr('href');
      //console.log(link);
      window.location = link;
    });

  /* DEF Function setParagraphSize */
    function setParagraphSize() {
      var imgHeight = $('.group-resume img').height() - 20;
      var imgWidth = $('.group-resume img').width() - 20;
      //console.log(imgHeight);
      //console.log(imgWidth);
      $('.group-resume p').height(imgHeight);
      $('.group-resume p').width(imgWidth);
    }

  /* DEF Function positionMegaMenuDropDown */
    function positionMegaMenuDropDown() {
      $('.mega-dropdown-menu').width($(window).width());
      var offset = $('ul.tb-megamenu-nav').offset();
      //console.log(offset.left);
      $('.mega-dropdown-menu').css({ "margin-left": - offset.left});
    }

 }); // End of document ready

})(jQuery); // EOF