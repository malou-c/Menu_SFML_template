#include "SceneLevel.h"
SceneLevel::SceneLevel() {
}

SceneLevel::SceneLevel(int* sceneNumber) {
	this->sceneNumber = sceneNumber;

	lvl1Button.SetTransitionSceneNum(SCENE_GAME);
	lvl2Button.SetTransitionSceneNum(SCENE_GAME);
	lvl3Button.SetTransitionSceneNum(SCENE_GAME);
	backButton.SetTransitionSceneNum(SCENE_MENU);

	buttons.push_back(lvl1Button);
	buttons.push_back(lvl2Button);
	buttons.push_back(lvl3Button);
	buttons.push_back(backButton);
}

void SceneLevel::Update(sf::Event event) {
	// ��� ���������� ����������� ������� ����� � �����������
	SceneController::Update(event);
	// �� ��� �������� ������
	UpdateAllButtons();
}

void SceneLevel::UpdateAllButtons() {
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