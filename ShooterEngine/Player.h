///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Player.h
// Date: March 12, 2019
// Programmer: Daniel Posse             
//
// Description:
//	Player object, inherits from Character
//                                                                  
///////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.hpp>
#include "Character.h"
#pragma once
using namespace sf;

class Player : public Character
{

private:
	Shape *playerModel;
	//playerModel = new CircleShape(5.f);

public:
	Player(Shape &shapeType);
	void move();
	void shoot();

};
