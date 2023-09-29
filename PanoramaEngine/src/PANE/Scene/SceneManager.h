#pragma once
#include "Scene.h"
#include <map>
#include <string>

namespace PANE
{
	class PANE_API SceneManager
	{ 
	public:
		SceneManager();
		~SceneManager();
		
		unsigned int RegisterScene( const Scene& _scene );
		void UnregisterScene( unsigned int _id );
		void SetCurrentScene( unsigned int _id );
		void DrawCurrentScene( sf::RenderWindow& _window );
		void Update();

	private:
		Scene* m_currentScene;
		std::map<unsigned int, Scene> m_scenes;
		unsigned int m_totalSceneIDs;
		sf::Shader m_sphereMapShader;
	};
}

