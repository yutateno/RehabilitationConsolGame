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


	// セーブファイルがあった場合、消すか使うかどうか
	if (m_isSaveFileHave)
	{
		m_entirety = -1;

		SleepBar();
		SleepCout("前回データが あります。");
		SleepCout("引き続き やりますか？");
		SleepCout("消して 最初から やりますか？");
		SleepNull();
		SleepCout("続けるなら 1を");
		SleepCout("消すなら 0を");
		while (true)
		{
			InputFail(m_entirety);

			if (m_entirety != 0 && m_entirety != 1)
			{
				SleepCout("0 か 1を入力してください。");
			}
			else break;
		}
	}


	// ゲームの開始宣言
	SleepCout("はじめま");


	// 空白
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}


	return 1;
}
