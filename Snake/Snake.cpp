#include "Snake.h"

Snake::Snake(int xpos, int ypos)
{


	x_position = xpos;
	y_position = ypos;
	snakesize = 0;
	

	snakebody.push_back(Block(30, 30, this->getxposition(), this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition()-30, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition()-60, this->getyposition(), snakesize));
	snakesize++;


	snakebody.push_back(Block(30, 30, this->getxposition() -90 , this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition() - 120, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition() - 150, this->getyposition(), snakesize));
	snakesize++;


	snakebody.push_back(Block(30, 30, this->getxposition() - 180, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition() - 210, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(30, 30, this->getxposition() - 240, this->getyposition(), snakesize));
	snakesize++;


	it1 = snakebody.begin();
	
	
	
	
}

void Snake::render(sf::RenderTarget& target)
{
	for (it1 = snakebody.begin(); it1 != snakebody.end(); ++it1)
	target.draw(*it1->getBlock());
}

std::vector<Block>::iterator Snake::getSnakebody()
{
	return std::vector<Block>::iterator();
}

void Snake::updateSnake()
{
	
	

	
	snakebody[0].setBlock(this->getxposition(), this->getyposition());
	snakebody[0].segment.setFillColor(sf::Color::Yellow);

		for (int i = snakesize - 1; i > 0; --i)
		{
			
			snakebody[i].setBlock(snakebody[i - 1].segment.getPosition());


		}

	
		
	
	
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

void Snake::growSnake()
{

	//This is the grow code
	snakebody.push_back(Block(30, 30, snakebody[snakesize -1].segment.getPosition().x, snakebody[snakesize - 1].segment.getPosition().y ,snakesize));
	snakesize++;

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

