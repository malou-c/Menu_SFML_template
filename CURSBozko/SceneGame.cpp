#include "SceneGame.h"
SceneGame::SceneGame() {
}

SceneGame::SceneGame(int* sceneNumber) {
	this->sceneNumber = sceneNumber;

	backButton.SetTransitionSceneNum(SCENE_LEVEL);
	buttons.push_back(backButton);
	// ����� �������
	font.loadFromFile("../Fonts/origin.ttf");
	textCounterClick.setFont(font); // �����
	textCounterClick.setCharacterSize(150); // ������ ������
	textCounterClick.setFillColor(sf::Color::Black); // ����
	textCounterClick.setPosition(sf::Vector2f(100, 250)); // �������
	textCounterClick.setString("Click: " + std::to_string(counterClick)); // �����
}

void SceneGame::Update(sf::Event event) {
	// ��������� ������������ ������ ������ UI ������ ��� �� � ����� �������������� ����
	if (event.type == Event::KeyPressed) {
		switch (event.key.code)
		{
		case sf::Keyboard::Escape: // ������� Enter ��� �������� �� ������ �����
			*sceneNumber = buttons[currButton].GetTransitionSceneNum(); // ������ �����
			break;
		default:
			// ��� ������� �� ����� ������� ����� �� ������ ����� ��������
			counterClick++;
			textCounterClick.setString("Click: " + std::to_string(counterClick));
			break;
		}
	}
	
}

void SceneGame::Draw(sf::RenderWindow& window) {
	// ����� ������ ��� ��������� ������ UI
	SceneController::Draw(window);
	// ��������� ��������� ������
	window.draw(textCounterClick);
}