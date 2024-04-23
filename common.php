<?php
$settings['docroot']      = dirname(__FILE__);
$settings['rootdir']      = "";


// $settings['domain']       = "watakon-ten.com"; // 本番サーバ
$settings['domain']       = "watakon-ten-dev.wp-adm.kadokawa-isys.jp"; // 開発サーバ


$settings['http']         = "http://{$settings['domain']}{$settings['rootdir']}";
$settings['https']        = "https://{$settings['domain']}{$settings['rootdir']}";
$settings['imghttp']      = "https://{$settings['domain']}{$settings['rootdir']}";

$settings['lib']          = "{$settings['docroot']}/programs/classes";

ini_set("include_path", "{$settings['lib']}:/usr/local/lib/php");

$settings['title']        = "『テレビアニメ「わたしの幸せな結婚」展』公式サイト";
$settings['site_title']        = "『テレビアニメ「わたしの幸せな結婚」展』公式サイト";
$settings['keywords']     = "{$settings['title']},アニメ,わたしの幸せな結婚,わたしの幸せな結婚展,KADOKAWA";
$settings['copyright']    = "&copy;2023 顎木あくみ・月岡月穂／KADOKAWA／「わたしの幸せな結婚」製作委員会";

$settings['og:type']        = "tv_show";
$settings['og:title']        = "{$settings['title']}";
$settings['og:url']         = "{$settings['https']}/";
$settings['og:image']       = "{$settings['https']}/img/ogp.png";
$settings['og:site_name']   = "{$settings['site_title']}";
$settings['og:description'] = "2023年7月より放送され、第二期制作も決定した、テレビアニメ「わたしの幸せな結婚」。満を持して、企画展の開催が決定。";
$settings['css1'] = "{$settings['rootdir']}/css/common";
$settings['twitter_id']      = "@watakon_ten";
$cash_clear = date('YmdHi');

// 設定ファイル
$settings['propdir']        = "{$settings['docroot']}/../programs/prop";

// テンプレート
$settings['templates_dir']  = "{$settings['docroot']}/inc";


include_once("{$settings['lib']}/common/common_func.inc");

?>
