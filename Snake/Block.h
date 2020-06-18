#pragma once

#include <SFML/Graphics.hpp>


class Block 
{

public:

	//Constructors
	Block() = default;
	Block(int a, int b, int x, int y, int ssize);

	//variables
	enum direction { RIGHT = 1, LEFT, UP, DOWN };
	direction segdir = RIGHT;

	//Functions
	sf::RectangleShape* getBlock();
	void setBlock(int x, int y);
	void setBlock(sf::Vector2f v);
	sf::Vector2f getPosition();



	



	sf::RectangleShape segment;
	
	sf::Vector2f dims;

	

	




};