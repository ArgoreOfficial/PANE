#pragma once
#include <PANE.h>
#include <iostream>

class MyGame : public PANE::Game
{
public:
	MyGame();
	~MyGame();
	void Update();
};
