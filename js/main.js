// sp nav
$(function() {
     $('.hamburger').click(function() {
         $(this).toggleClass('active');

         if ($(this).hasClass('active')) {
             $('.globalMenuSp').addClass('active');
         } else {
             $('.globalMenuSp').removeClass('active');
         }
     });
 });

// totop
 $(function() {  
    var btn = $('.totop');

    $(window).on('load scroll', function(){
        if($(this).scrollTop() > 100) {
        btn.addClass('active');
        }else{
        btn.removeClass('active');
        }
    });

    btn.on('click',function () {
        $('body,html').animate({
        scrollTop: 0
        });
    });
});

// opening
$(function () {
  function end_loader() {
    $('.loader').fadeOut(800);
  }
  $(window).on('load', function () {
    setTimeout(function () {
      end_loader();
    }, 2000)
  })
})




