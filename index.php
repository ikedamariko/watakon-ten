<?php
require_once("common.php");
$page_ttl = "TOP";
$page_ttl_jp = "トップページ";
$description = "2023年7月より放送され、第二期制作も決定した、テレビアニメ「わたしの幸せな結婚」。満を持して、企画展の開催が決定。";

//---------------------------------------------------------------------------------------

include_once("./news/news_list.php");
$news_active = array();
$news_current_page = array();
$settings['limit'] = 5;

// 公開中のニュースリスト
foreach ($news_list as $n) {
   $check = false;
   if (DateUtil::parse_stamp("YmdHis", $n['start']) <= date("YmdHis") &&
       ($n['end'] == "" || DateUtil::parse_stamp("YmdHis", $n['end']) > date("YmdHis"))) {
      $news_active[] = $n;
   } else {
      continue;
   }
}

// ニュース一覧
foreach ($news_active as $k => $n) {
   if ($k < $settings['offset']) continue;
   if ($k >= $settings['offset'] + $settings['limit']) break;
   $news_current_page[] = $n;
}

//---------------------------------------------------------------------------------------

include_once("./inc/index.inc");

?>
