#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
#include <vector>
#include "meteor.h"
#include "player.h"

class Game {
private:
	sf::RenderWindow window;
	std::vector<Meteor*> meteors;
	Player player;
public:
	Game() {
		window.create(sf::VideoMode{ (size_t)WINDOW_WIDTH, (size_t)WINDOW_HEIGHT }, "game");
		window.setFramerateLimit(FPS);
	}

	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}
	}
	void update() {
		player.update();
	}

	void checkColisions() {}

	void draw() {
		window.clear();
		window.draw(player.getSprite());
		window.display();
	}

	void play() {
		while (window.isOpen())
		{
			checkEvents();
			update();
			checkColisions();
			draw();
		}
	}
};