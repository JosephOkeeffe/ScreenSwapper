#pragma once

#include <SFML\Graphics.hpp>

class SplashScreen
{
public:
	SplashScreen();
	~SplashScreen();
	void initialise(sf::Font& t_font);
	void render(sf::RenderWindow& t_window);
	void input(sf::Event t_event);
	void update(sf::Time t_deltaTime);

	bool splashTrue = false;

	sf::RectangleShape shape;
	sf::Text message;
	


};

