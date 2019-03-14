///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Player.cpp
// Date: March 14, 2019
// Programmer: Daniel Posse             
//
// Description:
//	Player object, inherits from Character
//                                                                  
///////////////////////////////////////////////////////////////////////

#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;


	//Player::Player() : Player(20.f) {}
	Player::Player(float radius) : Character(new CircleShape(20.f)) {}

	void Player::move() {



	} //end move

	void Player::shoot() {



	} //end shoot

