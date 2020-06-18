#include "Snake.h"

Snake::Snake(int xpos, int ypos)
{


	x_position = xpos;
	y_position = ypos;
	
	snakebody.push_back(Block(30, 30, this->getxposition(), this->getyposition()));
	it = snakebody.begin();
	
	
	
}

void Snake::render(sf::RenderTarget& target)
{
	target.draw(*it->getBlock());
}

std::list<Block>::iterator Snake::getSnakebody()
{
	return std::list<Block>::iterator();
}

void Snake::updateSnake()
{
	it->setBlock(this->getxposition(), this->getyposition());

}

void Snake::moveSnake()
{

	switch (dir)
	{
	case RIGHT:
		x_position += 30;
		break;
	case LEFT:
		x_position -= 30;
		break;
	case UP:
		y_position -= 30;
		break;
	case DOWN:
		y_position += 30;
		break;

	}
}

void Snake::checkWalls()
{
}

void Snake::checkTail()
{
}

int Snake::getxposition()
{
	return x_position;
}

int Snake::getyposition()
{
	return y_position;
}

