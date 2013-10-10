<?php

/*
 * carina erp v.1.03b
 * kardesyazilim.net istanbulmobile.net
 * Kardeş Yazılım ve Bilişim Hizmetleri
 * labs@kardesyazilim.net
 * labs.kardesyazilim.net
 * Oct 7, 2013 - 2:41:53 AM  / file name: [route] (route.inc)
 * UTF-8 - markado - default
 * help doc : route - (route.inc)
 */

class cRoute {
    private $q;

    function __construct() {
        $this->url();
    }

    private function url() {
        $this->q = isset($_GET ['q']) ? $_GET ['q'] : null;
        $this->q = rtrim($this->q, '/');
        $this->q = explode('/', $this->q);
        print_r($this->q);
            $d = new cRender();

    }
    
    //module include

}

?>
