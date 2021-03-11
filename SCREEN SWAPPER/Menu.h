#pragma once

#include <SFML\Graphics.hpp>

class MainMenu
{
public:
	MainMenu();
	~MainMenu();
	 void initialise(sf::Font& t_font);
	 void render(sf::RenderWindow& t_window);
	 void input(sf::Event t_event);
	 void update(sf::Time t_deltaTime);

	 bool menuTrue = false;


	 sf::Text message;
	 

};
