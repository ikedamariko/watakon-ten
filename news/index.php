<?php
require_once("../common.php");
require_once("ListOffset.php");

$page_ttl = "お知らせ";

//---------------------------------------------------------------------------------------

include_once("./news_list.php");
$news_active = array();
$news_current_page = array();
$settings['limit'] = 10;

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

$lo = new ListOffset(count($news_active), $settings['limit'], $settings['offset']);

//---------------------------------------------------------------------------------------



switch ($settings['mode']) {
   case "detail":
      $detail = false;
      $id = addslashes($_REQUEST['id']);
      foreach ($news_active as $n) {
         if ($n['id'] == $id) {
            $detail = $n;
            break;
         }
      }

      if (!$detail) header("Location: /news/");

      $settings['title'] = "{$detail['title']}";
      $settings['date'] = "{$detail['date']}";

      include_once("./inc/detail.inc");
      break;

   default:
      include_once("./inc/index.inc");
}
?>
