#pragma once


#include"Block.h"

#include<vector>


class Snake
{

public:

	Snake() = default;

	Snake(int xpos, int ypos);

	//Variables
	bool died;
	int snakesize;

	enum direction { RIGHT = 1, LEFT, UP, DOWN };
	direction dir = RIGHT;
	//Functions
	//void drawSnake();
	void updateSnake();
	void moveSnake();
	void growSnake();

	void checkWalls();
	void checkTail();

	int getxposition();
	int getyposition();
	
	void render(sf::RenderTarget& target);
	std::vector<Block>::iterator getSnakebody();

private:


	
	
	
	std::vector<Block> snakebody;
	std::vector<Block>::iterator it1;
	std::vector<Block>::iterator it2;
	int x_position;
	int y_position;
	


};
