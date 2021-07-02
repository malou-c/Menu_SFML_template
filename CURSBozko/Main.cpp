
#include <SFML/Graphics.hpp>
#include <filesystem>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Button.h"
#include "SceneMenu.h"
#include "ScenesManager.h"

using namespace sf; // подключаем пространство имен sf

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 820), "Clicker");
	// объявляем объект класса менеджера сцен
	ScenesManager scenesManager = ScenesManager();
	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		window.setKeyRepeatEnabled(false); // отключаем повторение нажатой клавиши
		Event event;
		// Обрабатываем очередь событий в цикле
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				window.close(); // тогда закрываем его

			// метод обновления менеджера
			scenesManager.Update(event);
		}
		// Установка цвета фона (очистка фона)
		window.clear(Color(250, 220, 100, 0));
		// Отрисовка
		scenesManager.Draw(window);
		// Отрисовка окна
		window.display();
	}

	return 0;
}