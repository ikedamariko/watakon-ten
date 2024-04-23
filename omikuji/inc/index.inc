<?php
$title = "$page_ttl | ";
$page = "omikuji";
require_once("../common.php");
include_once("{$settings['docroot']}/inc/meta.inc");
include_once("{$settings['docroot']}/inc/header.inc");
?>
  
<div id="<?php echo $page?>" class="page_wrap wrap_contents">
	<div class="wrap_sakura">
		<div class="sakura_fixd">
			<div class="sakura">
			  <li><img src="img/kamifubuki1.png" alt=""></li>
			  <li><img src="img/kamifubuki2.png" alt=""></li>
			  <li><img src="img/kamifubuki3.png" alt=""></li>
			  <li><img src="img/kamifubuki2.png" alt=""></li>
			  <li><img src="img/kamifubuki3.png" alt=""></li>
			  <li><img src="img/kamifubuki2.png" alt=""></li>
			  <li><img src="img/kamifubuki3.png" alt=""></li>
			  <li><img src="img/kamifubuki2.png" alt=""></li>
			</div>
		</div>
	</div>

	<div class="wrap_contents_inner">
		<div class="page_ttl page">
         <div class="wrap_page_ttl">
            <h1>
				   <p><img class="image" src="img/ttl_new_year.png" alt="謹賀新年"></p>
				   <p class="new_year_txt">あけましておめでとうございます。<br>
				   手始めに今年の運勢を占ってみましょう。</p>
				</h1>
				<div class="event_start">
					<p class="anime_name">
						<span>テレビアニメ「わたしの幸せな結婚」展</span><br>
						1<span>月</span>5<span>日(金)</span>より東京会場展示開始！
					</p>
				</div>
         </div>
      </div>
		
		<div class="primary">
			<div class="uranai_area">
				<p class="kiyoka"><img class="image" src="img/kiyoka.png?20231222"></p>
				<p class="miyo"><img class="image" src="img/miyo.png?20231222"></p>
				<p id="start" class="start img_omikuji">
					<img class="image" id="rotate" src="img/omikuji.png" alt="おみくじ">
				</p>
			</div>
			<div class="btn_uranau">
				<button id="draw" class="heart-button">
					<img class="image" src="img/btn_uranau.png" alt="おみくじを引く！" />
				</button>
			</div>
			
			<div class="result_contents">
				<div id="fortune" class="fortune"></div>
				
				<div class="result_omikuji" style="display: none;">
					<div id="result_daikichi" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>大吉</span>
								<img class="image" src="img/result/result_daikichi.png" />
							</h2>
							<div class="message border_btm">
								大切な人に自分の気持ちを伝えるチャンス。美世のように勇気を出してみよう。
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">第十二話「暗闇の中の光」<br>映像体験</dd>
									<dd><img class="image" src="img/result/area/daikichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											第十二話「暗闇の中の光」のダイジェスト映像を、大型スクリーンで体感。映像に連動した照明演出で、あの感動のシーンをお楽しみいただきます。
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">扇子</dd>
									<dd><img class="image" src="img/result/goods/daikichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											末広がりの縁起のよいアイテム。普段使いはもちろん、和装でのお出かけにもぴったり。
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【大吉】大切な人に自分の気持ちを伝えるチャンス。美世のように勇気を出してみよう。『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
						
					</div><?php /*?>result_daikichi<?php */?>
					
					<div id="result_kichi" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>吉</span>
								<img class="image" src="img/result/result_kichi.png" />
							</h2>
							<div class="message border_btm">
								美世と清霞が初めて出会った書斎のように、大切な思い出の場所に訪れると、よいことがありそう！
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">久堂清霞の書斎</dd>
									<dd><img class="image" src="img/result/area/kichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											二人の出会いの場である「久堂清霞の書斎」を再現。書斎のガラス戸の外には、時間によって移り変わる景色や、第一話の本編映像が投影されます。
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">がま口</dd>
									<dd><img class="image" src="img/result/goods/kichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											金運を呼ぶとも言われているがま口。かわいらしい桜の模様で、小物入れにもぴったりです。
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【吉】美世のように、誰かのために料理をすると、素敵な日になる予感…！『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
					</div><?php /*?>result_kichi<?php */?>
					
					<div id="result_chuukichi" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>中吉</span>
								<img class="image" src="img/result/result_chuukichi.png" />
							</h2>
							<div class="message border_btm">
								美世のように、誰かのために料理をすると、素敵な日になる予感…！
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">第二話「旦那さまという御方」<br>映像体験</dd>
									<dd><img class="image" src="img/result/area/chuukichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											第二話「旦那さまという御方」朝食シーンを、映像展示などでお楽しみいただきます。
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">湯呑</dd>
									<dd><img class="image" src="img/result/goods/chuukichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											わた婚アニメのイラストを使用した湯飲み。和菓子と一緒にほっと一息、いかがでしょうか？
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【中吉】美世や清霞のように、大切な方へ贈り物をすると、よいことがありそう！『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
					</div><?php /*?>result_chuukichi<?php */?>
					
					<div id="result_shoukichi" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>小吉</span>
								<img class="image" src="img/result/result_shoukichi.png" />
							</h2>
							<div class="message border_btm">
								美世や清霞のように、大切な方へ贈り物をすると、よいことがありそう！
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">第四話「おくりもの」<br>サラウンド音声体験</dd>
									<dd><img class="image" src="img/result/area/shoukichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											第四話「おくりもの」にて、美世が清霞に組み紐を贈るシーンのサラウンド音声体験をお楽しみいただきます。
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">組み紐ストラップキーホルダー</dd>
									<dd><img class="image" src="img/result/goods/shoukichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											美世が清霞に贈った組み紐をイメージしたストラップ。桜がついてかわいらしいです。
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【小吉】大切な人との会話を大事にすると、よいことがありそう！『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
					</div><?php /*?>result_shoukichi<?php */?>
					
					<div id="result_suekichi" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>末吉</span>
								<img class="image" src="img/result/result_suekichi.png" />
							</h2>
							<div class="message border_btm">
								大切な人との会話を大事にすると、よいことがありそう！
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">心ときめく<br>録り下ろしボイス</dd>
									<dd><img class="image" src="img/result/area/suekichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											斎森美世（CV.上田麗奈）と久堂清霞（CV.石川界人）による、企画展録り下ろしボイスでお出迎え。
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">ボイス付きアクリルスタンド</dd>
									<dd><img class="image" src="img/result/goods/suekichi.jpg" /></dd>
									<dd>
										<div class="data_txt">
											斎森美世（CV #上田麗奈 ）と久堂清霞（CV #石川界人） による特別ボイスを、美麗な描き下ろしビジュアルとともにお楽しみください。
											<br>
											試聴はこちらから<br>
<blockquote class="twitter-tweet"><p lang="ja" dir="ltr">🌸 <a href="https://twitter.com/hashtag/%E3%82%8F%E3%81%9F%E5%A9%9A%E5%B1%95?src=hash&amp;ref_src=twsrc%5Etfw">#わた婚展</a> グッズ紹介🌸<br>ボイス付きアクリルスタンド描き下ろし<br>※試聴あり<br><br>斎森美世（CV <a href="https://twitter.com/hashtag/%E4%B8%8A%E7%94%B0%E9%BA%97%E5%A5%88?src=hash&amp;ref_src=twsrc%5Etfw">#上田麗奈</a> ）と久堂清霞（CV <a href="https://twitter.com/hashtag/%E7%9F%B3%E5%B7%9D%E7%95%8C%E4%BA%BA?src=hash&amp;ref_src=twsrc%5Etfw">#石川界人</a>） による特別ボイスを、美麗な描き下ろしビジュアルとともに🌸ˎˊ˗<br><br>わた婚展グッズ一覧はこちらから！<a href="https://t.co/mYVZoefkt4">https://t.co/mYVZoefkt4</a><a href="https://twitter.com/hashtag/%E3%82%8F%E3%81%9F%E3%81%97%E3%81%AE%E5%B9%B8%E3%81%9B%E3%81%AA%E7%B5%90%E5%A9%9A?src=hash&amp;ref_src=twsrc%5Etfw">#わたしの幸せな結婚</a> <a href="https://twitter.com/hashtag/%E3%82%8F%E3%81%9F%E5%A9%9A%E3%82%A2%E3%83%8B%E3%83%A1?src=hash&amp;ref_src=twsrc%5Etfw">#わた婚アニメ</a> <a href="https://t.co/MazS9GcJs2">pic.twitter.com/MazS9GcJs2</a></p>&mdash; テレビアニメ「わたしの幸せな結婚」展【公式】 (@watakon_ten) <a href="https://twitter.com/watakon_ten/status/1735643991167893604?ref_src=twsrc%5Etfw">December 15, 2023</a></blockquote> <script async src="https://platform.twitter.com/widgets.js" charset="utf-8"></script>
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【末吉】大切な人との会話を大事にすると、よいことがありそう！『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
					</div><?php /*?>result_suekichi<?php */?>
					
					<div id="result_kyou" class="fortune">
						<div class="result_wrap_contents">
							<h2>
								<span>凶</span>
								<img class="image" src="img/result/result_kyou.png" />
							</h2>
							<div class="message border_btm">
								”ときめき”の詰まったわた婚展に行くと、幸せな気持ちになれそう！
							</div>
							<div class="spot border_btm">
								<dl>
									<dt>ラッキースポット</dt>
									<dd class="ttl">テレビアニメ<br>「わたしの幸せな結婚」展</dd>
									<dd><img class="image" src="img/result/area/kyou.jpg" /></dd>
									<dd>
										<div class="data_txt">
											2024年1月5日（金）～23日（日）にて、「テレビアニメ『わたしの幸せな結婚』展」開催！
										</div>
										<p class="page_link">
											<a href="/features/">
												<img class="image" src="img/btn_midokoro.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
							<div class="item">
								<dl>
									<dt>ラッキーアイテム</dt>
									<dd class="ttl">トレーディングアクリルお守り</dd>
									<dd><img class="image" src="img/result/goods/kyou.jpg" /></dd>
									<dd>
										<div class="data_txt">
											かわいらしいちびキャラのお守り。どれが当たるかは買ってからのお楽しみ！
										</div>
										<p class="page_link">
											<a href="/goods/">
												<img class="image" src="img/btn_goods.png" />
											</a>
										</p>
									</dd>
								</dl>
							</div>
						</div>
						
						<p class="result_share btn_share heart-button">
							<a href="http://twitter.com/share?url=<?php echo $settings['domain']?><?php echo $settings['rootdir']?>/omikuji/&text=【凶】”ときめき”の詰まったわた婚展に行くと、幸せな気持ちになれそう！『テレビアニメ「わたしの幸せな結婚」展』は1月５日（金）より開催！&hashtags=わた婚展新春おみくじ <?php echo $settings['twitter_id']?>" target="_blank" rel="noopener noreferrer nofollow"><img class="image" src="img/btn_share.png" alt="twitter"></a>
						</p>
					</div><?php /*?>result_suekichi<?php */?>
					
					<p class="reload">
						<button class="btn" type="button">←もう一度占う</button>
					</p>
					
				</div><?php /*?>result_omikuji<?php */?>
			</div><?php /*?>result_contents<?php */?>
        
		</div><?php /*?>primary<?php */?>
	</div><?php /*?>page_wrap wrap_contents<?php */?>
</div><?php /*?>wrap_contents_inner<?php */?>


<script>
    const results = [
      'result_daikichi',
      'result_kichi',
      'result_chuukichi',
      'result_shoukichi',
      'result_suekichi',
      'result_kyou',
    ];

    const elem = document.getElementById('draw');
    const element = document.getElementById('start');
    const rotateItem = document.getElementById('rotate');
    const target = document.getElementById('draw'); // ID を "draw" に変更
    const resultOmikuji = document.querySelector('.result_omikuji');

    elem.addEventListener('click', function() {
      if (element != null) {
        tatefuri();
      }
    });

    function tatefuri() {
      element.animate(
        [
          {
            transform: 'translateY(0)',
          },
          {
            transform: 'translateY(-45px)',
          },
          {
            transform: 'translateY(0)',
          },
        ],
        {
          duration: 700,
          iterations: 3,
        }
      );
      setTimeout(function() {
        kaiten();
      }, 2400);
    }

    function kaiten() {
      element.animate(
        [
          {
            transform: 'rotate(0deg)',
          },
          {
            transform: 'rotate(180deg)',
          },
        ],
        {
          duration: 700,
          easing: 'linear',
          fill: 'forwards',
        }
      );
      setTimeout(function() {
        touka();
        btn();
      }, 1000);
    }

    function btn() {
      target.animate(
        [
          {
            opacity: 1,
          },
          {
            opacity: 0,
          },
        ],
        {
          duration: 500,
          fill: 'forwards',
        }
      );
      setTimeout(function() {
        target.remove();
        // 結果が表示されるアニメーション後に表示
        resultOmikuji.style.display = 'block';
        fortuneAnime();
      }, 500);
    }

    function touka() {
      element.animate(
        [
          {
            opacity: 1,
          },
          {
            opacity: 0,
          },
        ],
        {
          duration: 500,
          fill: 'forwards',
        }
      );
      setTimeout(function() {
        element.remove();
      }, 500);
    }

    function fortuneAnime() {
      const key = Math.floor(Math.random() * results.length);
      const fortune = document.getElementById("fortune");
      const resultToShow = document.getElementById(results[key]);
      const elementsToHide = [
        document.querySelector('.page_ttl.page'),
        document.querySelector('.kiyoka'),
        document.querySelector('.miyo')
      ];

      // 非表示にする
      for (const element of elementsToHide) {
        if (element) {
          element.style.display = "none";
        }
      }

      // 他の結果も非表示にする
      for (const result of results) {
        document.getElementById(result).style.display = "none";
      }

      resultToShow.style.display = "block"; // 表示
      fortune.animate(
        [
          {
            transform: 'translateY(0) scale(1)',
          },
          {
            transform: 'translateY(-45px)',
          },
          {
            transform: 'scale(1)',
          },
          {
            transform: 'scale(1.1)',
          },
          {
            transform: 'translateY(0) scale(1)',
          },
        ],
        {
          duration: 1000,
          fill: 'forwards',
        }
      );
    }
    
	//もう一度占う
	document.querySelector('.btn').addEventListener('click', ()=>{
	    location.reload();
	}, false);
</script>

<?php include_once("{$settings['docroot']}/inc/footer.inc"); ?>
