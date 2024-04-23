<?php

$title = "$page_ttl | ";
$page = "goods";
require_once("../common.php");
include_once("{$settings['docroot']}/inc/meta.inc");
include_once("{$settings['docroot']}/inc/header.inc");

?>

<link rel="stylesheet" type="text/css" href="https://cdnjs.cloudflare.com/ajax/libs/remodal/1.0.5/remodal.min.css">
<link rel="stylesheet" type="text/css" href="https://cdnjs.cloudflare.com/ajax/libs/remodal/1.0.5/remodal-default-theme.min.css">
<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/remodal/1.0.5/remodal.min.js"></script>

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
			<div class="page_character lh-none">
				<img class="image" src="<?php echo $settings['rootdir']?>/img/common/mini_kouji2.png">
			</div>
			<div class="frame">
				<h2>グッズ一覧</h2>
			   <div class="contents_box">
				   <ul class="text item_list_flex">
					   <li>
					   	<p class="item_image"><a href="#modal_01" class="btn"><img class="image" src="img/normal_akusuta.png"></a></p>
					   	<p class="item_name">アクリルスタンド 描き下ろし</p>
					   	<p>¥2,200（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_01">
						   	<button data-remodal-action="close" class="remodal-close"></button>
						   	<div class="item_data">
							   	<p><img class="image" src="img/normal_akusuta.png"></p>
							   	<p class="item_name">アクリルスタンド 描き下ろし</p>
									<p>¥2,200（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_02" class="btn"><img class="image" src="img/voice_akusuta.jpg"></a></p>
					   	<p class="item_name">ボイス付きアクリルスタンド 描き下ろし</p>
					   	<p>¥4,400（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_02">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
									<p><img class="image" src="img/voice_akusuta.jpg"></p>
							   	<p class="item_name">ボイス付きアクリルスタンド 描き下ろし</p>
									<p>¥4,400（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_03" class="btn"><img class="image" src="img/clearfile.png"></a></p>
					   	<p class="item_name">クリアファイル 描き下ろし</p>
					   	<p>¥550（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_03">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/clearfile.png"></p>
							   	<p class="item_name">クリアファイル 描き下ろし</p>
									<p>¥550（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_04" class="btn"><img class="image" src="img/kan_bage.png"></a></p>
					   	<p class="item_name">缶バッジ 描き下ろし</p>
					   	<p>¥880（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_04">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/kan_bage.png"></p>
							   	<p class="item_name">缶バッジ 描き下ろし</p>
									<p>¥880（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_05" class="btn"><img class="image" src="img/normal_sticker.png"></a></p>
					   	<p class="item_name">ステッカー 描き下ろし</p>
					   	<p>¥550（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_05">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
									<p><img class="image" src="img/normal_sticker.png"></p>
									<p class="item_name">ステッカー 描き下ろし</p>
									<p>¥550（税込）</p>
								</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_06" class="btn"><img class="image" src="img/stickerB_sd.png"></a></p>
					   	<p class="item_name">トレーディングステッカー<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥550（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_06">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/stickerB_sd.png"></p>
							   	<p class="item_name">トレーディングステッカー<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
							   	<p>各¥550（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_07" class="btn"><img class="image" src="img/akusuta_sakura.png"></a></p>
					   	<p class="item_name">アクリルスタンド桜<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥1,100（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_07">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/akusuta_sakura.png"></p>
							   	<p class="item_name">アクリルスタンド桜<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
							   	<p>各¥1,100（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_08" class="btn"><img class="image" src="img/yurayura_akusuta.png"></a></p>
					   	<p class="item_name">
						   	アクリルスタンドゆらゆら<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥1,100（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_08">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/yurayura_akusuta.png"></p>
							   	<p class="item_name">
								   	アクリルスタンドゆらゆら<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
								   <p>各¥1,100（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_09" class="btn"><img class="image" src="img/magnet.png"></a></p>
					   	<p class="item_name">トレーディングマグネット<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥660（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_09">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/magnet.png"></p>
							   	<p class="item_name">トレーディングマグネット<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
							   	<p>各¥660（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_10" class="btn"><img class="image" src="img/metal_charm.png"></a></p>
					   	<p class="item_name">トレーディングメタルチャーム<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥880（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_10">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/metal_charm.png"></p>
							   	<p class="item_name">トレーディングメタルチャーム<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
								   <p>各¥880（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_11" class="btn"><img class="image" src="img/akusuta_omamori.png"></a></p>
					   	<p class="item_name">トレーディングアクリルお守り<br>
						   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
						   </p>
					   	<p>各¥880（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_11">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/akusuta_omamori.png"></p>
							   	<p class="item_name">トレーディングアクリルお守り<br>
								   	<span class="memo">（美世、清霞、香耶、幸次、五道）</span>
								   </p>
							   	<p>各¥880（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_12" class="btn"><img class="image" src="img/omamori_fukuro.png"></a></p>
					   	<p class="item_name">お守り袋</p>
					   	<p>¥880（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_12">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img//omamori_fukuro.png"></p>
							   	<p class="item_name">お守り袋</p>
									<p>¥880（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_13" class="btn"><img class="image" src="img/kumihimo.png"></a></p>
					   	<p class="item_name">組み紐ストラップキーホルダー</p>
					   	<p>¥1,650（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_13">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/kumihimo.png"></p>
							   	<p class="item_name">組み紐ストラップキーホルダー</p>
									<p>¥1,650（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_14" class="btn"><img class="image" src="img/wallet_pouch.png"></a></p>
					   	<p class="item_name">ミニショルダーウォレットポーチ</p>
					   	<p>¥3,850（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_14">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
									<p><img class="image" src="img/wallet_pouch.png"></p>
									<p class="item_name">ミニショルダーウォレットポーチ</p>
									<p>¥3,850（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_15" class="btn"><img class="image" src="img/tote_bag.png"></a></p>
					   	<p class="item_name">トートバッグ</p>
					   	<p>¥3,300（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_15">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
									<p><img class="image" src="img/tote_bag.png"></p>
									<p class="item_name">トートバッグ</p>
									<p>¥3,300（税込）</p>
						   	</div>
								
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_16" class="btn"><img class="image" src="img/sensu.png"></a></p>
					   	<p class="item_name">扇子</p>
					   	<p>¥3,520（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_16">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/sensu.png"></p>
							   	<p class="item_name">扇子</p>
									<p>¥3,520（税込）</p>
						   	</div>
								
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_17" class="btn"><img class="image" src="img/kinchaku.png"></a></p>
					   	<p class="item_name">巾着</p>
					   	<p>¥2,200（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_17">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/kinchaku.png"></p>
							   	<p class="item_name">巾着</p>
									<p>¥2,200（税込）</p>
						   	</div>
								
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_18" class="btn"><img class="image" src="img/gamaguchi.png"></a></p>
					   	<p class="item_name">がま口</p>
					   	<p>¥2,200（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_18">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/gamaguchi.png"></p>
							   	<p class="item_name">がま口</p>
									<p>¥2,200（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_19" class="btn"><img class="image" src="img/mirror.png"></a></p>
					   	<p class="item_name">手鏡</p>
					   	<p>¥1,320（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_19">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/mirror.png"></p>
							   	<p class="item_name">手鏡</p>
									<p>¥1,320（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_20" class="btn"><img class="image" src="img/yunomi.png"></a></p>
					   	<p class="item_name">湯呑</p>
					   	<p>¥2,640（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_20">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/yunomi.png"></p>
							   	<p class="item_name">湯呑</p>
									<p>¥2,640（税込）</p>
						   	</div>
								
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_21" class="btn"><img class="image" src="img/tenugui.png"></a></p>
					   	<p class="item_name">手ぬぐい</p>
					   	<p>¥1,650（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_21">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/tenugui.png"></p>
							   	<p class="item_name">手ぬぐい</p>
									<p>¥1,650（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_22" class="btn"><img class="image" src="img/furoshiki.png"></a></p>
					   	<p class="item_name">風呂敷</p>
					   	<p>¥3,300（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_22">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/furoshiki.png"></p>
							   	<p class="item_name">風呂敷</p>
									<p>¥3,300（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_23" class="btn"><img class="image" src="img/goshuin_stamp.png"></a></p>
					   	<p class="item_name">御朱印帳</p>
					   	<p>¥3,300（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_23">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/goshuin_stamp.png"></p>
							   	<p class="item_name">御朱印帳</p>
									<p>¥3,300（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_24" class="btn"><img class="image" src="img/film_book_mark.png"></a></p>
					   	<p class="item_name">フィルム風しおり</p>
					   	<p>¥990（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_24">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/film_book_mark.png"></p>
							   	<p class="item_name">フィルム風しおり</p>
									<p>¥990（税込）</p>
						   	</div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_25" class="btn"><img class="image" src="img/postcard_all.png"></a></p>
					   	<p class="item_name"> 
						   	ポストカードセット<br>
						   	<span class="memo">（美世、清霞、集合1、集合2）</span>
						   </p>
					   	<p>各¥660（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_25">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="slide">
								   <div class="swiper-container postcard_swiper">
										<div class="swiper-wrapper">
											<div class="swiper-slide"><img class="image" src="img/postcard_a.png"></div>
											<div class="swiper-slide"><img class="image" src="img/postcard_b.png"></div>
											<div class="swiper-slide"><img class="image" src="img/postcard_c.png"></div>
											<div class="swiper-slide"><img class="image" src="img/postcard_d.png"></div>
										</div>
										<br>
									</div>
									<div class="swiper-button-prev"></div>
									<div class="swiper-button-next"></div>
									
									<!-- ページネーション -->
									<div class="swiper-pagination postcard_swiper_iper-pagination"></div>
							   </div>
							   <div class="item_data">
								   <p class="item_name">ポストカードセット</p>
								   <p class="memo">（美世、清霞、集合1、集合2）</p>
							   	<p>各¥660（税込）</p>
							   </div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_26" class="btn"><img class="image" src="img/mascot_all.png"></a></p>
					   	<p class="item_name"> 
						   	ちびキャラマスコット全5種
						   </p>
						   <p class="memo">（美世、清霞、香耶、幸次、五道）</p>
					   	<p>各¥2,860（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_26">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="slide">
								   <div class="swiper-container mascot_swiper">
										<div class="swiper-wrapper">
											<div class="swiper-slide"><img class="image" src="img/mascot_a.png"></div>
											<div class="swiper-slide"><img class="image" src="img/mascot_b.png"></div>
											<div class="swiper-slide"><img class="image" src="img/mascot_c.png"></div>
											<div class="swiper-slide"><img class="image" src="img/mascot_d.png"></div>
											<div class="swiper-slide"><img class="image" src="img/mascot_e.png"></div>
										</div>
										<br>
									</div>
									<div class="swiper-button-prev"></div>
									<div class="swiper-button-next"></div>
									
									<!-- ページネーション -->
									<div class="swiper-pagination mascot_swiper_swiper-pagination"></div>
							   </div>
							   <div class="item_data">
								   <p class="item_name">
									   ちびキャラマスコット全5種
									</p>
									<p class="memo">（美世、清霞、香耶、幸次、五道）</p>
							   	<p>各¥2,860（税込）</p>
							   </div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_27" class="btn"><img class="image" src="img/original_picture_all.jpg"></a></p>
					   	<p class="item_name"> 
						   	<span class="memo pink">受注販売</span><br>
						   	複製原画 全5種
						   </p>
						   <p class="memo">（複製原画A〜E）</p>
					   	<p>各¥30,800（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_27">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="slide">
								   <div class="swiper-container original_pictur_swiper">
										<div class="swiper-wrapper">
											<div class="swiper-slide"><img class="image" src="img/original_picture_a.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/original_picture_b.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/original_picture_c.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/original_picture_d.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/original_picture_e.jpg"></div>
										</div>
										<br>
									</div>
									<div class="swiper-button-prev"></div>
									<div class="swiper-button-next"></div>
									
									<!-- ページネーション -->
									<div class="swiper-pagination original_pictur_swiper_swiper-pagination"></div>
							   </div>
							   <div class="item_data">
								   <p class="item_name">
									   <span class="memo pink">受注販売</span><br>
									   複製原画 全5種
									</p>
									<p class="memo">（複製原画A〜E）</p>
							   	<p>各¥30,800（税込）</p>
							   </div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_28" class="btn"><img class="image" src="img/art_panel_all.jpg"></a></p>
					   	<p class="item_name">
						   	<span class="memo pink">新規</span><br>
						   	アートパネル 全5種
						   </p>
					   	<p class="memo">（描き下ろし、A、B、C、D）</p>
					   	<p>各¥3,300（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_28">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="slide">
								   <div class="swiper-container art_panel_swiper">
										<div class="swiper-wrapper">
											<div class="swiper-slide"><img class="image" src="img/art_panel_a.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/art_panel_b.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/art_panel_c.jpg"></div>
											<div class="swiper-slide"><img class="image" src="img/art_panel_d.png"></div>
											<div class="swiper-slide"><img class="image" src="img/art_panel_e.png"></div>
										</div>
										<br>
									</div>
									<div class="swiper-button-prev"></div>
									<div class="swiper-button-next"></div>
									
									<!-- ページネーション -->
									<div class="swiper-pagination art_panel_swiper-pagination"></div>
							   </div>
							   <div class="item_data">
								   <p class="item_name">
									   <span class="memo pink">新規</span><br>
									   アートパネル 全5種
									</p>
								   <p class="memo">（描き下ろし、A、B、C、D）</p>
							   	<p>各¥3,300（税込）</p>
							   </div>
							</div>
					   </li>
					   <li>
					   	<p class="item_image"><a href="#modal_29" class="btn"><img class="image" src="img/clearfile_all.jpg"></a></p>
					   	<p class="item_name">
						   	<span class="memo pink">新規</span><br>
						   	クリアファイル全2種
						   </p>
					   	<p class="memo">（書斎、朝食）</p>
					   	<p>各¥550（税込）</p>
					   	<div class="remodal" data-remodal-id="modal_29">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="slide">
								   <div class="swiper-container clearfile_swiper">
										<div class="swiper-wrapper">
											<div class="swiper-slide"><img class="image" src="img/clearfile_study.png"></div>
											<div class="swiper-slide"><img class="image" src="img/clearfile_breakfast.png"></div>
										</div>
										<br>
									</div>
									<div class="swiper-button-prev"></div>
									<div class="swiper-button-next"></div>
									
									<!-- ページネーション -->
									<div class="swiper-pagination clearfile_swiper-pagination"></div>
							   </div>
							   <div class="item_data">
								   <p class="item_name">
									   <span class="memo pink">新規</span><br>
									   クリアファイル全2種
									</p>
							   	<p class="memo">（書斎、朝食）</p>
							   	<p>各¥550（税込）</p>
							   </div>
							</div>
					   </li>
					   
					   <li>
					   	<p class="item_image"><a href="#modal_30" class="btn"><img class="image" src="img/omamori.png"></a></p>
					   	<p class="item_name">
						   	<span class="memo pink">新規</span><br>
						   	武蔵野坐令和神社ブレスレットお守り
						   </p>
					   	<p>初穂料 1,300円</p>
					   	<div class="remodal" data-remodal-id="modal_30">
								<button data-remodal-action="close" class="remodal-close"></button>
								<div class="item_data">
							   	<p><img class="image" src="img/omamori.png"></p>
							   	<p class="item_name">
								   	<span class="memo pink">新規</span><br>
								   	武蔵野坐令和神社ブレスレットお守り
								   </p>
									<p>初穂料 1,300円</p>
						   	</div>
							</div>
					   </li>
				   </ul>
				   <div class="text">
					   <ul class="memo attention_memo">
						   <li>商品画像はイメージです。</li>
						   <li>複製原画は受注販売商品です。</li>
						   <li>受注販売商品は企画展内の物販会場にて申込用紙に記入し、ご注文いただけます。</li>
					   </ul>
				   </div>
				</div> 	   
			</div><?php /*?>frame<?php */?>
			   
		</div><?php /*?>primary<?php */?>
	</div><?php /*?>page_wrap wrap_contents<?php */?>
</div><?php /*?>wrap_contents_inner<?php */?>

<script>	
	// Remodalの初期設定
	var remodal = $('[data-remodal-id=your-modal-id]').remodal({
	  hashTracking: false, // URLに#を追加しないようにする
	});
	
	// モーダルが開いた後の処理
	$(document).on('opened', '.remodal', function () {
	  // ここに実行する処理を書く
	});
	
	// モーダルが閉じた時の処理
	$(document).on('closed', '.remodal', function () {
	  // URLから#を削除する
	  var currentURL = window.location.href;
	  if (currentURL.indexOf('#') !== -1) {
	      history.replaceState(null, null, currentURL.split('#')[0]);
	  }
	});
	
	//postcard_swiper
	const swiper_postcard = new Swiper(".postcard_swiper", {
	  loop: true,
	  effect: 'fade',
	  pagination: {
	    el: ".postcard_swiper_iper-pagination",
	    clickable: true,
	  },
	  navigation: {
	    nextEl: ".swiper-button-next",
	    prevEl: ".swiper-button-prev",
	  },
	});
	
	//mascot_swiper
	const swiper_mascot_swiper = new Swiper(".mascot_swiper", {
	  loop: true,
	  effect: 'fade',
	  //autoplay: true,
	  pagination: {
	    el: ".mascot_swiper_swiper-pagination",
	    clickable: true,
	  },
	  navigation: {
	    nextEl: ".swiper-button-next",
	    prevEl: ".swiper-button-prev",
	  },
	});
	
	//original_pictur_swiper
	const swiper_original_pictur = new Swiper(".original_pictur_swiper", {
	  loop: true,
	  effect: 'fade',
	  //autoplay: true,
	  pagination: {
	    el: ".original_pictur_swiper_swiper-pagination",
	    clickable: true,
	  },
	  navigation: {
	    nextEl: ".swiper-button-next",
	    prevEl: ".swiper-button-prev",
	  },
	});
	
	//art_panel_swiper
	const swiper_art_panel = new Swiper(".art_panel_swiper", {
	  loop: true,
	  effect: 'fade',
	  //autoplay: true,
	  pagination: {
	    el: ".art_panel_swiper-pagination",
	    clickable: true,
	  },
	  navigation: {
	    nextEl: ".swiper-button-next",
	    prevEl: ".swiper-button-prev",
	  },
	});
	
	//clearfile_swiper
	const swiper_clearfile = new Swiper(".clearfile_swiper", {
	  loop: true,
	  effect: 'fade',
	  //autoplay: true,
	  pagination: {
	    el: ".clearfile_swiper-pagination",
	    clickable: true,
	  },
	  navigation: {
	    nextEl: ".swiper-button-next",
	    prevEl: ".swiper-button-prev",
	  },
	});

</script>

<?php include_once("{$settings['docroot']}/inc/footer.inc"); ?>

