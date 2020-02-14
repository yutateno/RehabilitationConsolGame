#include "Game.hpp"



/// ----------------------------------------------------------------------------------------------
int Game::Update()
{
		FileReaderWrite::Init();
	
		if (!FileReaderWrite::FileCSVRead("save.csv")) return -1;
	
		std::vector<std::vector<std::string>> map = FileReaderWrite::GetMapData();
	
		for (int i = 0; i != map.size(); ++i)
		{
			for (int j = 0; j != map[i].size(); ++j)
			{
				std::cout << map[i][j] << "\t";
			}
			std::cout << std::endl;
		}
	
	
		if (!FileReaderWrite::FileCSVWrite("test2.csv", map)) return -1;
}
