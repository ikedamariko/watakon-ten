<?php
$css1 = "news.css";
$page = "news";
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
	      <div class="page_character lh-none">
				<img class="image" src="<?php echo $settings['rootdir']?>/img/common/mini_godo.png">
			</div>
			<div class="news-detail content-box frame">
				<div class="contents_box">
					<div class="position">
					   <div class="text">
						   <article>
						      <div class="news-detail__content">
							      <div class="wrap_ttl">
								      <div class="news-detail__date"><?php echo $n['date']?></div>
										<p class="icon_pink">◆◆◆</p>
										<h1 class="news-detail__title"><?php echo $settings['title']?></h1>
							      </div>
							      <div class="news_detail">
							      	<?php if ($detail) include($detail['inc']); ?>
							      </div>
						      </div>
						   </article>
					   </div>
					</div>
				</div>
			</div>
			<div class="back_idx">
			   <div class="btn">
				   <a href="../news">＜ニュース一覧へ戻る</a>
				</div>
			</div>
			
		</div><?php /*?>primary<?php */?>
	</div><?php /*?>page_wrap wrap_contents<?php */?>
</div><?php /*?>wrap_contents_inner<?php */?>

<?php include_once("{$settings['docroot']}/inc/footer.inc"); ?>


</body>
