#include "PANE.h"

namespace PANE
{
	Game::Game():
		m_window( sf::VideoMode( 256, 256 ), "Game!" ),
		m_running(true)
	{ 
		std::cout << "PanoramaEngine Loaded!\n";
		
	}

    Game::~Game()
    { 
		
	}

	void Game::Run()
	{
		sf::Clock deltaClock;
		while ( m_running )
		{
			m_deltaTime = deltaClock.restart().asSeconds();

			PollEvents();
			Update();
			Draw();
		}
		m_window.close();
	}

	// poll and handle sfml events
	void Game::PollEvents()
	{
		sf::Event event;
		while ( m_window.pollEvent( event ) )
		{
			if ( event.type == sf::Event::Closed )
			{
				// end the program
				m_running = false;
			}
		}
	}

	void Game::Update()
	{
		m_sceneManager.Update();
	}

	void Game::Draw()
	{ 

	}
}
