#pragma once
#include "SceneController.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Button.h"
class SceneGame : public SceneController
{
	public: // переменные
	private:// переменные
		// для текста кликера
		sf::Font font;
		sf::Text textCounterClick;
		int counterClick = 0; // счетчик кликов
		// кнопки
		Button backButton = Button(" back", sf::Vector2f(250, 700)); 

	public: // конструктор и методы
		SceneGame();
		SceneGame(int* sceneNumber);
		void Update(sf::Event event) override;
		void Draw(sf::RenderWindow& window) override;
	private: // методы
};

