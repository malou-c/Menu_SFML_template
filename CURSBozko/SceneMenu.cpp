#include "SceneMenu.h"
SceneMenu::SceneMenu() {
}

SceneMenu::SceneMenu(int* sceneNumber) {
	this->sceneNumber = sceneNumber;
	// устанавливаем номера переходов для кнопок
	/* Пример берем кнопку playButton и через сеттер SetTransitionSceneNum
		устанавливаем сцену на которую мы должны перейти при нажатии
		и так проделываем для каждой кнопки */
	playButton.SetTransitionSceneNum(SCENE_LEVEL);
	optionsButton.SetTransitionSceneNum(SCENE_LEVEL);
	backButton.SetTransitionSceneNum(SCENE_END);

	buttons.push_back(playButton);
	buttons.push_back(optionsButton);
	buttons.push_back(backButton);
}

void SceneMenu::Update(sf::Event event) {
	// при перезаписи виртуальной функции берем её определение
	SceneController::Update(event);
	// то что добавили сверху
	UpdateAllButtons();
}

void SceneMenu::UpdateAllButtons() {
	for (int i = 0; i < (int)buttons.size(); i++) {
		if (i == currButton) {
			buttons[i].SetSelect(true); // подсвечиваем текущую кнопку
		}
		else {
			buttons[i].SetSelect(false);
		}
		buttons[i].Update();
	}
}
