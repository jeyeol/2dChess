// 2Dchess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "src/header/GameEngine.h"
int main(int argc, char* argv[])
{
	GameEngine engine;
	while (true)
	{
		engine.Engine();
	}
    std::cout << "Hello World!\n"; 
	return 0;
}

