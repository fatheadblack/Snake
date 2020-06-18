#pragma once


#include <SFML/Graphics.hpp>
#include "Snake.h"


class Game
{


	sf::RenderWindow* window;

	Snake* snake;
	



public:

	Game();

	virtual ~Game();


	// Functions

	void run();
	void initwindow();
	void initSnake();

	void update();
	void updatePollEvents();
	void render();





};



