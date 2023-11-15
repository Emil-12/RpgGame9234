#include <iostream>
#include <Windows.h>
#include "Init.h"
#include "Game.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Game game;
	game.menu();
}