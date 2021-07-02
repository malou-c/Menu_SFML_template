#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Button.h"

class SceneController
{
protected:
	int* sceneNumber = 0; // указатель на текущую сцену берем из SceneManager
	int currButton = 0; // текущая кнопка (нужна для сцен меню)
	std::vector<Button> buttons; // вектор кнопок UI
public:
	SceneController();
	virtual void Update(sf::Event event);
	virtual void Draw(sf::RenderWindow& window);
};

