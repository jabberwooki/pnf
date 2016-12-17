<?php
/**
 * @file
 * kcore.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kcore_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-national-parks_agence-franaise-pour-la-biodiversit:http://www.agence-francaise-biodiversite.fr/.
  $menu_links['menu-national-parks_agence-franaise-pour-la-biodiversit:http://www.agence-francaise-biodiversite.fr/'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.agence-francaise-biodiversite.fr/',
    'router_path' => '',
    'link_title' => 'Agence française pour la biodiversité',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-national-parks_agence-franaise-pour-la-biodiversit:http://www.agence-francaise-biodiversite.fr/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_gip-du-futur-parc-national-des-forts-de-champagne-et-bourgogne:http://www.forets-champagne-bourgogne.fr/.
  $menu_links['menu-national-parks_gip-du-futur-parc-national-des-forts-de-champagne-et-bourgogne:http://www.forets-champagne-bourgogne.fr/'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.forets-champagne-bourgogne.fr/',
    'router_path' => '',
    'link_title' => 'GIP du futur Parc national des Forêts de Champagne et Bourgogne',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-national-parks_gip-du-futur-parc-national-des-forts-de-champagne-et-bourgogne:http://www.forets-champagne-bourgogne.fr/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-amazonien-de-guyane:http://www.parc-amazonien-guyane.fr/.
  $menu_links['menu-national-parks_parc-amazonien-de-guyane:http://www.parc-amazonien-guyane.fr/'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.parc-amazonien-guyane.fr/',
    'router_path' => '',
    'link_title' => 'Parc amazonien de Guyane',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-amazonien-de-guyane:http://www.parc-amazonien-guyane.fr/',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-de-la-guadeloupe:http://www.guadeloupe-parcnational.fr.
  $menu_links['menu-national-parks_parc-national-de-la-guadeloupe:http://www.guadeloupe-parcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.guadeloupe-parcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national de la Guadeloupe',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-de-la-guadeloupe:http://www.guadeloupe-parcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-de-la-runion:http://www.reunion-parcnational.fr.
  $menu_links['menu-national-parks_parc-national-de-la-runion:http://www.reunion-parcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.reunion-parcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national de La Réunion',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-de-la-runion:http://www.reunion-parcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-de-la-vanoise:http://www.vanoise-parcnational.fr/.
  $menu_links['menu-national-parks_parc-national-de-la-vanoise:http://www.vanoise-parcnational.fr/'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.vanoise-parcnational.fr/',
    'router_path' => '',
    'link_title' => 'Parc national de la Vanoise',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-de-la-vanoise:http://www.vanoise-parcnational.fr/',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-de-port-cros:http://www.portcrosparcnational.fr.
  $menu_links['menu-national-parks_parc-national-de-port-cros:http://www.portcrosparcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.portcrosparcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national de Port-Cros',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-de-port-cros:http://www.portcrosparcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-des-calanques:http://www.calanques-parcnational.fr.
  $menu_links['menu-national-parks_parc-national-des-calanques:http://www.calanques-parcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.calanques-parcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national des Calanques',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-des-calanques:http://www.calanques-parcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-des-cvennes:http://www.cevennes-parcnational.fr.
  $menu_links['menu-national-parks_parc-national-des-cvennes:http://www.cevennes-parcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.cevennes-parcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national des Cévennes',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-des-cvennes:http://www.cevennes-parcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-des-ecrins:http://www.ecrins-parcnational.fr.
  $menu_links['menu-national-parks_parc-national-des-ecrins:http://www.ecrins-parcnational.fr'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.ecrins-parcnational.fr',
    'router_path' => '',
    'link_title' => 'Parc national des Ecrins',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-des-ecrins:http://www.ecrins-parcnational.fr',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-des-pyrnes:http://www.parc-pyrenees.com.
  $menu_links['menu-national-parks_parc-national-des-pyrnes:http://www.parc-pyrenees.com'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.parc-pyrenees.com',
    'router_path' => '',
    'link_title' => 'Parc national des Pyrénées',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-des-pyrnes:http://www.parc-pyrenees.com',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_parc-national-du-mercantour:http://www.mercantour.eu.
  $menu_links['menu-national-parks_parc-national-du-mercantour:http://www.mercantour.eu'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.mercantour.eu',
    'router_path' => '',
    'link_title' => 'Parc national du Mercantour',
    'options' => array(
      'identifier' => 'menu-national-parks_parc-national-du-mercantour:http://www.mercantour.eu',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );
  // Exported menu link: menu-national-parks_portail-des-parcs-nationaux-de-france:http://www.parcsnationaux.fr/.
  $menu_links['menu-national-parks_portail-des-parcs-nationaux-de-france:http://www.parcsnationaux.fr/'] = array(
    'menu_name' => 'menu-national-parks',
    'link_path' => 'http://www.parcsnationaux.fr/',
    'router_path' => '',
    'link_title' => 'Portail des parcs nationaux de France',
    'options' => array(
      'identifier' => 'menu-national-parks_portail-des-parcs-nationaux-de-france:http://www.parcsnationaux.fr/',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-national-parks_les-parcs-nationaux-de-france:les-parcs-nationaux-en-france',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agence française pour la biodiversité');
  t('GIP du futur Parc national des Forêts de Champagne et Bourgogne');
  t('Parc amazonien de Guyane');
  t('Parc national de La Réunion');
  t('Parc national de Port-Cros');
  t('Parc national de la Guadeloupe');
  t('Parc national de la Vanoise');
  t('Parc national des Calanques');
  t('Parc national des Cévennes');
  t('Parc national des Ecrins');
  t('Parc national des Pyrénées');
  t('Parc national du Mercantour');
  t('Portail des parcs nationaux de France');

  return $menu_links;
}
