#pragma once
#include "SceneController.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"
class SceneLevel : public SceneController
{
	public: // переменные
	private:// переменные
		Button lvl1Button = Button("level 1", sf::Vector2f(100, 50));
		Button lvl2Button = Button("level 2", sf::Vector2f(100, 150));
		Button lvl3Button = Button("level 3", sf::Vector2f(100, 250));
		Button backButton = Button(" back", sf::Vector2f(100, 350));

	public: // конструктор и методы
		SceneLevel();
		SceneLevel(int* sceneNumber);
		void Update(sf::Event event) override;

	private: // методы
		void UpdateAllButtons();
};

