<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <title>Un Email Responsive</title>
  <style type="text/css">
    body {margin: 0; padding: 0; min-width: 100%!important;}
    .content {width: 100%; max-width: 600px;}
  </style>
</head>
<body yahoo bgcolor="#f4f4f4">
<table width="100%" bgcolor="#f4f4f4" border="0" cellpadding="0" cellspacing="0">
  <tr>
    <td>
      <table class="content" align="center" cellpadding="0" cellspacing="0" border="0">
        <tr>
          <td>
            <?php print $body ?>
          </td>
        </tr>
      </table>
    </td>
  </tr>
</table>
</body>
</html>
