<?php

define('START', microtime(true));

require_once '_apps/boot.inc';







//render time 
define('END', microtime(true));
echo '<!--';
echo END - START;
echo '-->';
?>
