#pragma once
#include "Core.h"
#include "PANE/Scene/SceneManager.h"
#include <iostream>

namespace PANE
{
	class PANE_API Game
	{
	public:
		Game();
		~Game();

		void Run();
		virtual void Update();
	
		void Stop() { m_running = false; }

	protected:
		sf::RenderWindow m_window;
		SceneManager m_sceneManager;
		float m_deltaTime;

	private:
		bool m_running;

		void PollEvents();
		void Draw();
	};
}

