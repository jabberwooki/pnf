<?php

/**
 * @file
 * Drupal site-specific configuration file.
 */

/**
 * Database settings.
 */
$databases = array ();

/**
 * Access control for update.php script.
 */
$update_free_access = FALSE;

/**
 * Salt for one-time login links and cancel links, form tokens, etc.
 */
$drupal_hash_salt = 'Q4oXE_sbAatdms--SePr5XD7ox4XigWbDl2Vgi8bfH0';

/**
 * Base URL (optional).
 * /
# $base_url = 'http://www.example.com';  // NO trailing slash!

/**
 * PHP settings:
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

# ini_set('pcre.backtrack_limit', 200000);
# ini_set('pcre.recursion_limit', 200000);
# $cookie_domain = '.example.com';
# $conf['site_name'] = 'My Drupal site';
# $conf['theme_default'] = 'garland';
# $conf['anonymous'] = 'Visitor';
# $conf['maintenance_theme'] = 'bartik';
# $conf['reverse_proxy'] = TRUE;
# $conf['reverse_proxy_addresses'] = array('a.b.c.d', ...);
# $conf['reverse_proxy_header'] = 'HTTP_X_CLUSTER_CLIENT_IP';
# $conf['omit_vary_cookie'] = TRUE;
# $conf['css_gzip_compression'] = FALSE;
# $conf['js_gzip_compression'] = FALSE;
# $conf['block_cache_bypass_node_grants'] = TRUE;
# $conf['locale_custom_strings_en'][''] = array(
#   'forum'      => 'Discussion board',
#   '@count min' => '@count minutes',
# );
# $conf['blocked_ips'] = array(
#   'a.b.c.d',
# );

/**
 * Fast 404 pages:
 */
$conf['404_fast_paths_exclude'] = '/\/(?:styles)\//';
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['404_fast_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';

# drupal_fast_404();

/**
 * External access proxy settings:
 * /
# $conf['proxy_server'] = '';
# $conf['proxy_port'] = 8080;
# $conf['proxy_username'] = '';
# $conf['proxy_password'] = '';
# $conf['proxy_user_agent'] = '';
# $conf['proxy_exceptions'] = array('127.0.0.1', 'localhost');

/**
 * Authorized file system operations:
 */
# $conf['allow_authorize_operations'] = FALSE;

$conf['file_private_path'] = '../../shared/private' . basename(__DIR__);