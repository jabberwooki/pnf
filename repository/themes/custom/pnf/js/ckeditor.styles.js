/*
For PNF
 */

if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
    [
            /* Block Styles */

            // These styles are already available in the "Format" drop-down list, so they are
            // not needed here by default. You may enable them to avoid placing the
            // "Format" drop-down list in the toolbar, maintaining the same features.
           
            { name : 'Paragraphe'		, element : 'p' },
            { name : 'Intro'            , element : 'div', attributes : { 'class' : 'intro'}, styles : { 'color' : '#ed8b00','font-style' : 'italic' } },
            { name : 'Titre 3'  		, element : 'h3' },
            { name : 'Titre 4'		    , element : 'h4' },
            { name : 'Titre 5'		    , element : 'h5' },
            { name : 'Preformatted Text', element : 'pre' },
            { name : 'Address'			, element : 'address' },
            

            { name : 'Titre 3 - bleu'		, element : 'h3', styles : { 'color' : '#8e9fbc' } },
            { name : 'Titre 3 - vert'       , element : 'h3', styles : { 'color' : '#c4d600' } },
            { name : 'Titre 3 - marron'     , element : 'h3', styles : { 'color' : '#b86125' } },



            /* Object Styles */

            {
                    name : 'Image on Left',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-right: 5px',
                            'border' : '2',
                            'align' : 'left'
                    }
            },

            {
                    name : 'Image on Right',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-left: 5px',
                            'border' : '2',
                            'align' : 'right'
                    }
            }
    ]);
}