#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "IGuiElement.h"
#include "Scenes.h"
using namespace sf;

class Button : public IGuiElement
{
public: // ����������
private: // ����������
	bool isSelected = false; // ������� �� ������
	int transitionSceneNum = SCENE_MENU; // �� ��������� ���������� ����� ��� ����
	// ��� ������
	Font font;
	Texture texture;
	// ��� �������
	Text text;
	Sprite sprite;

public: // ������������ � ������
	Button(std::string name, Vector2f pos);

	void Draw(RenderWindow& window) override;
	void Update() override;
	// ������� �������
	void SetSelect(bool flag);
	void SetTransitionSceneNum(enum scenes);
	int GetTransitionSceneNum();

private: // ������������ � ������
};

