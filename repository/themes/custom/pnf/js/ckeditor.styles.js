/*
For PNF
 */

var parkCode = Drupal.settings.kcore.park_code;

if (typeof(CKEDITOR) !== 'undefined') {
  if (parkCode == 'pnc') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#ed8b00','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe bleu foncé', element: 'p', styles: {'color': '#8e9fbc'}},
        {name: 'Paragraphe bleu clair', element: 'p', styles: {'color': '#d5dae3'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#ed8b00'}},
        {name: 'Paragraphe marron', element: 'p', styles: {'color': '#b86125'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#8e9fbc'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#c4d600'}},
        {name: 'Titre 3 - marron', element: 'h3', styles: {'color': '#b86125'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pnf') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#992067','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe bleu foncé', element: 'p', styles: {'color': '#8e9fbc'}},
        {name: 'Paragraphe bleu clair', element: 'p', styles: {'color': '#d5dae3'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#ed8b00'}},
        {name: 'Paragraphe marron', element: 'p', styles: {'color': '#b86125'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#8e9fbc'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#c4d600'}},
        {name: 'Titre 3 - marron', element: 'h3', styles: {'color': '#b86125'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'png') {console.log('dans png');
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#e10098','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe rose', element: 'p', styles: {'color': '#e10098'}},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#00b0b9'}},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#97D700'}},
        {name: 'Paragraphe rose foncé', element: 'p', styles: {'color': '#9b3259'}},
        {name: 'Titre 3 - rose', element: 'h3', styles: {'color': '#e10098'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#00b0b9'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#97D700'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pnv') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#001489','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe bleu foncé', element: 'p', styles: {'color': '#001489'}},
        {name: 'Paragraphe bleu clair', element: 'p', styles: {'color': '#99D6EA'}},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#78BE20'}},
        {name: 'Paragraphe marron', element: 'p', styles: {'color': '#b86125'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#001489'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#78BE20'}},
        {name: 'Titre 3 - marron', element: 'h3', styles: {'color': '#A1561C'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pnrun') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Titre 3 - vert', element: 'h3', attributes: {'class': 'cke-h3 cke-green1'}},
        {name: 'Titre 3 - taupe', element: 'h3', attributes: {'class': 'cke-h3 cke-taupe1'}},
        {name: 'Titre 3 - orange', element: 'h3', attributes: {'class': 'cke-h3 cke-orange1'}},
        {name: 'Paragraphe vert', element: 'p', attributes: {'class': 'cke-p cke-green1'}},
        {name: 'Paragraphe taupe', element: 'p', attributes: {'class': 'cke-p cke-taupe1'}},
        {name: 'Paragraphe orange', element: 'p', attributes: {'class': 'cke-p cke-orange1'}},
        {name: 'Paragraphe vert clair', element: 'p', attributes: {'class': 'cke-p cke-green2'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pnm') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#43b02a','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#43b02a'}},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#2b9bb1'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#c05131'}},
        {name: 'Paragraphe vert clair', element: 'p', styles: {'color': '#c4d600'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#43b02a'}},
        {name: 'Titre 3 - bleu turquoise', element: 'h3', styles: {'color': '#2b9bb1'}},
        {name: 'Titre 3 - orange', element: 'h3', styles: {'color': '#c05131'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pnp') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Titre 3 - vert', element: 'h3', attributes: {'class': 'cke-h3 cke-green1'}},
        {name: 'Titre 4 - vert', element: 'h4', attributes: {'class': 'cke-h4 cke-green1'}},
        {name: 'Titre 4 - noir', element: 'h4', attributes: {'class': 'cke-h4 cke-black'}},
        {name: 'Paragraphe vert foncé', element: 'p', attributes: {'class': 'cke-p cke-green1'}},
        {name: 'Paragraphe vert clair', element: 'p', attributes: {'class': 'cke-p cke-green2'}},
        {name: 'Paragraphe bleu', element: 'p', attributes: {'class': 'cke-p cke-blue1'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'fcb') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#92b134','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#298fc2'}},
        {name: 'Titre 3 - rouge', element: 'h3', styles: {'color': '#9e2a2b'}},
        {name: 'Titre 3 - orange', element: 'h3', styles: {'color': '#f1b434'}},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#a1c339'}},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#298fc2'}},
        {name: 'Paragraphe rouge', element: 'p', styles: {'color': '#9e2a2b'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#f1b434'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pncal') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Titre 3 - bleu', element: 'h3', attributes : {'class': 'cke-h3 cke-blue1'}},
        {name: 'Titre 3 - violet', element: 'h3', attributes : {'class': 'cke-h3 cke-purple1'}},
        {name: 'Titre 3 - orange', element: 'h3', attributes : {'class': 'cke-h3 cke-orange1'}},
        {name: 'Paragraphe bleu', element: 'p', attributes : {'class': 'cke-p cke-blue1'}},
        {name: 'Paragraphe violet', element: 'p', attributes : {'class': 'cke-p cke-purple1'}},
        {name: 'Paragraphe orange', element: 'p', attributes : {'class': 'cke-p cke-orange1'}},
        {name: 'Paragraphe vert', element: 'p', attributes : {'class': 'cke-p cke-green1'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else if (parkCode == 'pag') {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Titre 3 - rouge', element: 'h3', attributes : {'class': 'cke-h3 cke-red1'}},
        {name: 'Titre 3 - jaune', element: 'h3', attributes : {'class': 'cke-h3 cke-yellow1'}},
        {name: 'Titre 3 - bleu', element: 'h3', attributes : {'class': 'cke-h3 cke-blue1'}},
        {name: 'Titre 4 - gris foncé', element: 'h3', attributes : {'class': 'cke-h4 cke-dark-grey1'}},
        {name: 'Paragraphe rouge', element: 'p', attributes : {'class': 'cke-p cke-red1'}},
        {name: 'Paragraphe jaune', element: 'p', attributes : {'class': 'cke-p cke-yellow1'}},
        {name: 'Paragraphe bleu', element: 'p', attributes : {'class': 'cke-p cke-blue1'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
  else {
    CKEDITOR.addStylesSet('drupal',
      [
        /* Block Styles */
        // These styles are already available in the "Format" drop-down list, so they are
        // not needed here by default. You may enable them to avoid placing the
        // "Format" drop-down list in the toolbar, maintaining the same features.
        {name: 'Paragraphe', element: 'p'},
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#aaaaaa','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe bleu foncé', element: 'p', styles: {'color': '#8e9fbc'}},
        {name: 'Paragraphe bleu clair', element: 'p', styles: {'color': '#d5dae3'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#ed8b00'}},
        {name: 'Paragraphe marron', element: 'p', styles: {'color': '#b86125'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#8e9fbc'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#c4d600'}},
        {name: 'Titre 3 - marron', element: 'h3', styles: {'color': '#b86125'}},

        /* Object Styles */
        {
          name: 'Image on Left',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-right: 5px', 'border': '2', 'align': 'left'}
        },
        {
          name: 'Image on Right',
          element: 'img',
          attributes: {'style': 'padding: 5px; margin-left: 5px', 'border': '2', 'align': 'right'}
        }
      ]
    );
  }
}
