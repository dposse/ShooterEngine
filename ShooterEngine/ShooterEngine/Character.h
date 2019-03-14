///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Character.h
// Date: February 28, 2019
// Programmer: Daniel Posse             
//
// Description:
//	Generic character class - abstract class
//	Parent to Player and Enemy
//                                                                  
///////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.hpp>
#pragma once
using namespace sf;

class Character : public Drawable, public Transformable
{

private:
	Shape *characterModel;
	double speed;
	int health;
	//TODO
	// implement vision/fov

public:
	Character(Shape *shapeType);
	void move();
	void shoot();
	void draw(RenderTarget& target, RenderStates states) const override;

}; //end class