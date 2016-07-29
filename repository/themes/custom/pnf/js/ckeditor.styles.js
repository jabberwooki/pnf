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
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#046a38','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#046a38'}},
        {name: 'Paragraphe taupe', element: 'p', styles: {'color': '#7a7c73'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#e04e39'}},
        {name: 'Paragraphe vert clair', element: 'p', styles: {'color': '#658d1b'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#046a38'}},
        {name: 'Titre 3 - taupe', element: 'h3', styles: {'color': '#7a7c73'}},
        {name: 'Titre 3 - orange', element: 'h3', styles: {'color': '#e04e39'}},

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
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#00965e','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe vert foncé', element: 'p', styles: {'color': '#00965e'}},
        {name: 'Paragraphe vert clair', element: 'p', styles: {'color': '#78be20'}},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#003da5'}},
        {name: 'Titre 3 - vert foncé', element: 'h3', styles: {'color': '#00965e'}},
        {name: 'Titre 3 - vert', element: 'h3', styles: {'color': '#78be20'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#003da5'}},

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
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#a1c339'}},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#298fc2'}},
        {name: 'Paragraphe rouge', element: 'p', styles: {'color': '#9e2a2b'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#f1b434'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#298fc2'}},
        {name: 'Titre 3 - rouge', element: 'h3', styles: {'color': '#9e2a2b'}},
        {name: 'Titre 3 - orange', element: 'h3', styles: {'color': '#f1b434'}},

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
        {name : 'Chapeau' , element: 'div', attributes: {'class': 'intro'}, styles: {'color': '#007dba','font-style': 'italic' }},
        {name: 'Bouton', element: 'div', attributes: {'class': 'boutonok'}, styles: {'color': '#fff'}},
        {name: 'Titre 3', element: 'h3'},
        {name: 'Titre 4', element: 'h4'},
        {name: 'Titre 5', element: 'h5'},
        {name: 'Paragraphe bleu', element: 'p', styles: {'color': '#007dba'}},
        {name: 'Paragraphe violet', element: 'p', styles: {'color': '#840b55'}},
        {name: 'Paragraphe orange', element: 'p', styles: {'color': '#e87722'}},
        {name: 'Paragraphe vert', element: 'p', styles: {'color': '#97d700'}},
        {name: 'Titre 3 - bleu', element: 'h3', styles: {'color': '#007dba'}},
        {name: 'Titre 3 - violet', element: 'h3', styles: {'color': '#840b55'}},
        {name: 'Titre 3 - orange', element: 'h3', styles: {'color': '#e87722'}},

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
