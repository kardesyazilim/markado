<?php

/*
 * carina erp v.1.03b
 * kardesyazilim.net istanbulmobile.net
 * Kardeş Yazılım ve Bilişim Hizmetleri
 * labs@kardesyazilim.net
 * labs.kardesyazilim.net
 * Oct 7, 2013 - 2:33:44 AM  / file name: [global] (global.inc)
 * UTF-8 - markado - default
 * help doc : global - (global.inc)
 */

require_once 'db.inc';

define('ROOT', getcwd());
define('DS', DIRECTORY_SEPARATOR);

//folder 
define('SKINS', ROOT . DS . 'skins' . DS);
define('APPS', ROOT . DS . '_apps' . DS);



//_apps path block
define('CORE', APPS . '_core' . DS);
define('ETC', APPS . '_etc' . DS);
define('USR', APPS . '_usr' . DS);

//_apps etc block
define('CETC',ETC.'core'.DS);
define('LANG',ETC.'lang'.DS);

//_apps usr block

define('ADMIN',USR.'admin'.DS);
define('FRONTEND',USR.'frontend'.DS);
define('MOBIL',USR.'mobil'.DS);
define('EXT',USR.'ext'.DS);


define('TIMEZONE', 'Europe/Istanbul');

define('display_errors',1);
?>
