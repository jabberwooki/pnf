<?php
/**
 * @file
* Enables modules and site configuration for a minimal site installation.
*/

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
*
* Allows the profile to alter the site configuration form.
*/
function pnf_form_install_configure_form_alter(&$form, $form_state) {
	$form['site_information']['#access'] = FALSE;
	$form['server_settings']['#access'] = FALSE;
	$form['update_notifications']['#access'] = FALSE;
}