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



int main()
{



	return 0;

} //end main

//test example from tutorial to make sure library linking works
/*
#include <SFML/Graphics.hpp>

int main()
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