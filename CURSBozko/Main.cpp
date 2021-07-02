
#include <SFML/Graphics.hpp>
#include <filesystem>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"
#include "SceneMenu.h"
#include "ScenesManager.h"

using namespace sf; // ���������� ������������ ���� sf

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(800, 820), "Clicker");
	// ��������� ������ ������ ��������� ����
	ScenesManager scenesManager = ScenesManager();
	// ������� ���� ����������: �����������, ���� ������� ����
	while (window.isOpen())
	{
		window.setKeyRepeatEnabled(false); // ��������� ���������� ������� �������
		Event event;
		// ������������ ������� ������� � �����
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				window.close(); // ����� ��������� ���

			// ����� ���������� ���������
			scenesManager.Update(event);
		}
		// ��������� ����� ���� (������� ����)
		window.clear(Color(250, 220, 100, 0));
		// ���������
		scenesManager.Draw(window);
		// ��������� ����
		window.display();
	}

	return 0;
}