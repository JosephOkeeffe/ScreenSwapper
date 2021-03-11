#include <iostream> 
#include "Menu.h"
#include "Game.h"



MainMenu::MainMenu()
{
}


MainMenu::~MainMenu()
{
}

void MainMenu::initialise(sf::Font& t_font)
{

	message.setFont(t_font);
	message.setString("SMILE");
	message.setCharacterSize(32);
	message.setStyle(sf::Text::Bold);
	message.setFillColor(sf::Color::Blue);
}

void MainMenu::input(sf::Event t_event)
{
	if (t_event.type == sf::Event::KeyPressed)
	{
		if (t_event.key.code == sf::Keyboard::Space)
		{
			menuTrue = true;
		}
	}
}


void MainMenu::update(sf::Time t_deltaTime)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		menuTrue = true;
	}
	if (menuTrue)
	{
		Game::currentState = GameState::Game;
	}
	menuTrue = false;
}

void MainMenu::render(sf::RenderWindow& t_window)
{
	t_window.draw(message);
}
