#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Button.h"

class SceneController
{
protected:
	int* sceneNumber = 0; // ��������� �� ������� ����� ����� �� SceneManager
	int currButton = 0; // ������� ������ (����� ��� ���� ����)
	std::vector<Button> buttons; // ������ ������ UI
public:
	SceneController();
	virtual void Update(sf::Event event);
	virtual void Draw(sf::RenderWindow& window);
};

