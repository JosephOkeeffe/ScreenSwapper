#include <iostream> 
#include "Splash.h"
#include "Game.h"



SplashScreen::SplashScreen()
{
}


SplashScreen::~SplashScreen()
{
}

void SplashScreen::initialise(sf::Font& t_font)
{
	
	message.setFont(t_font);
	message.setString("Press any space to continue");
	message.setCharacterSize(32);
	message.setStyle(sf::Text::Bold);
	message.setFillColor(sf::Color::Red);
}

void SplashScreen::input(sf::Event t_event)
{
	if (t_event.type == sf::Event::KeyPressed)
	{
		if (t_event.key.code == sf::Keyboard::Space)
		{
			splashTrue = true;
		}
	}
}
void SplashScreen::update(sf::Time t_deltaTime)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right))
	{
		splashTrue = true;
	}
	if (splashTrue)
	{
		Game::currentState = GameState::MainMenu;
	}
	splashTrue = false;
}

void SplashScreen::render(sf::RenderWindow& t_window)
{
	//t_window.draw(shape);
	t_window.draw(message);
}