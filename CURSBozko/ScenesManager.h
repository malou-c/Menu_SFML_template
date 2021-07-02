#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "SceneMenu.h"
#include "SceneLevel.h"
#include "SceneGame.h"
#include "Scenes.h"

class ScenesManager
{
private:
	int sceneNumber = SCENE_MENU;
	SceneMenu menuScene = SceneMenu(&sceneNumber);
	SceneLevel levelsScene = SceneLevel(&sceneNumber);
	SceneGame gameScene = SceneGame(&sceneNumber);
public:
	ScenesManager();
	void Update(sf::Event event);
	void Draw(sf::RenderWindow& window);
};

