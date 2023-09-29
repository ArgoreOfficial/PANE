#include "SceneManager.h"

namespace PANE
{
	SceneManager::SceneManager():
		m_currentScene(nullptr),
		m_scenes(),
		m_totalSceneIDs(0)
	{
		//m_sphereMapShader.loadFromFile( "assets/shaders/White.frag", sf::Shader::Fragment );
	}

	SceneManager::~SceneManager() { }

	unsigned int SceneManager::RegisterScene( const Scene& _scene )
	{
		m_totalSceneIDs++;
		
		m_scenes[ m_totalSceneIDs ] = _scene;

		return m_totalSceneIDs;
	}

	void SceneManager::UnregisterScene( unsigned int _id )
	{ 
		if ( _id < 0 && _id >= m_scenes.size() ) return;

		m_scenes.erase( _id );
	}

	void SceneManager::SetCurrentScene( unsigned int _id )
	{
		if ( _id < 0 && _id >= m_scenes.size() ) return;
		if ( m_scenes.find( _id ) == m_scenes.end() ) return; // scene id doesn't exist

		m_currentScene = &m_scenes[ _id ];
	}

	void SceneManager::DrawCurrentScene(sf::RenderWindow& _window)
	{
		
	}

    void SceneManager::Update()
    { 
		m_currentScene->Update();
	}

}