
#pragma once
#include "Engine/GameEngine.h"
class laser : public GameObject
{
public:
	laser(sf::Vector2f pos);
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;

};
typedef std::shared_ptr<laser> laserPtr;
