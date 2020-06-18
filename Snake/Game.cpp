#include "Game.h"



Game::Game() {


	initwindow();
	initSnake();



}

Game::~Game()
{

	delete window;

}

void Game::run()
{
	while (window->isOpen())
	{
		update();
		render();
	}
}

void Game::initwindow()
{

	window = new sf::RenderWindow(sf::VideoMode(1200, 900), "Snake", sf::Style::Close | sf::Style::Titlebar);
	window->setFramerateLimit(60);
}

void Game::initSnake()
{
	snake = new Snake(600,450);



	//rect.setPosition(snake->getxposition(), snake->getyposition);

}



// Functions
void Game::update()
{

	updatePollEvents();
	snake->updateSnake();
	snake->moveSnake();


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


			if (event.key.code == sf::Keyboard::Space)
			{
				
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




