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
