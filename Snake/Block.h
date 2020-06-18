#pragma once

#include <SFML/Graphics.hpp>


class Block 
{

public:

	Block() = default;
	Block(int a, int b, int x, int y);

	sf::RectangleShape* getBlock();
	void setBlock(int x, int y);

private:




	sf::RectangleShape segment;
	
	sf::Vector2f dims;

	

	




};