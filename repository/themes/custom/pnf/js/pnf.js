(function($) {
  // Call to $(document).ready() replaced by call to $(window).load().
  // Why ?
  // $(document).ready() executes when HTML-Document is loaded and DOM is ready.
  // $(window).load() executes when complete page is fully loaded, including all frames, objects and images.
  //
  // So using the first function gave a toolbar div's width value of X,
  // then a value of Y (Y always larger than X) on page reload,
  // whereas the second on gives the same value Y on first load and after page reload.

  // $(document).ready(function() {
  $(window).load(function() {
    // Matchmedia
    if (window.matchMedia("(min-width: 768px)").matches) {
      /* La largeur minimum de l'affichage est 768 px inclus */
      // Temporary solution for the dropdowns menus
      $('#block-menu-menu-menu-park, #block-menu-menu-national-parks').addClass('dropdown');
      $('#block-menu-menu-menu-park ul li ul, #block-menu-menu-national-parks ul li ul').addClass('dropdown-menu');
    }
    else {
      /* L'affichage est inférieur à 768px de large */
    }

    /* Search Form */
    // $('#block-custom-search-blocks-1 .search-form input.form-control').hide();
    //
    // $('#block-custom-search-blocks-1 .search-form').mouseenter(function() {
    //   $('input.form-control', this).show('fast');
    // });
    //
    // $('#block-custom-search-blocks-1 .search-form').mouseleave(function() {
    //   $('input.form-control', this).hide('slow');
    // });
    $("#block-custom-search-blocks-1").hide();
    $(".search-magnifier p").click(function () {
      $("#block-custom-search-blocks-1").show();
      $('#edit-custom-search-blocks-form-1--2').focus();

    });
    $("#block-custom-search-blocks-1").on("mouseleave", function () {
      setTimeout(function () {$("#block-custom-search-blocks-1").hide()}, 700);
    });

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
    $('.page-agenda .view-mode-teaser .field-name-field-event-location').matchHeight();

    $('.view-multimedia .multimedia-teaser').matchHeight('options');
    $('.view-multimedia .multimedia-teaser h3').matchHeight('options');

    /* Toolbar Menu*/
    // L'instruction suivante est supprimée.
    // La balise <span> est rajoutée aux items de menu non plus via jQuery après affichage
    // mais avant affichage dans le hook pnf_menu_link__menu_tools() dans le fichier template.php.
    // $('#block-menu-menu-tools ul li a').wrapInner('<span></span>');

    //----------------- Lignes rajoutées par CE ------------------------------------------------------------------------
    // 1 - On fait d'abord des calculs.
    // 1.1 - Calcul de la largeur du menu Toolbar.
    var toolbarWidth = $('#block-menu-menu-tools').width();
    
    // 1.2 - Le menu Toolbar étant positionnée complètement hors de l'écran à droite via css (voir fichier header.less),
    // il faut calculer la valeur à donner à 'right' pour la faire réapparaitre de 50px
    // et ainsi voir juste les pictos.
    var rightValue = '-' + (toolbarWidth -50) + 'px';

    // 2 - Maintenant, on fait apparaitre les pictos
    var toolbar = $('#block-menu-menu-tools');
    toolbar.css({"right": rightValue });

    // // 3 - Puis on prépare les styles css à appliquer.
    // 3.1 - Styles à appliquer pour voir le menu Toolbar ouvert, avec transition css3.
    var toolbarOpenStyles = {
      right: "0",
      WebkitTransition: "right 0.4s ease",
      MozTransition: "right 0.4s ease",
      MsTransition: "right 0.4s ease",
      OTransition: "right 0.4s ease",
      transition: "right 0.4s ease"
    }
    // // 3.2 - Styles à appliquer pour voir le menu Toolbar fermé.
    var toolbarClosedStyles = {
      right: rightValue
    }

    // 4 - Mécanismes d'ouverture/fermeture du menu Toolbar.
    // 4.1 - Lorsque la souris entre dans la barre d'outils
    toolbar.mouseenter(function () {
      $(this).css(toolbarOpenStyles);
    });

    // 4.2 - Lorsque la souris sort de la barre d'outils.
    toolbar.mouseleave(function () {
      $(this).css(toolbarClosedStyles);
    })
    //----------------- Fin des lignes rajoutées par CE ----------------------------------------------------------------

    // Match height on landing pages thumbnails.
    $('.block-child-menu-items .col .cmi-wrapper').matchHeight('options');

    // Hugly hack to fix <p> positioning within news image overlay in news list and block.
    $(".node-news .group-resume .field-name-body").each(function() {
      //console.log($(this).html());
      var text = '';
      $(this).find('p').each(function() {
        // console.log($(this).text());
        text += ' ' + $(this).text();
      });
      $(this).find('.field-item').html("<p>" + text + "</p>");
    });


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

    /*RAA accordion*/
    $( ".view-raa .view-content" ).accordion({
      collapsible: true,
      heightStyle: "content",
      active: false
    });

    /* Mobile version : Positionning and behavior of top menus */
    if (window.matchMedia("(max-width: 767px)").matches) {
      var deviceWidth = $(window).width();
      var mostLeftPadding = parseInt($(".pnf_topmenu .container div").css("padding-left"));
      var secondLeftPadding = parseInt($("#block-menu-menu-menu-park").css("width"));
      var thirdLeftPadding = parseInt($("#block-menu-menu-tools").css("width"));
      //console.log(mostLeftPadding);

      /* Menu du parc */
      $("#block-menu-menu-menu-park button").click(function() {
        var offset1 = $("#block-menu-menu-menu-park").offset();
        //console.log(offset1);
        $("#navbar-collapse-park").css("left", -offset1.left + mostLeftPadding);
        $("#navbar-collapse-park").css("padding", 0);
        $("#navbar-collapse-park").css("width", deviceWidth);
      });

      /* Les parcs nationaux */
      $("#block-menu-menu-national-parks button").click(function() {
        var offset2 = $("#block-menu-menu-national-parks").offset();
        //console.log(offset2.left);
        //console.log(secondLeftPadding);
        $("#navbar-collapse-parks").css("left", -offset2.left + mostLeftPadding + secondLeftPadding +10);
        $("#navbar-collapse-parks").css("padding", 0);
        $("#navbar-collapse-parks").css("width", deviceWidth);
      });

      /* Barre d'outils */
      $("#block-menu-menu-tools button").click(function() {
        var offset3 = $("#block-menu-menu-tools").offset();
        $("#navbar-collapse-tools").css("left", -offset3.left + mostLeftPadding + secondLeftPadding + thirdLeftPadding +18);
        $("#navbar-collapse-tools").css("padding", 0);
        $("#navbar-collapse-tools").css("width", deviceWidth);
      });
    }

    // Bug fixing : Inner <a> anchors don't work in Chrome.
    // <a> tag replaced by <span> tag, disguised in pseudo HTML link.
    // A click on the <span> tag scrolls window to the target position.
    var rank = 1;
    $(".pn-anchor").each(function() {
      var targetHref = $(this).attr("href");
      var targetPosition = $(targetHref).offset();
      var linkText = $(this).text();
      var color = $(this).css("color");
      $(this).replaceWith('<span id="altered-link-' + rank + '">' + linkText + '</p>');
      var newThis = $("#altered-link-" + rank);
      newThis.css("color", color);
      newThis.hover(function () {
        $(this).css('cursor','pointer');
      });
      newThis.click(function () {
        window.scrollTo(0,targetPosition.top);
      });
      rank++;
    });

    // Hugly hack to fix Menu du park bad display jqu Menu Field contrib module activation.
    $("#block-menu-menu-menu-park ul.menu > li").removeClass("collapsed");
    $("#block-menu-menu-menu-park ul.menu > li").addClass("expanded");
  }); // End of document ready
})(jQuery); // EOF
