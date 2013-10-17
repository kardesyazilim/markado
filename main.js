
$(window).load(function() {

    $('.carousel').carousel({
        interval: 5000
    })


    $("[rel=broqr]").popover({
        trigger: "click",
        placement: 'left', //placement of the popover. also can use top, bottom, left or right
        html: 'true', //needed to show html of course
        content: '<div id="popOverBox" ><img src="qrcode.png" width="150" height="150" /></div>' //this is the content of the html box. add the image here or anything you want really.
    });

});
