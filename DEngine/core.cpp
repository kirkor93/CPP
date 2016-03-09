#include "core.h"
#include <SFML/Graphics.hpp>

d_engine::core::core()
{
	window_ = nullptr;
}


d_engine::core::~core()
{
}

void d_engine::core::update()
{
	sf::Event event;
	while (window_ != nullptr && window_->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			stop();	
			return;
		}
	}

	window_->clear();
	window_->display();
}

void d_engine::core::initialize(unsigned window_width, unsigned window_height)
{
	if(window_ != nullptr)
	{
		stop();
	}
	window_ = new sf::RenderWindow(sf::VideoMode(window_width, window_height), "D_Engine");

	while (window_ != nullptr)
	{
		update();
	}
}

void d_engine::core::stop()
{
	if(window_ == nullptr)
	{
		return;
	}

	window_->close();
	delete window_;
	window_ = nullptr;
}
