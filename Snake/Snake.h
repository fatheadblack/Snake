#pragma once


#include"Block.h"

#include<list>


class Snake
{

public:

	Snake() = default;

	Snake(int xpos, int ypos);

	//Variables
	bool died;


	//Functions
	//void drawSnake();
	void updateSnake();
	void moveSnake();
	void checkWalls();
	void checkTail();
	int getxposition();
	int getyposition();
	void render(sf::RenderTarget& target);
	std::list<Block>::iterator getSnakebody();

private:


	enum direction {RIGHT = 1, LEFT, UP, DOWN};
	
	direction dir = RIGHT;
	std::list<Block> snakebody;
	std::list<Block>::iterator it;
	int x_position;
	int y_position;
	


};
