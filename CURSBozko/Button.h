#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "IGuiElement.h"
#include "Scenes.h"
using namespace sf;

class Button : public IGuiElement
{
public: // переменные
private: // переменные
	bool isSelected = false; // выбрана ли кнопка
	int transitionSceneNum = SCENE_MENU; // по умолчанию переходная сцена это меню
	// для текста
	Font font;
	Texture texture;
	// для спрайта
	Text text;
	Sprite sprite;

public: // конструкторы и методы
	Button(std::string name, Vector2f pos);

	void Draw(RenderWindow& window) override;
	void Update() override;
	// геттеры сеттеры
	void SetSelect(bool flag);
	void SetTransitionSceneNum(enum scenes);
	int GetTransitionSceneNum();

private: // конструкторы и методы
};

