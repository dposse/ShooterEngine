///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: GameWindow.h
// Date: February 28, 2019
// Programmer: Daniel Posse             
//
// Description:
//  Creates game window
//	Wrapper outside of main so that it can be placed into stage 
//	creation window (or other windows) in the future
//                                                                  
///////////////////////////////////////////////////////////////////////

#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class GameWindow : public RenderWindow
{

private:

public:
	GameWindow();

}; //end class