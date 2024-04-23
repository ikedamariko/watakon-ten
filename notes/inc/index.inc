<?php
$title = "$page_ttl | ";
$page = "notes";
require_once("../common.php");
include_once("{$settings['docroot']}/inc/meta.inc");
include_once("{$settings['docroot']}/inc/header.inc");

?>

<div id="<?php echo $page?>" class="page_wrap wrap_contents">
	<?php include_once("../inc/sakura.inc"); ?>
	<div class="wrap_contents_inner">
		<div class="page_ttl page">
         <div class="wrap_page_ttl">
            <h1>
				   <p><img class="image" src="../img/common/musubi_purple.png"></p>
				   <?php echo $page_ttl?>
				</h1>
         </div>
      </div>
		
		<div class="primary">
			<ul class="accordion-area">
				<?php /*?><li class="list">
					<section>
						<h3 class="title"><span>日時指定券抽選にあたってのご注意</span></h3>
						<div class="box">
							<ul class="memo">
								<li>お申込みにあたって、ローソンチケット会員登録（無料）が必要になります。</li>
								<li>お申込みは１回のお申込みで４枚まで。１会員様2回までお申込み頂けます。</li>
								<li>2回お申込みされた場合、最大２回当選する場合もございますので、ご注意下さい。</li>
								<li>ご当選後、ローソンチケット手数料330円／枚　がチケット引き換え時に発生致します。</li>
								<li>ローソンまたはミニストップにて入場券をお引換ください。なお当選された場合でも各引換期間に発券されなかった場合は無効になります。（クレジット決済でお申込みされ当選された方はその限りではありません。当選メールをご確認下さい。）	</li>
							</ul>
						</div>
			      </section>
			   </li><?php */?>
			   <li class="list">
					<section>
						<h3 class="title"><span>ご入場にあたってのご注意</span></h3>
						<div class="box">
							<ul class="memo">
								<?php /*?><li>「日時指定券」に記載されている日にち・時間帯でのみ有効です。入場時間の変更等はできません。</li><?php */?>
								<li>ご入場の際に当日の場内の状況等によりお待ちいただく場合がございます。</li>
								<?php /*?><li>入場券記載の集合時間より早すぎるご来場は、混雑を招きますのでご遠慮ください。</li><?php */?>
								<li>入場券の整理番号は、物販会場の入場順番を保証するものではございません。</li>
								<li>公共交通機関などの遅れなどやむを得ない理由で集合時間に遅れた場合は、スタッフの指示に従っていただきますようお願いいたします。</li>
								<li>悪天候及び公共交通機関の運行状況、その他やむを得ず本企画展を中止とさせていただいた場合は払い戻しとし、日時の振替はいたしません。あらかじめご了承ください。</li>
								<li>本企画展への再入場はできません。</li>
								<li>ご入場は入場券1枚につき1名様、会期中1回に限らせていただきます。（ペア券に限り、1枚につき2名様ご入場いただけます)</li>
								<li>会場内混雑の場合はお待ちいただく場合がございます。</li>
								<li>会場内へのキャリーバッグなど大型の荷物の持ち込みはご遠慮ください。（会場でのお預かりはいたしかねます。）</li>
								<li>チケット・グッズの転売行為は禁止とさせていただきます。転売行為が発覚した場合は入場をお断りさせていただきます。なお、当日お客様のご本人確認をさせて頂く場合がございますので、身分証明書をご持参頂けますようご協力をお願いいたします。</li>
								<li>「入場券」紛失の場合、再発行はいたしません。</li>
								<li>小中高生のお客様は、ご入場の際に生徒手帳・学生証・身分証明書等をご提示いただく場合がございます。</li>
								<li>未就学児は入場無料。ご入場の際は必ず保護者（18歳以上）同伴でご入場ください。保護者1名につき2名までご入場いただけます。</li>
								<?php /*?><li>未就学児は日時指定券不要ですが、同伴の保護者の方には日時指定券が必要となります。</li><?php */?>
							</ul>
						</div>
			      </section>
			   </li>
			   <li class="list">
					<section>
						<h3 class="title"><span>物販コーナーへのご入場とグッズ販売について</span></h3>
						<div class="box">
							<ul class="memo">
								<li>物販会場へのご入場は、本企画展会場へご入場・ご観覧後の入場とさせていただきます。</li>
								<li>再入場はできません。</li>
								<li>物販会場のみへのご入場はお断りいたします。</li>
								<li>グッズ画像はイメージです。実際の商品とは異なる場合がございます。</li>
								<li>ご来場のタイミングによっては品切れ、完売している場合がございますので予めご了承ください。</li>
								<li>商品の発売・仕様などにつきましては諸般の事情により、変更・延期・中止になる場合がございます。</li>
								<li>転売目的でのグッズ購入はお断りさせて頂いております。</li>
								<li>会期中、臨時で購入制限等を設けさせて頂く場合がございますのでご了承ください。</li>
								<li>グッズは後日別会場での販売や、通販等で再販売する可能性がございます。</li>
								<li>複製原画は受注販売となります。</li>
								<?php /*?><li>松屋銀座会場につきましては、ちびキャラマスコットは予約販売となります。</li><?php */?>
								<li>グッズに関する問い合わせは、こちらのURLからご連絡をお願い致します。（<a href="http://smallplanet.co.jp/contact_kojin/" target="_blank">http://smallplanet.co.jp/contact_kojin/</a>）</li>
								<li>「ボイス付きアクリルスタンド」に関しては、0120-138-024までお問い合わせをお願い致します</li>
							</ul>
						</div>
			      </section>
			   </li>
		  </ul>
			   
		</div><?php /*?>primary<?php */?>
	</div><?php /*?>page_wrap wrap_contents<?php */?>
</div><?php /*?>wrap_contents_inner<?php */?>

<script>
	$('.title').on('click', function() {
		var findElm = $(this).next(".box");
		$(findElm).slideToggle();
		
		if($(this).hasClass('close')){
			$(this).removeClass('close');
		}else{//それ以外は
			$(this).addClass('close');
		}
	});
	$(window).on('load', function(){
		//accordion-areaのはじめのliにあるsectionにopenクラスを追加
		//$('.accordion-area li:first-of-type section').addClass("open"); 
		$(".open").each(function(index, element){
			var Title =$(element).children('.title');
			$(Title).addClass('close');
			var Box =$(element).children('.box');
			$(Box).slideDown(500);
		});
	});
</script>

<?php include_once("{$settings['docroot']}/inc/footer.inc"); ?>
