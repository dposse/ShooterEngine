///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Character.cpp
// Date: March 14, 2019
// Programmer: Daniel Posse             
//
// Description:
//	Generic character class - abstract class
//	Parent to Player and Enemy
//                                                                  
///////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.hpp>
#include "Character.h"
using namespace sf;



	//Character() : Character(new CircleShape(20.f)) {}
	Character::Character(Shape *shapeType) {
		characterModel = shapeType;
		speed = 0;
		health = 1;
	}

	void Character::move() {}
	void Character::shoot() {}

	void Character::draw(RenderTarget& target, RenderStates states) const
	{

		target.draw(*characterModel, states);

	}
