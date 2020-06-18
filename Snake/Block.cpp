#include "Block.h"

Block::Block(int a, int b, int x, int y)
{
	dims.x = a;
	dims.y = b;

	segment.setSize(dims);
	segment.setOrigin(15, 15);
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





