///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: main.cpp
// Date: February 7, 2019
// Programmer: Daniel Posse             
//
// Description:
//    Goal is a game engine for a top down shooter
//	  Uses SFML open source library
//                                                                  
///////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Shape.hpp>
#include "GameWindow.h"
#include "Player.h"
using namespace sf;

int main()
{

	GameWindow gameWindow;
	//CircleShape player(20.f);
	Player player = Player(20.f);

	//main game loop
	while (gameWindow.isOpen())
	{

		//event processing
		Event event;
		while (gameWindow.pollEvent(event))
		{

			if (event.type == Event::Closed)
				gameWindow.close();

		} //end while

		gameWindow.clear();
		gameWindow.draw(player);
		gameWindow.display();

	} //end while

	return 0;

} //end main

//test example from tutorial to make sure library linking works
/*int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}*/