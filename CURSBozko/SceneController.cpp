#include "SceneController.h"

SceneController::SceneController() {

}

void SceneController::Update(sf::Event event) {
	if (event.type == Event::KeyPressed) {
		switch (event.key.code)
		{
		case sf::Keyboard::Down: // если листаем меню вниз
			currButton += currButton < buttons.size() - 1 ? 1 : 0;
			break;
		case sf::Keyboard::Up: // если листаем меню вверх
			currButton += currButton > 0 ? -1 : 0;
			break;
		case sf::Keyboard::Enter: // нажатие Enter для перехода на другую сцену
			*sceneNumber = buttons[currButton].GetTransitionSceneNum(); // меняем сцену
			break;
		default:
			break;
		}
	}
	
}

void SceneController::Draw(sf::RenderWindow& window) {

	for (int i = 0; i < (int)buttons.size(); i++) {
		buttons[i].Draw(window);
	}
}