#include "Menu.hpp"



/// ----------------------------------------------------------------------------------------------
int Menu::Update()
{
	// ゲームの開始確認
	SleepBar();
	SleepCout("ゲームを 始めますか？");
	SleepNull();
	SleepCout("始めるなら 1を");
	SleepCout("始めないなら 0を");
	while (true)
	{
		InputFail(m_entirety);
		
		if (m_entirety != 0 && m_entirety != 1)
		{
			SleepCout("0 か 1を入力してください。");
		}
		else break;
	}


	// ゲームを終了
	if (!m_entirety) return 0;


	// 空白
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}


	// 前回データがあった場合、消すか使うかどうか
	if (m_isSaveFileHave)
	{
		m_entirety = -1;

		SleepBar();
		SleepCout("前回データが あります。");
		SleepCout("タスクは 完了しましたか？");
		SleepCout("消して 最初から やりますか？");
		SleepCout("それとも タスクに 追加しますか？");
		SleepNull();
		SleepCout("タスクに 追加するなら 1を");
		SleepCout("全部 消すなら 0を");
		while (true)
		{
			InputFail(m_entirety);

			if (m_entirety != 0 && m_entirety != 1)
			{
				SleepCout("0 か 1を入力してください。");
			}
			else break;
		}


		if (m_entirety == 0)
		{
			std::vector<std::vector<std::string>> map;
			map.clear();

			if (!FileReaderWrite::FileCSVWrite("save.csv", map)) return -1;
		}
	}


	// ゲームの開始宣言
	SleepCout("はじめま");


	// 空白
	for (int i = 0; i != 100; ++i)
	{
		SleepNull(20);
	}
	SleepBar();


	return 1;
}
