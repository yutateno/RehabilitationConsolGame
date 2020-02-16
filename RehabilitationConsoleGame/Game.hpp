#pragma once
#include "Basic.hpp"
#include "ACT.hpp"
#include "ASCIIArt.hpp"
#include <Windows.h>


class Game
{
private:
	int m_act;
	int m_enemy;
	int m_dice[100];

	int m_entirety;


public:
	Game()
	{
		m_act = false;
		m_enemy = 0;
		std::random_device rnd;     // 非決定的な乱数生成器を生成
		std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
		std::uniform_int_distribution<> rand0600(0, 600);        // [0, 5] 範囲の一様乱数
		m_enemy = rand0600(mt);

		for (int i = 0; i != 100; ++i)
		{
			m_dice[i] = 0;
		}

		m_entirety = 0;
	}
	~Game() {}


	void Update();
};

