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

class Character
{

private:
	Shape *characterModel;
	double speed;
	//TODO
	// implement vision/fov

public:
	virtual void move() = 0;
	virtual void shoot() = 0;

}; //end class