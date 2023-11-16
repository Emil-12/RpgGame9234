#include "Game.h"


void Game::menu()
{
	std::cout << "m - START" << std::endl;
	std::cout << "w - EXIT" << std::endl;
	char menuChoice[2] = "";
	std::cin >> menuChoice;

	if (strcmp(menuChoice, "m") == 0)
	{
		world.location1();
	}
	else if (strcmp(menuChoice, "w") == 0)
	{
		std::cout << "Вы вышли из игры";
	}
}
