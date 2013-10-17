/*
 * carina erp v.1.03b
 * kardesyazilim.net istanbulmobile.net
 * Kardeş Yazılım ve Bilişim Hizmetleri
 * labs@kardesyazilim.net
 * labs.kardesyazilim.net
 * Oct 7, 2013 - 5:28:03 AM  / file name: [main] (main.js)
 * UTF-8 - markado - default
 * help doc : main - (main.js)
 */

 $(document).ready(function() {
 
 
 $('.carousel').carousel({
  interval: 3000
})
 
 
     $("[rel=broqr]").popover({
      placement : 'left', //placement of the popover. also can use top, bottom, left or right

      html: 'true', //needed to show html of course
      content : '<div id="popOverBox"><img src="qrcode.png" width="150" height="150" /></div>' //this is the content of the html box. add the image here or anything you want really.
});
});