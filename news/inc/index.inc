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
			<div class="content-box">
			   <ul class="news-list">
					<?php foreach ($news_current_page as $k => $n) { ?>
						<?php if($n["page"]== "news"){ ?>
			            <a href="?mode=detail&id=<?php echo $n['id']?>">
			            <?php } else { ?>
			            <a href="<?php echo $settings['rootdir']?>/<?php echo $n['page']?>">
			            <?php } ?>
				         <li class="news-list__item frame_plane">
				         	<div class="contents_box">
					            <?php if($n["new"]){ ?>
					            <div class="icon--new">NEW!</div>
					            <?php } ?>
					            
					            <div class="news_ttl_flex">
					               <div class="news-list__date"><?php echo $n['date']?></div>
					               <div class="news-list__title"><?php echo $n['title']?></div>
					            </div>
				            </div>
				         </li>
			         </a>
			         
			      <?php } ?>
			   </ul>
			</div>
			
			<aside class="pager">
			   <p>
			      <?php echo $lo->getPrevAnchor(strip_tags("./?offset={$settings['offset']}"), "<< PREV　")?>
			      <?php echo $lo->total?>件中
			      <?php echo $lo->getRangeStart()?>件～<?php echo $lo->getRangeEnd(count($news_current_page))?>件
			      <?php echo $lo->getNextAnchor(strip_tags("./?offset={$settings['offset']}"), "　NEXT >>")?>
			   </p>
			</aside>
	
		</div><?php /*?>primary<?php */?>
	</div><?php /*?>page_wrap wrap_contents<?php */?>
</div><?php /*?>wrap_contents_inner<?php */?>

<?php include_once("{$settings['docroot']}/inc/footer.inc"); ?>


</body>
