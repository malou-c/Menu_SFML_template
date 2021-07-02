#include "ScenesManager.h"
ScenesManager::ScenesManager() {
}

// ��������� ������ ����� pullEvent 
void ScenesManager::Update(sf::Event event) {
	switch (sceneNumber)
	{
	case SCENE_MENU:
		menuScene.Update(event);
		break;
	case SCENE_LEVEL:
		levelsScene.Update(event);
		break;
	case SCENE_GAME:
		gameScene.Update(event);
		break;
	case SCENE_END:
		// ������ �� ������ � ����������
		break;
	default:
		break;
	}
}


void ScenesManager::Draw(sf::RenderWindow& window) {
	switch (sceneNumber)
	{
	case SCENE_MENU:
		menuScene.Draw(window);
		break;
	case SCENE_LEVEL:
		levelsScene.Draw(window);
		break;
	case SCENE_GAME:
		gameScene.Draw(window);
		break;
	case SCENE_END:
		window.close(); // ��������� ����������
		break;
	default:
		break;
	}
}