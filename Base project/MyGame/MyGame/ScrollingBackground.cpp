
#include "ScrollingBackground.h"
#include "Explosion.h"
#include "GameScene.h"
const float SPEED = .1f;

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

void Background::update(sf::Time& elapsed)
{

	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();
	if (pos.x < sprite_.getGlobalBounds().width * -1)
	{
		makeDead();
	}
	
   sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
	
}
