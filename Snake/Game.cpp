#include<iostream>
#include "Game.h"



Game::Game() {


	initwindow();
	initSnake();
	//dt = clock.restart().asMicroseconds();


}

Game::~Game()
{

	delete window;

}

void Game::run()
{
	while (window->isOpen() ) //&& snake->died == false)
	{
		update();
		render();
		
	}

	
}

void Game::initwindow()
{

	window = new sf::RenderWindow(sf::VideoMode(1584, 1264), "Snake", sf::Style::Close | sf::Style::Titlebar);
	window->setFramerateLimit(18);
}

void Game::initSnake()
{
	snake = new Snake(600,450);


}



// Functions
void Game::update()
{
	


		//std::cout << dt << std::endl;


		updatePollEvents();

		snake->moveSnake();

		
		
		snake->updateSnake();

		

		//dt = clock.restart().asMicroseconds();

	

	

}

void Game::updatePollEvents()
{

	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();



		if (event.type == sf::Event::KeyPressed)
		{

			if (event.key.code == sf::Keyboard::Escape)
			{
				window->close();
			} 

			if (event.key.code == sf::Keyboard::Space)
			{
				snake->growSnake();
			}

			if (event.key.code == sf::Keyboard::Right && snake->dir != Snake::direction::LEFT)
			{

				snake->dir = Snake::direction::RIGHT;
				//snake->growSnake();
			}

			if (event.key.code == sf::Keyboard::Left && snake->dir != Snake::direction::RIGHT)
			{
				
				snake->dir = Snake::direction::LEFT;
				//snake->growSnake();

			}

			if (event.key.code == sf::Keyboard::Up && snake->dir != Snake::direction::DOWN)
			{

				snake->dir = Snake::direction::UP;
				//snake->growSnake();

			}

			if (event.key.code == sf::Keyboard::Down && snake->dir != Snake::direction::UP)
			{

				snake->dir = Snake::direction::DOWN;
				//snake->growSnake();
			}

			


		}
		

	}

}


void Game::render()
{
	window->clear();

	//board.render(window);
	snake->render(*window);

	//window->draw(snake);
	window->display();

}




