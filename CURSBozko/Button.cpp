#include "Button.h"
Button::Button(std::string name, Vector2f pos) {
	// загружаем шрифт
	font.loadFromFile("../Fonts/origin.ttf");
	text.setFont(font);
	text.setFillColor(Color::Black);
	text.setString(name);
	text.setPosition(pos + Vector2f(20, 20));

	// инициализируем кнопку
	texture.loadFromFile("../Images/Button.png");
	sprite.setTexture(texture);
	sprite.setPosition(pos);
}

void Button::Update() {
	if (isSelected) {
		sprite.setColor(Color::Red);
	}
	else {
		sprite.setColor(Color::White); // установка белого цвета обнуляет цвет
	}
}
void Button::Draw(RenderWindow& window) {
	window.draw(sprite);
	window.draw(text);
}

void Button::SetSelect(bool flag) {
	isSelected = flag;
}
void Button::SetTransitionSceneNum(enum scenes transitionScene) {
	transitionSceneNum = transitionScene;
}

int Button::GetTransitionSceneNum() {
	return transitionSceneNum;
}