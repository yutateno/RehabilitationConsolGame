#include "ACT.hpp"



/// ----------------------------------------------------------------------------------------------
std::string ACT::CoutAct(int t_act)
{
	std::random_device rnd;     // 非決定的な乱数生成器を生成
	std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
	std::uniform_int_distribution<> rand0600(0, 600);        // [0, 5] 範囲の一様乱数
	int temp = rand0600(mt);


	switch (t_act)
	{
		// プログラマ
	case 1:
		if (temp < 20) return "ゲーム遊べ！";
		else if (temp >= 20 && temp < 40) return "インベーダーゲーム作ってください";
		else if (temp >= 40 && temp < 60) return "テトリス作ってください";
		else if (temp >= 60 && temp < 80) return "パックマン作ってください";
		else if (temp >= 80 && temp < 100) return "横スクロールシューティング作ってください";
		else if (temp >= 100 && temp < 120) return "縦スクロールシューティング作ってください";
		else if (temp >= 120 && temp < 140) return "球と四角形のあたり判定作ってください";
		else if (temp >= 140 && temp < 160) return "楕円と円のあたり判定作ってください";
		else if (temp >= 160 && temp < 180) return "xboxコントローラーでバイブレーションの処理作ってください";
		else if (temp >= 180 && temp < 200) return "これまでに作ったゲームのどれかをアンドロイドで遊べるようにしてください";
		else if (temp >= 200 && temp < 220) return "四角形と楕円のあたり判定を作ってください";
		else if (temp >= 220 && temp < 240) return "気持ちのいいジャンプ処理を作ってください";
		else if (temp >= 240 && temp < 260) return "三角形と球のあたり判定を作ってください";
		else if (temp >= 260 && temp < 280) return "ブロック崩しを作ってください";
		else if (temp >= 280 && temp < 300) return "XORを利用した暗号化処理を作ってください";
		else if (temp >= 300 && temp < 320) return "好きなゲーム会社を列挙し、その会社のホームページを眺めてください";
		else if (temp >= 320 && temp < 340) return "好きなゲームを列挙し、なぜ好きなのか詳しく書いてください";
		else if (temp >= 340 && temp < 360) return "Chromeのネットワーク障害時に出てくる恐竜ゲームと同じようなものを作ってください";
		else if (temp >= 360 && temp < 380) return "Qiitaと検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 380 && temp < 400) return "ヒットストップ処理を作ってください";
		else if (temp >= 400 && temp < 420) return "画面揺らし処理を作ってください";
		else if (temp >= 420 && temp < 440) return "タスク管理ツールを作ってください";
		else if (temp >= 440 && temp < 460) return "CEDiLを検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 460 && temp < 480) return "https://www.youtube.com/channel/UCqNJ5JdhNakfPQBYwroizPQ でも見てください";
		else if (temp >= 480 && temp < 500) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA でも見てください";
		else if (temp >= 500 && temp < 520) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA でも見てください";
		else if (temp >= 520 && temp < 540) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ でも見てください";
		else if (temp >= 540 && temp < 560) return "BGMにエフェクトをかけて、水に入ってくぐもったような音を流すような処理を作ってください";
		else if (temp >= 560 && temp < 580) return "フェードアウトとフェードインをsin波のような流れで切り替えるようにしてください";
		else if (temp >= 580 && temp <= 600) return "シーンの切り替えで必ずBGMがゆっくり消えていくような処理を作ってください、ぶつ切りダメ";
		break;


		// デザイナー
	case 2:
		if (temp < 20) return "ゲーム遊べ！";
		else if (temp >= 20 && temp < 40) return "好きなゲーム会社を列挙し、その会社のホームページを眺めてください";
		else if (temp >= 40 && temp < 60) return "好きなゲームを列挙し、なぜ好きなのか詳しく書いてください";
		else if (temp >= 60 && temp < 80) return "itch.ioと検索してそのページから面白そうなゲームを遊んでみてください";
		else if (temp >= 80 && temp < 100) return "Udemyと検索してそのページから面白そうなものを眺めてください、あわよくば買え";
		else if (temp >= 100 && temp < 120) return "Qiitaと検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 120 && temp < 140) return "CEDiLを検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 140 && temp < 160) return "https://www.youtube.com/channel/UCqNJ5JdhNakfPQBYwroizPQ でも見てください";
		else if (temp >= 160 && temp < 180) return "https://www.youtube.com/channel/UCPljC4d-GgdFgVqtoCZ3m_w でも見てください";
		else if (temp >= 180 && temp < 200) return "https://www.youtube.com/channel/UCCdskievdAtH6AtPeEfTqEg でも見てください";
		else if (temp >= 200 && temp < 220) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA でも見てください";
		else if (temp >= 220 && temp < 240) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA でも見てください";
		else if (temp >= 240 && temp < 260) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ でも見てください";
		else if (temp >= 260 && temp < 280) return "斜め上からの視点で8方向向きの勇者を作ってください";
		else if (temp >= 280 && temp < 300) return "斜め上からの視点で128x64で水たまりを作ってください";
		else if (temp >= 300 && temp < 320) return "剣を持った勇者が、何者かに剣をはじかれて、剣を失うアニメーションを作ってください";
		else if (temp >= 320 && temp < 340) return "夜廻(https://www.youtube.com/watch?v=lqYLmZlFNLA)の主人公をドット絵で作ってください";
		else if (temp >= 340 && temp < 360) return "ボイド・テラリウム（https://www.youtube.com/watch?v=D3HATlNTXmk）のトリコをドット絵で作ってください";
		else if (temp >= 360 && temp < 380) return "ボイド・テラリウム（https://www.youtube.com/watch?v=D3HATlNTXmk）のロボットをドット絵で作ってください";
		else if (temp >= 380 && temp < 400) return "ホロウナイト（https://www.youtube.com/watch?v=UAO2urG23S4）の3Dモデルを作ってください";
		else if (temp >= 400 && temp < 420) return "軽く揺れている水面と歩行によって揺れる水面を作ってください";
		else if (temp >= 420 && temp < 440) return "これまでに作ったの中で一番頑張ったやつのポスターを作ってください";
		else if (temp >= 440 && temp < 460) return "パッと目についたものをドットか絵か3Dで作ってください";
		else if (temp >= 460 && temp < 480) return "剣を左手に持っているとして、攻撃をするアニメーションを作ってください";
		else if (temp >= 480 && temp < 500) return "オリキャラでも好きなキャラでもいいからその子に帽子をつけてあげてください";
		else if (temp >= 500 && temp < 520) return "オリキャラでも好きなキャラでもいいからその子に羽をつけてあげてください";
		else if (temp >= 520 && temp < 540) return "オリキャラでも好きなキャラでもいいからその子にリボンをつけてあげてください";
		else if (temp >= 540 && temp < 560) return "これまでのキャラクターに対して2Pカラーを作ってください";
		else if (temp >= 560 && temp < 580) return "自分の名刺を考えてみよ";
		else if (temp >= 580 && temp <= 600) return "敵っぽい敵を作ってください";
		break;


		// サウンド
	case 3:
		if (temp < 20) return "ゲーム遊べ！";
		else if (temp >= 20 && temp < 40) return "好きなゲーム会社を列挙し、その会社のホームページを眺めてください";
		else if (temp >= 40 && temp < 60) return "好きなゲームを列挙し、なぜ好きなのか詳しく書いてください";
		else if (temp >= 60 && temp < 80) return "itch.ioと検索してそのページから面白そうなゲームを遊んでみてください";
		else if (temp >= 80 && temp < 100) return "Udemyと検索してそのページから面白そうなものを眺めてください、あわよくば買え";
		else if (temp >= 100 && temp < 120) return "Qiitaと検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 120 && temp < 140) return "ゼルダの伝説ブレスオブザワイルドのインタラクティブサウンドについて検索して記事を眺めてください";
		else if (temp >= 140 && temp < 160) return "CEDiLを検索してそのページから面白そうな記事を眺めてください";
		else if (temp >= 160 && temp < 180) return "https://www.youtube.com/channel/UCur4IQj5lSk3xMyh3p0qSmQ でも見てください";
		else if (temp >= 180 && temp < 200) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA でも見てください";
		else if (temp >= 200 && temp < 220) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA でも見てください";
		else if (temp >= 220 && temp < 240) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ でも見てください";
		else if (temp >= 240 && temp < 260) return "水たまりからジャンプする瞬間のSEを作ってください";
		else if (temp >= 260 && temp < 280) return "乾いた砂漠地帯を走るSEを作ってください";
		else if (temp >= 280 && temp < 300) return "外で雨が降っている校舎内にいるときに流れるBGMを作ってください";
		else if (temp >= 300 && temp < 320) return "https://twitter.com/CAPCOM_SOUND でも眺めてください";
		else if (temp >= 320 && temp < 340) return "金属と金属がぶつかるSEを作ってください";
		else if (temp >= 340 && temp < 360) return "中が空洞の壁を叩いて聞こえるSEを作ってください";
		else if (temp >= 360 && temp < 380) return "と水たまりに着地する瞬間のSEを作ってください";
		else if (temp >= 380 && temp < 400) return "中が空洞じゃない壁を叩いて聞こえるSEを作ってください";
		else if (temp >= 400 && temp < 420) return "普通の床をヒールで歩いたときに聞こえるSEを作ってください";
		else if (temp >= 420 && temp < 440) return "水たまりを走るSEを作ってください";
		else if (temp >= 440 && temp < 460) return "途中からループ位置があり途中でループ終わりがあるようなBGMを作ってください（何もなければこれをイメージとして https://www.youtube.com/watch?v=7MxLG9qgHQ0）";
		else if (temp >= 460 && temp < 480) return "https://www.youtube.com/watch?v=_3Vi6l3vZDc をテンポを速めて愉快な感じにアレンジしたBGMを作ってください";
		else if (temp >= 480 && temp < 500) return "https://www.youtube.com/watch?v=77ZmyNytfLs から暗いイメージを加えたアレンジのBGMを作ってください";
		else if (temp >= 500 && temp < 520) return "https://www.youtube.com/watch?v=pDgflOcHNnM をピアノでアレンジしたBGMを作ってください（場面は例えば草原）";
		else if (temp >= 520 && temp < 540) return "https://www.youtube.com/watch?v=Y0viP67wNqk をピアノ使わないでアレンジしたBGMを作ってください（場面は例えばラスボス）";
		else if (temp >= 540 && temp < 560) return "https://www.youtube.com/watch?v=quuobMmZ0nU を丸パクリして作ってください、アレンジしてもいい、面白い";
		else if (temp >= 560 && temp < 580) return "ドアの開閉SEを作って、それを使ってBGMを作ってください";
		else if (temp >= 580 && temp <= 600) return "コーヒーを沸かすSEを作って、それを使ってBGMを作ってください";
		break;


	default:
		break;
	}

	return "エラーだねぇ";
}
