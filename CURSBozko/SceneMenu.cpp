#include "SceneMenu.h"
SceneMenu::SceneMenu() {
}

SceneMenu::SceneMenu(int* sceneNumber) {
	this->sceneNumber = sceneNumber;
	// ������������� ������ ��������� ��� ������
	/* ������ ����� ������ playButton � ����� ������ SetTransitionSceneNum
		������������� ����� �� ������� �� ������ ������� ��� �������
		� ��� ����������� ��� ������ ������ */
	playButton.SetTransitionSceneNum(SCENE_LEVEL);
	optionsButton.SetTransitionSceneNum(SCENE_LEVEL);
	backButton.SetTransitionSceneNum(SCENE_END);

	buttons.push_back(playButton);
	buttons.push_back(optionsButton);
	buttons.push_back(backButton);
}

void SceneMenu::Update(sf::Event event) {
	// ��� ���������� ����������� ������� ����� � �����������
	SceneController::Update(event);
	// �� ��� �������� ������
	UpdateAllButtons();
}

void SceneMenu::UpdateAllButtons() {
	for (int i = 0; i < (int)buttons.size(); i++) {
		if (i == currButton) {
			buttons[i].SetSelect(true); // ������������ ������� ������
		}
		else {
			buttons[i].SetSelect(false);
		}
		buttons[i].Update();
	}
}
