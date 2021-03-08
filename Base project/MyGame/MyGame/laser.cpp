
#include "laser.h"

const float SPEED = 1.2f;
laser::laser(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/ laser.png"));
	sprite_.setPosition(pos);
	assignTag("laser");
}
void laser::update(sf::Time& elapsed)
{
	int msElsapsed = elapsed.asMilliseconds();

}
