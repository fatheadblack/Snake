#include "Block.h"

Block::Block(int a, int b, int x, int y, int ssize)
{
	dims.x = a;
	dims.y = b;

	segment.setSize(dims);
	segment.setOrigin(15, 15);
	if (ssize == 0)
		segment.setFillColor(sf::Color::Yellow);
	else
		segment.setFillColor(sf::Color::Red);
	segment.setPosition(x, y);

	
	

}

sf::RectangleShape* Block::getBlock()
{
	return &segment;
}

void Block::setBlock(int x, int y)
{

	segment.setPosition(x, y);


}

void Block::setBlock(sf::Vector2f v)
{

	segment.setPosition(v);

}

sf::Vector2f Block::getPosition()
{
	return sf::Vector2f();
}





