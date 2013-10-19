<?php

/* session_destroy();
  ob_flush(); */
//define('START', microtime(true));
//
////var_dump($_SESSION);
////phpinfo();
//$img_source = "favicon.ico"; // image path/name
//$img_binary = fread(fopen($img_source, "r"), filesize($img_source));
//$img_string = base64_encode($img_binary);
//
//header("Content-type: image/ico");
//echo base64_decode($img_string); 
//
//echo  '<img src="data:image/ico;base64,'.$img_string.'">';

phpinfo();
class Calculator
{
    /**
     * @assert (0, 0) == 0
     * @assert (0, 1) == 1
     * @assert (1, 0) == 1
     * @assert (1, 1) == 2
     */
    public function add($a, $b)
    {
        return $a + $b;
    }
}
