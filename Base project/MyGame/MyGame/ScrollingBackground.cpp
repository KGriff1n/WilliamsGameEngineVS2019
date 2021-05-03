
#include "ScrollingBackground.h"
#include "Explosion.h"
#include "GameScene.h"
const float SPEED = .5f;

Background::Background(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite_.setPosition(pos);
	assignTag("Background");
	
}
void Background::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}
