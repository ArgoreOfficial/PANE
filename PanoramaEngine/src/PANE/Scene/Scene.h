#pragma once
#include "Core.h"
#include <SFML/Graphics.hpp>

namespace PANE
{
	class PANE_API Scene
	{ 
	public:
		Scene();
		~Scene();
		
		virtual void Update();
		void Draw(sf::RenderWindow& _window);

		void LoadTexture( const std::string& _filePath ) { m_texture.loadFromFile( _filePath ); };
		const sf::Texture& GetTexture() const { return m_texture; }

	private:
		sf::Texture m_texture;
	};
}

