#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "FileReadWrite.hpp"
#include <random>


using namespace FRW;



inline void SleepCout(std::string t_str, int t_time = 250)
{
	std::cout << t_str << std::endl;
	Sleep(t_time);
}



inline void SleepBar(int t_time = 100)
{
	std::cout << "------------------------------" << std::endl;
	Sleep(t_time);
}



inline void SleepNull(int t_time = 100)
{
	std::cout << "\n" << std::flush;
	Sleep(t_time);
}



inline void  InputFail(int& t_input)
{
	std::string temp = "";

	while (true)
	{
		try
		{
			std::cin >> temp;
			t_input = std::stoi(temp);
		}
		catch (...)
		{
			SleepCout("不正な 数値が 入力 されました。再度 お願いします。");
			continue;
		}

		break;
	}

	return;
}