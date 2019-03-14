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

public:
	Player(float radius);
	void move();
	void shoot();
	//void draw(RenderTarget& target, RenderStates states) const override;

};
