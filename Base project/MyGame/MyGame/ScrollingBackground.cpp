
#include "ScrollingBackground.h"
#include "Explosion.h"
#include "GameScene.h"
const float SPEED = .1f;


Background::Background(sf::Vector2f pos)
{
	

	sprite1_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite1_.setPosition(pos);
	assignTag("Background");

}
Background::Background1(sf::Vector2f pos1)
{
	sprite2_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite2_.setPosition(pos1);
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
	if (pos.x < sprite1_.getGlobalBounds().width * -1)
	{
		pos.x = 800;
	}

	sf::Vector2f pos1 = sprite2_.getPosition();
	if (pos1.x < sprite2_.getGlobalBounds().width * -1)
	{
		pos1.x = 800;
	}
   sprite1_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
   sprite2_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
}
