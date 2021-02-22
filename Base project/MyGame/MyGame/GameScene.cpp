#include "GameScene.h"
#include "shaggy.h"
GameScene::GameScene() 
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);
}
