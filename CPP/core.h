#pragma once
#include <SFML/Graphics.hpp>

namespace d_engine
{	
	class core
	{
	private:
		sf::RenderWindow* window_;

		void update();

	public:
		core();
		~core();

		void initialize(unsigned int window_width, unsigned int window_height);
		void stop();
	};
}

