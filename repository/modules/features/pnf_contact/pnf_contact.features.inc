<?php
/**
 * @file
 * pnf_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pnf_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pnf_contact_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function pnf_contact_default_entityform_type() {
  $items = array();
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contactez-nous",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Envoyer",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EVotre demande a bien \\u00e9t\\u00e9 enregistr\\u00e9e.\\u003Cbr \\/\\u003E\\r\\nNous nous effor\\u00e7ons d\\u0027y r\\u00e9pondre dans les plus brefs d\\u00e9lais.\\u003C\\/p\\u003E\\r\\n",
        "format" : "plain_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "4" : 0, "5" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ECe formulaire vous permet de contacter le service d\\u0027accueil du Parc national qui, en fonction du sujet, transmettra votre message aux personnes concern\\u00e9es.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EVous pouvez \\u00e9galement contacter l\\u0027\\u00e9quipe d\\u0027animation du site internet du Parc national pour r\\u00e9agir \\u00e0 un article, apporter des informations compl\\u00e9ementaires ou encore signaler des difficult\\u00e9es techniques ou de navigation.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003ELes offres d\\u0027emploi et de stages ouvertes par le Par national sont consultables dans la rubrique \\u003Ca href=\\u0022offres-demploi\\u0022\\u003EOffres d\\u0027emploi\\u003C\\/a\\u003E.\\u003Cbr \\/\\u003E\\r\\n\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      }
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact",
        "alias" : "formulaire-contact",
        "language" : "und"
      }
    }
  }');
  return $items;
}
