#include "Game/MyGame.h"

int main()
{
	MyGame* game = new MyGame();
	game->Run();
	delete game;
}
