#include "GameScene.h"
#include "shaggy.h"
#include "MeteorSpawner.h"
#include "GameOverScene.h"
#include "Score.h"
#include "ScrollingBackground.h"
GameScene::GameScene() 
{
	BackgroundPtr backgroundspawn = std::make_shared<Background>();
	addGameObject(backgroundspawn);
	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);
	ScorePtr score = std::make_shared<Score>(sf::Vector2f(10.0f, 10.0f));
	addGameObject(score);
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);
}
int GameScene::getScore() 
	{
		return score_;
	}
void GameScene::increaseScore()
	{
		++score_;
	}
int GameScene::getLives()
{
	return lives_;
}
void GameScene::decreaseLives()
{
	
	  lives_= lives_ - 1;
	if (lives_ == 0)
	{
		
		GameOverScenePtr gameOverScene = std::make_shared<GameOverScene>(score_);
		GAME.setScene(gameOverScene);
	}
	
}