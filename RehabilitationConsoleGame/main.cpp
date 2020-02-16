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



	// ‹ó”’
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}
	SleepBar();
	SleepCout("cin‚Å ~‚ß‚Ä‚é‚©‚ç “K“–‚È•¶š‚ğ “ü—Í‚µ‚Ä Enter‚ğ ‰Ÿ‚µ‚Ä‚Ë ‚»‚¤‚µ‚½‚çƒQ[ƒ€I—¹‚¾I");
	std::string temp = "";
	std::cin >> temp;

	return 0;
}