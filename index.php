<?php

define('START', microtime(true));

require_once '_apps/boot.inc';
$db = new ezSQL_mysql('carina', 'qweytr', 'carina_master', 'localhost', 'utf-8');

$db->query("select * from user");
$db->debug();


?>
