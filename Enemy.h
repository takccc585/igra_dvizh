//#pragma once
//#include "settings.h"
//
//class Player;
//
//class	Enemy {
//public:
//	Enemy(sf::Vector2f meteorPos);
//	void update();
//	void draw(sf::RenderWindow& window);
//	bool isToDel();
//	auto getHitBox();
//	void setDel();
//
//private:
//	sf::Texture texture;
//	sf::Sprite sprite;
//	sf::Clock timer;
//	bool del = false;
//};
//
//Enemy::Enemy(sf::Vector2f enemyPos) {
//	/*int pos = rand() % 6;
//	if (pos == 1) {
//		sprite.setPosition(60.f, 60.f);
//	}
//	else if (pos == 2) {
//		sprite.setPosition(120.f, 120.f);
//	}
//	else if (pos == 3) {
//		sprite.setPosition(180.f, 180.f);
//	}
//	else if (pos == 4) {
//		sprite.setPosition(240.f, 240.f);
//	}
//	else if (pos == 5) {
//		sprite.setPosition(300.f, 300.f);
//	}
//	else if (pos == 6) {
//		sprite.setPosition(360.f, 360.f);
//	}*/
//	sprite.setPosition(enemyPos);
//	sprite.setTexture(texture);
//	timer.restart();
//}
//void Enemy::update() {
//	int now = timer.getElapsedTime().asMilliseconds();
//	if (now > 5000) {
//		del = true;
//	}
//}
//void Enemy::draw(sf::RenderWindow& window) {
//	window.draw(sprite);
//}
//bool Enemy::isToDel() { return del; }
//auto  Enemy::getHitBox() { return sprite.getGlobalBounds(); }
//void Enemy::setDel() { del = true; }