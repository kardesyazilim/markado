<?php

//version check
//bootstrap login 
//php configuration special
//
//folder permission check
//core/modlul/class/function/method






require_once '_etc/locale/global.inc';

class cBoot {

    private $c;

    function __construct() {
        $this->core();
    }

    private function core() {
        $this->c = CORE;

        //_apps/_core

        if ($handle = opendir($this->c)) {

            while (false !== ($entry = readdir($handle))) {
                //
                if ($entry !== '.' & $entry !== '..') {

                    $spec = filetype($this->c . $entry);
                    if ($spec == 'dir') {
                        //defult and order core file
                        if ($handleSpec = opendir($this->c . $entry)) {


                            while (false !== ($module = readdir($handleSpec))) {
                                if ($module !== '.' & $module !== '..') {

                                    $specModule = filetype($this->c . $entry . DS . $module);

                                    if ($specModule == 'dir') {

                                        if ($moduleFolder = opendir($this->c . $entry . DS . $module)) {

                                            while (false !== ($moduleF = readdir($moduleFolder))) {


                                                if ($moduleF !== '.' & $moduleF !== '..') {


                                                    $specType = filetype($this->c . $entry . DS . $module . DS . $moduleF);
                                                    if ($specType == 'dir') {

                                                        if ($enddir = opendir($this->c . $entry . DS . $module . DS . $moduleF)) {
                                                            while (false !== ($endFile = readdir($enddir))) {

                                                                if ($endFile !== '.' & $endFile !== '..') {
                                                                   // echo $endFile;

                                                                    $eCheck = filetype($this->c . $entry . DS . $module . DS . $moduleF . DS . $endFile);
                                                                    if ($eCheck !== 'dir') {
                                                                        $checkExt = pathinfo($this->c . $entry . DS . $module . DS . $moduleF . DS . $endFile);
                                                                        $ext = $checkExt['extension'];
                                                                        if ($ext == 'inc') {
                                                                            require_once $this->c . $entry . DS . $module . DS . $moduleF . DS . $endFile;
                                                                        } else {
                                                                            //başka tip dosya
                                                                           echo 'Başka Tip Dosya';
                                                                        }
                                                                    } else {
                                                                        echo 'folder olmaz';
                                                                    }
                                                                }
                                                            }//1.endfile while
                                                            while ($endFile = readdir($enddir)) {
                                                                
                                                            }//2. endfile while



                                                            closedir($enddir);
                                                        }


                                                        //dir
                                                    } else {
                                                        $checkExt = pathinfo($this->c . $entry . DS . $module . DS . $moduleF);
                                                        $ext = $checkExt['extension'];


                                                        if ($ext == 'inc') {
                                                            require_once $this->c . $entry . DS . $module . DS . $moduleF;
                                                        } else {
                                                            //başka tip dosya
                                                            echo 'Başka Tip Dosya';
                                                        }
                                                    }//file
                                                }
                                            }//1.module folder
                                            while ($moduleF = readdir($moduleFolder)) {
                                                
                                            }//2. module folder





                                            closedir($moduleFolder);
                                        }
                                    }
                                }
                            }//1.module while
                            while ($module = readdir($handleSpec)) {
                                
                            }//2.module while
                            closedir($handleSpec);
                        }
                    }
                }
            }//1.while
            while ($entry = readdir($handle)) {
                echo $entry;
            }//2.while
            //handle closerdir
            closedir($handle);
        }
    }

}




$b = new cBoot;
$php  = new cPHP;
$r = new cRoute;



define('END', microtime(true));


echo '<!--';
echo END - START;
echo '-->';
?>
