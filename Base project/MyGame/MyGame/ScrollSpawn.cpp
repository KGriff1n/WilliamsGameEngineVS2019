/*#pragma once
#include "ScrollSpawn.h"
const int SPAWN_DELAY = 1500;
void ScrollSpawner::update(sf::Time& elapsed)
{
	int msElapsed = elapsed.asMilliseconds();
	timer_ -= msElapsed;
	if (timer_ <= 0)
	{
		timer_ = SPAWN_DELAY;
		sf::Vector2u size = GAME.getRenderWindow().getSize();
		float  backgroundX = (float)(100);
		float backgroundY = (float)(0);
		BackgroundPtr background = std::make_shared<Background>(sf::Vector2f(backgroundX, backgroundY));
		GAME.getCurrentScene().addGameObject(background);

	}
}
*/