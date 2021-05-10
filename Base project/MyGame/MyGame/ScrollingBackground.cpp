
#include "ScrollingBackground.h"
#include "Explosion.h"
#include "GameScene.h"
const float SPEED = .1f;


Background::Background(sf::Vector2f pos)
{
	

	sprite1_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite2_.setTexture(GAME.getTexture("Resources/background.png"));
	
	sprite1_.setPosition(pos);
	pos.x += 800;
	sprite2_.setPosition(pos);
	assignTag("Background");

}



void Background::draw()
{
	GAME.getRenderWindow().draw(sprite1_);
	GAME.getRenderWindow().draw(sprite2_);
}

void Background::update(sf::Time& elapsed)
{

	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite1_.getPosition();
	if (pos.x < sprite1_.getGlobalBounds().width*-1)
	{
		pos.x = 800;
	}
 sprite1_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
	pos = sprite2_.getPosition();
	if (pos.x < sprite2_.getGlobalBounds().width * -1)
	{
		pos.x = 800;
	}
  
   sprite2_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
}
