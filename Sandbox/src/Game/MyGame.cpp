#include "MyGame.h"

MyGame::MyGame()
{ 
	std::cout << "WOw!\n";
	
	PANE::Scene menuScene;

	m_sceneManager.RegisterScene( menuScene );
}

MyGame::~MyGame()
{ 

}

void MyGame::Update()
{
	
}