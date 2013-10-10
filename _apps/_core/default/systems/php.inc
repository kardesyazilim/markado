<?php

/*
 * carina erp v.1.03b
 * kardesyazilim.net istanbulmobile.net
 * Kardeş Yazılım ve Bilişim Hizmetleri
 * labs@kardesyazilim.net
 * labs.kardesyazilim.net
 * Oct 7, 2013 - 2:33:44 AM  / file name: [php] (php.inc)
 * UTF-8 - markado - default
 * help doc : php - (php.inc)
 */

class cPHP {
    
    function __construct() {
        $this->mode();
    }

    private function mode() {
        //session_name('labs.kardesyazilim.net');
        session_start();
        ob_start();
        
        @ini_set("display_errors", display_errors);
        @ini_set('error_reporting', E_ALL);
        date_default_timezone_set(TIMEZONE);
 
    }

}

?>
