<?php
/**
 * @file
 * pnf_front_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pnf_front_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'button_festival_nature';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'PNC : Bouton Festival Nature';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="http://destination.cevennes-parcnational.fr/#/?categories=E" target="_blank"><img alt="" src="/profiles/pnf/themes/custom/pnf/images/bouton-festival-nature.gif" style="width: 257px; height: 65px;" /></a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['button_festival_nature'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pnf_intro_home';
  $box->plugin_key = 'simple';
  $box->title = 'Parcs nationaux de France';
  $box->description = 'PNF : Bloc intro accueil PNF';
  $box->options = array(
    'body' => array(
      'value' => '<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:16px"><strong>La France compte 10 parcs nationaux sur son territoire dont 3 en outre-mer.</strong></span><br />
<span style="font-size:14px">Chacun constitue un espace rassemblant un patrimoine naturel, culturel et paysager d\'exception.</span></span></p>

<p><span style="font-family:arial,helvetica,sans-serif; font-size:14px">L\'établissement public Parcs nationaux de France a été créé suite à la loi du 14 avril 2006 relative aux parcs nationaux.</span><br />
<span style="font-size:14px"><span style="font-family:arial,helvetica,sans-serif"><strong>Il a vocation à créer du lien entre les parcs nationaux pour renforcer leur culture commune, en préservant le caractère de chacun</strong>. Il contribue également à l\'amélioration de la qualité de leur gestion, en apportant son concours technique et administratif. Grâce à sa politique de communication, il contribue à leur notoriété aux niveaux national et international.</span></span></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['pnf_intro_home'] = $box;

  return $export;
}
