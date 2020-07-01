#include "Snake.h"

Snake::Snake(int xpos, int ypos)
{

	died = false;
	x_position = xpos;
	y_position = ypos;
	snakesize = 0;
	

	snakebody.push_back(Block(32, 32, this->getxposition(), this->getyposition(), snakesize));
	snakesize++;
	
	snakebody.push_back(Block(32, 32, this->getxposition()-32, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(32, 32, this->getxposition()-64, this->getyposition(), snakesize));
	snakesize++;


	snakebody.push_back(Block(32, 32, this->getxposition() -96 , this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(32, 32, this->getxposition() - 128, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(32, 32, this->getxposition() - 160, this->getyposition(), snakesize));
	snakesize++;


	snakebody.push_back(Block(32, 32, this->getxposition() - 192, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(32, 32, this->getxposition() - 224, this->getyposition(), snakesize));
	snakesize++;
	snakebody.push_back(Block(32, 32, this->getxposition() - 256, this->getyposition(), snakesize));
	snakesize++;


	//it1 = snakebody.begin();
	
	
	
	
}

void Snake::render(sf::RenderTarget& target)
{

	for (int i = 0; i <snakesize; i++)
		target.draw(*snakebody[i].getBlock());

	/*for (it1 = snakebody.begin(); it1 != snakebody.end(); ++it1)
	target.draw(*it1->getBlock());*/
}

std::vector<Block>::iterator Snake::getSnakebody()
{
	return std::vector<Block>::iterator();
}

void Snake::updateSnake()
{
	
	

	died = this->checkWalls();
	
	snakebody[1].segment.setFillColor(sf::Color::Yellow);

	if (died == false)
	{
		for (int i = snakesize - 1; i > 0; i--)
		{

			snakebody[0].setBlock(this->x_position, this->y_position);

			snakebody[i].setBlock(snakebody[i - 1].segment.getPosition());


		}
	}
}

void Snake::moveSnake()
{

	switch (dir)
	{
	case RIGHT:
		x_position += 32;
		break;
	case LEFT:
		x_position -= 32;
		break;
	case UP:
		y_position -= 32;
		break;
	case DOWN:
		y_position += 32;
		break;

	}
}

void Snake::growSnake()
{

	//This is the grow code
	snakebody.push_back(Block(32, 32, snakebody[snakesize -1].segment.getPosition().x, snakebody[snakesize - 1].segment.getPosition().y ,snakesize));
	snakesize++;

}

bool Snake::checkWalls()
{

	/*if (snakebody[0].getPosition().x > 1170)
		snakebody[0].segment.setPosition(1170, this->y_position);
		*/

	if (snakebody[0].segment.getPosition().x > 1568 || snakebody[0].segment.getPosition().x < 0 || snakebody[0].segment.getPosition().y < 32 || snakebody[0].segment.getPosition().y > 1248)

		//snakebody[1].segment.setPosition(1568, this->y_position);

		return true;

	else

		return false;
	

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

