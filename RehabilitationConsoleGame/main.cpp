#include "Menu.hpp"
#include "Game.hpp"



int main()
{
	Menu m_menu = Menu();

	if (m_menu.Update() == 0)
	{
		return 0;
	}

	Game m_game = Game();
	
	m_game.Update();



	// ��
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}
	SleepBar();
	SleepCout("cin�� �~�߂Ă邩�� �K���ȕ����� ���͂��� Enter�� �����Ă� ����������Q�[���I�����I");
	std::string temp = "";
	std::cin >> temp;

	return 0;
}