#include "Scene.h"
namespace PANE
{
	Scene::Scene()
	{ 
		
	}
	Scene::~Scene()
	{ 
	
	}
	void Scene::Update()
	{ 
	
	}
	void Scene::Draw( sf::RenderWindow& _window )
	{ 
		sf::Sprite sprite( m_texture );
		_window.Draw( sprite );
	}
}