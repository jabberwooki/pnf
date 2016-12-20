<?php
/**
 * @file
 * kcore.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function kcore_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Les parcs nationaux de France',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '19887e85-1916-4d3f-8919-b562fb3074a4',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'fr',
  'created' => 1446738254,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '63926957-1118-4a4e-a72a-ba949a5f9e0f',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="intro" style="color:#ed8b00;font-style:italic;">Les 10 parcs nationaux français participent de l’identité culturelle de la Nation au même titre que les équipements culturels les plus prestigieux. Ils jouissent auprès de tous les publics d’une valeur symbolique très forte.</div>

<p>Reconnus au niveau international comme des territoires d’exception, ils offrent une combinaison d’espaces terrestres et maritimes remarquables et un mode de gouvernance et de gestion qui leur permettent d’en préserver les richesses.</p>

<p>En France, il existe en 2016 dix parcs nationaux : Vanoise (1963), Port-Cros (1963), Pyrénées (1967), Cévennes (1970), Ecrins (1973), Mercantour (1979), Guadeloupe (1989), La Réunion (2007), la Guyane (2007) et les Calanques (2012).</p>

<p>Les parcs nationaux couvrent des domaines terrestres et maritimes variés et représentent par leurs périmètres maximum près de 54 000 km² soit&nbsp;8% du territoire français&nbsp;(métropole + DOM). Ils attirent chaque année plus de 8,5 millions de visiteurs.</p>

<p><img alt="Les parcs nationaux en France" class="img-responsive" src="/sites/all/common-files/images/carte_france_pnx_2016.jpg" usemap="#Map" /></p>

<p><map id="Map" name="Map"><area alt="Parcs nationaux de France" coords="462,400,544,419" href="http://www.parcsnationaux.fr/" shape="rect" target="_blank" title="Parcs nationaux de France" /><area alt="Parc national des Cévennes" coords="425,346,529,392" href="http://www.cevennes-parcnational.fr/" shape="rect" target="_blank" title="Parc national des Cévennes" /> <area alt="Parc national de la Guadeloupe" coords="9,156,206,296" href="http://www.guadeloupe-parcnational.fr/" shape="rect" target="_blank" title="Parc national de la Guadeloupe" /> <area alt="Parc national de La Réunion" coords="30,12,228,146" href="http://www.reunion-parcnational.fr/" shape="rect" target="_blank" title="Parc national de La Réunion" /> <area alt="Parc amazonien de Guyane" coords="24,445,25,444,40,356,88,330,123,330,175,349,193,386,138,467,47,466" href="http://www.parc-amazonien-guyane.fr/" shape="poly" target="_blank" title="Parc amazonien de Guyane" /> <area alt="Parc national des Pyrénées" coords="330,416,429,458" href="http://www.parc-pyrenees.com/" shape="rect" target="_blank" title="Parc national des Pyrénées" /> <area alt="Parc national des Calanques" coords="510,441,539,435,567,411,589,417,585,444,530,452" href="http://www.calanques-parcnational.fr/" shape="poly" target="_blank" title="Parc national des Calanques" /> <area alt="Parc national de Port-Cros" coords="591,423,592,445,629,457,667,454,657,436,623,424" href="http://www.portcrosparcnational.fr/" shape="poly" target="_blank" title="Parc national de Port-Cros" /> <area alt="Parc national du Mercantour" coords="607,367,622,352,696,354,693,375,650,394" href="http://www.mercantour.eu/" shape="poly" target="_blank" title="Parc national du Mercantour" /> <area alt="Parc national des Ecrins" coords="549,327,589,318,610,323,617,343,607,362,553,344" href="http://www.ecrins-parcnational.fr/" shape="poly" target="_blank" title="Parc national des Ecrins" /> <area alt="Parc national de la Vanoise" coords="604,308,621,288,679,295,630,320,622,321,607,316" href="http://www.vanoise-parcnational.fr/" shape="poly" target="_blank" title="Parc national de la Vanoise" /> <area alt="GIP du futur Parc national des Forêts de Champagne et Bourgogne" coords="458,163,557,192" href="http://www.forets-champagne-bourgogne.fr/" shape="rect" target="_blank" title="GIP du futur Parc national des Forêts de Champagne et Bourgogne" /></map></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="intro" style="color:#ed8b00;font-style:italic;">Les 10 parcs nationaux français participent de l’identité culturelle de la Nation au même titre que les équipements culturels les plus prestigieux. Ils jouissent auprès de tous les publics d’une valeur symbolique très forte.</div>
<p>Reconnus au niveau international comme des territoires d’exception, ils offrent une combinaison d’espaces terrestres et maritimes remarquables et un mode de gouvernance et de gestion qui leur permettent d’en préserver les richesses.</p>
<p>En France, il existe en 2016 dix parcs nationaux : Vanoise (1963), Port-Cros (1963), Pyrénées (1967), Cévennes (1970), Ecrins (1973), Mercantour (1979), Guadeloupe (1989), La Réunion (2007), la Guyane (2007) et les Calanques (2012).</p>
<p>Les parcs nationaux couvrent des domaines terrestres et maritimes variés et représentent par leurs périmètres maximum près de 54 000 km² soit 8% du territoire français (métropole + DOM). Ils attirent chaque année plus de 8,5 millions de visiteurs.</p>
<p><img alt="Les parcs nationaux en France" class="img-responsive" src="/sites/all/common-files/images/carte_france_pnx_2016.jpg" usemap="#Map" /></p>
<p><map id="Map" name="Map"><area alt="Parcs nationaux de France" coords="462,400,544,419" href="http://www.parcsnationaux.fr/" shape="rect" target="_blank" title="Parcs nationaux de France" /><area alt="Parc national des Cévennes" coords="425,346,529,392" href="http://www.cevennes-parcnational.fr/" shape="rect" target="_blank" title="Parc national des Cévennes" /><area alt="Parc national de la Guadeloupe" coords="9,156,206,296" href="http://www.guadeloupe-parcnational.fr/" shape="rect" target="_blank" title="Parc national de la Guadeloupe" /><area alt="Parc national de La Réunion" coords="30,12,228,146" href="http://www.reunion-parcnational.fr/" shape="rect" target="_blank" title="Parc national de La Réunion" /><area alt="Parc amazonien de Guyane" coords="24,445,25,444,40,356,88,330,123,330,175,349,193,386,138,467,47,466" href="http://www.parc-amazonien-guyane.fr/" shape="poly" target="_blank" title="Parc amazonien de Guyane" /><area alt="Parc national des Pyrénées" coords="330,416,429,458" href="http://www.parc-pyrenees.com/" shape="rect" target="_blank" title="Parc national des Pyrénées" /><area alt="Parc national des Calanques" coords="510,441,539,435,567,411,589,417,585,444,530,452" href="http://www.calanques-parcnational.fr/" shape="poly" target="_blank" title="Parc national des Calanques" /><area alt="Parc national de Port-Cros" coords="591,423,592,445,629,457,667,454,657,436,623,424" href="http://www.portcrosparcnational.fr/" shape="poly" target="_blank" title="Parc national de Port-Cros" /><area alt="Parc national du Mercantour" coords="607,367,622,352,696,354,693,375,650,394" href="http://www.mercantour.eu/" shape="poly" target="_blank" title="Parc national du Mercantour" /><area alt="Parc national des Ecrins" coords="549,327,589,318,610,323,617,343,607,362,553,344" href="http://www.ecrins-parcnational.fr/" shape="poly" target="_blank" title="Parc national des Ecrins" /><area alt="Parc national de la Vanoise" coords="604,308,621,288,679,295,630,320,622,321,607,316" href="http://www.vanoise-parcnational.fr/" shape="poly" target="_blank" title="Parc national de la Vanoise" /><area alt="GIP du futur Parc national des Forêts de Champagne et Bourgogne" coords="458,163,557,192" href="http://www.forets-champagne-bourgogne.fr/" shape="rect" target="_blank" title="GIP du futur Parc national des Forêts de Champagne et Bourgogne" /></map></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'name' => 'superadmin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;}',
  'print_html_display' => 1,
  'print_html_display_comment' => 0,
  'print_html_display_urllist' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-11-05 16:44:14 +0100',
);
  return $nodes;
}
