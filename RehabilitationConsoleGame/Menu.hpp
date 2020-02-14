#pragma once
#include "Basic.hpp"



class Menu
{
private:
	bool m_isReset;
	bool m_isEnd;
	bool m_isSaveFileHave;

	int m_entirety;


public:
	Menu()
	{
		m_isReset = false;
		m_isEnd = false;

		m_entirety = -1;

		FileReaderWrite::Init();

		m_isSaveFileHave = false;
		m_isSaveFileHave = FileReaderWrite::FileCSVRead("save.csv");
	}
	~Menu() {}


	int Update();
};

