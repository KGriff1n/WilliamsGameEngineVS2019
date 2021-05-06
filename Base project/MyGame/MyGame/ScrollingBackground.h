#pragma once

#include "Engine/GameEngine.h"
class Background : public GameObject
{
public:
	Background(sf::Vector2f pos);
	Background1(sf::Vector2f pos1);
	void draw();
	void update(sf::Time& elapsed);
	
private:
	sf::Sprite sprite1_;
	sf::Sprite sprite2_;
};
typedef std::shared_ptr<Background> BackgroundPtr;