#pragma once
#include "Inventory.h"

struct Hero
{
	short health = 100;
	short intelegence = 2;
	char choise[20] = "";
	char choise1[20] = "";
    Inventory inventory;
};
