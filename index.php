<?php

/* session_destroy();
  ob_flush(); */
define('START', microtime(true));

//var_dump($_SESSION);
//phpinfo();
set_include_path(get_include_path() . PATH_SEPARATOR . '/Volumes/Golas/backup/jobs/markado/google-api-php-client/src/');
session_start();
require_once 'Google_Client.php';

$client = new Google_Client();

$client->setApplicationName('labs.kardesyazilim.net');
$client->setScopes("http://www.google.com/m8/feeds/");
// Documentation: http://code.google.com/apis/gdata/docs/2.0/basics.html
// Visit https://code.google.com/apis/console?api=contacts to generate your
// oauth2_client_id, oauth2_client_secret, and register your oauth2_redirect_uri.
// $client->setClientId('insert_your_oauth2_client_id');
// $client->setClientSecret('insert_your_oauth2_client_secret');
// $client->setRedirectUri('insert_your_redirect_uri');
// $client->setDeveloperKey('insert_your_developer_key');

if (isset($_GET['code'])) {
  $client->authenticate();
  $_SESSION['token'] = $client->getAccessToken();
  $redirect = 'http://' . $_SERVER['HTTP_HOST'] . $_SERVER['PHP_SELF'];
  header('Location: ' . filter_var($redirect, FILTER_SANITIZE_URL));
}

if (isset($_SESSION['token'])) {
 $client->setAccessToken($_SESSION['token']);
}

if (isset($_REQUEST['logout'])) {
  unset($_SESSION['token']);
  $client->revokeToken();
}

if ($client->getAccessToken()) {
  $req = new Google_HttpRequest("https://www.google.com/m8/feeds/contacts/default/full");
  $val = $client->getIo()->authenticatedRequest($req);

  // The contacts api only returns XML responses
$hh = file_get_contents($val->getResponseBody());
  $response = json_encode(simplexml_load_string($hh));
  print "<pre>" . print_r(json_decode($response, true), true) . "</pre>";

  // The access token may have been updated lazily.
  $_SESSION['token'] = $client->getAccessToken();
} else {
  $auth = $client->createAuthUrl();
}

if (isset($auth)) {
    print "<a class=login href='$auth'>Connect Me!</a>";
  } else {
    print "<a class=logout href='?logout'>Logout</a>";
}
