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

#include "GameWindow.h"
#include <SFML/Graphics.hpp>

//constructor
GameWindow::GameWindow() : RenderWindow(VideoMode(800, 600), "game window") {

	setFramerateLimit(60);

} //end constructor