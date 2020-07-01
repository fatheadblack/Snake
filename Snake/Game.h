//little update on the mac



#pragma once


#include <SFML/Graphics.hpp>
#include <chrono>
#include "Snake.h"



class Game
{


	sf::RenderWindow* window;

	Snake* snake;
	



public:



	Game();

	virtual ~Game();

	sf::Clock clock;
	float dt;

	// Functions

	void run();
	void initwindow();
	void initSnake();

	void update();
	void updatePollEvents();
	void render();





};



