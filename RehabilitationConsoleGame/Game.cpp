#include "Game.hpp"



/// ----------------------------------------------------------------------------------------------
void Game::Update()
{
	// 敵出現
	SleepBar();
	SleepCout("敵が 現れた！");
	SleepNull();
	ASCIIArt::Draw(m_enemy);
	SleepNull();
	SleepCout("敵は 課題を 課してきた！");
	SleepCout("君は もちろん 抗うか？");
	SleepCout("抗うなら 1を");
	SleepCout("受け入れるなら 0を");
	while (true)
	{
		InputFail(m_entirety);

		if (m_entirety != 0 && m_entirety != 1)
		{
			SleepCout("0 か 1を入力してください。");
		}
		else break;
	}


	// 空白
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}


	// 課題を受け入れる
	if (m_entirety == 0)
	{
		// 役職の確認
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("受け入れる！？");
		SleepCout("そうか");
		SleepCout("なら まず 君の 役職を 教えて");
		SleepCout("プログラマーなら 1を");
		SleepCout("デザイナーなら 2を");
		SleepCout("サウンドクリエイターなら 3を");
		while (true)
		{
			InputFail(m_entirety);

			if (m_entirety != 1 && m_entirety != 2 && m_entirety != 3)
			{
				SleepCout("1 か 2 か 3を 入力して ください。");
			}
			else break;
		}


		// 空白
		for (int i = 0; i != 4; ++i)
		{
			SleepNull();
		}


		// 課題を提示
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("では 君への 課題は これだ");
		SleepNull();
		std::string str = ACT::CoutAct(m_entirety);
		SleepCout(str);
		SleepNull();
		SleepCout("ファイルにも 追記しとくから 忘れないようにね");
		SleepCout("そんじゃ");


		// 課題をファイルに入力
		FileReaderWrite::Init();
		std::vector<std::vector<std::string>> map;
		if (!FileReaderWrite::FileCSVRead("save.csv"))
		{
			map.clear();
		}
		else
		{
			map = FileReaderWrite::GetMapData();
		}
		std::vector<std::string> vstr;
		if (m_entirety == 1)
		{
			vstr.push_back("プログラマー");
		}
		else if (m_entirety == 2)
		{
			vstr.push_back("デザイナー");
		}
		else if (m_entirety == 3)
		{
			vstr.push_back("サウンドクリエイター");
		}
		vstr.push_back(str);
		map.push_back(vstr);

		FileReaderWrite::FileCSVWrite("save.csv", map);

		return;
	}
	// 課題を受け入れない
	else
	{
		// 余談
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("受け入れないなら 戦おうか");
		SleepCout("結局何もアイディア思いつかないままこんなよく分かんないの作りだしたから戦う方法もさいころによる適当なのだけどちょっと付き合ってよ");
		SleepNull();
		SleepCout("ということで さいころを 振るね");
		SleepNull();
		SleepCout("今から さいころ という名の 乱数(0~6)が 100個ほど 常に動くから SPACE を 押して 決めてね");
		SleepCout("cinで 無理やり止めてるから 適当な文字入れて Enterを 押したら 始まるよ");
		std::string tre = "";
		std::cin >> tre;


		// さいころの値を決める
		int count = 0;
		while (true)
		{
			SleepNull();
			SleepCout("君のタイミングで SPACEキーを 押してね");
			for (int i = 0; i != 100; ++i)
			{
				m_dice[i] = 0;
				std::random_device rnd;     // 非決定的な乱数生成器を生成
				std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
				std::uniform_int_distribution<> rand06(0, 6);        // [0, 5] 範囲の一様乱数
				m_dice[i] = rand06(mt);
				std::cout << m_dice[i] << " ";
				Sleep(10);
			}
			std::cout << "\n" << std::flush;
			if (GetAsyncKeyState(VK_SPACE))
			{
				SleepCout("それが 君の選択だね");
				break;
			}
		}


		// 数値勝負
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("まず 敵の数値は これだね");
		std::string eneStr = std::to_string(m_enemy);
		SleepCout(eneStr);
		SleepNull();
		SleepCout("そして 君の数値が これだ！");
		int sum = 0;
		for (int i = 0; i != 100; ++i)
		{
			sum += m_dice[i];
		}
		std::string myStr = std::to_string(sum);
		SleepCout(myStr);
		SleepNull(3000);


		// 空白
		for (int i = 0; i != 4; ++i)
		{
			SleepNull();
		}


		// 勝敗
		if (sum >= m_enemy)
		{
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("ほう 君の勝ちだ");
			SleepCout("じゃあね");
		}
		else
		{
			// 役職の確認
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("では 負けた 君に 課題を あげるね");
			SleepCout("そのために まず 君の 役職を 教えて");
			SleepCout("プログラマーなら 1を");
			SleepCout("デザイナーなら 2を");
			SleepCout("サウンドクリエイターなら 3を");
			while (true)
			{
				InputFail(m_entirety);

				if (m_entirety != 1 && m_entirety != 2 && m_entirety != 3)
				{
					SleepCout("1 か 2 か 3を 入力して ください。");
				}
				else break;
			}


			// 空白
			for (int i = 0; i != 4; ++i)
			{
				SleepNull();
			}
			// 課題を提示
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("では 君の 課題は これだ");
			SleepNull();
			std::string str = ACT::CoutAct(m_entirety);
			SleepCout(str);
			SleepNull();
			SleepCout("ファイルにも 追記しとくから 忘れないようにね");
			SleepCout("そんじゃ");


			// 課題をファイルに入力
			FileReaderWrite::Init();
			std::vector<std::vector<std::string>> map;
			if (!FileReaderWrite::FileCSVRead("save.csv"))
			{
				map.clear();
			}
			else
			{
				map = FileReaderWrite::GetMapData();
			}
			std::vector<std::string> vstr;
			if (m_entirety == 1)
			{
				vstr.push_back("プログラマー");
			}
			else if (m_entirety == 2)
			{
				vstr.push_back("デザイナー");
			}
			else if (m_entirety == 3)
			{
				vstr.push_back("サウンドクリエイター");
			}
			vstr.push_back(str);
			map.push_back(vstr);

			FileReaderWrite::FileCSVWrite("save.csv", map);

			return;
		}
	}
}
