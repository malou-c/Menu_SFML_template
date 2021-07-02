#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"
#include "SceneController.h"
class SceneMenu : public SceneController
{
public: // ����������
private:// ����������
	Button playButton = Button("play", sf::Vector2f(100, 50));
	Button optionsButton = Button("options", sf::Vector2f(100, 150));
	Button backButton = Button("exit", sf::Vector2f(100, 250));

public: // ����������� � ������
	SceneMenu();
	SceneMenu(int* sceneNumber);
	void Update(sf::Event event) override;

private: // ������
	void UpdateAllButtons();

};

