#include "SceneGame.h"
SceneGame::SceneGame() {
}

SceneGame::SceneGame(int* sceneNumber) {
	this->sceneNumber = sceneNumber;

	backButton.SetTransitionSceneNum(SCENE_LEVEL);
	buttons.push_back(backButton);
	// текст кликера
	font.loadFromFile("../Fonts/origin.ttf");
	textCounterClick.setFont(font); // шрифт
	textCounterClick.setCharacterSize(150); // размер шрифта
	textCounterClick.setFillColor(sf::Color::Black); // цвет
	textCounterClick.setPosition(sf::Vector2f(100, 250)); // позиция
	textCounterClick.setString("Click: " + std::to_string(counterClick)); // текст
}

void SceneGame::Update(sf::Event event) {
	// полностью переписываем логику кнопок UI потому что мы в сцене предполагаемой игры
	if (event.type == Event::KeyPressed) {
		switch (event.key.code)
		{
		case sf::Keyboard::Escape: // нажатие Enter для перехода на другую сцену
			*sceneNumber = buttons[currButton].GetTransitionSceneNum(); // меняем сцену
			break;
		default:
			// при нажатии на любую клавишу текст на экране будет меняться
			counterClick++;
			textCounterClick.setString("Click: " + std::to_string(counterClick));
			break;
		}
	}
	
}

void SceneGame::Draw(sf::RenderWindow& window) {
	// берем логику для отрисовки кнопок UI
	SceneController::Draw(window);
	// добавляем отрисовку текста
	window.draw(textCounterClick);
}