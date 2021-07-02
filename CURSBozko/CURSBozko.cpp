
#include <SFML/Graphics.hpp>
#include <filesystem>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "MyProject/CURSBozko/CURSBozko/Button.h"
using namespace sf; // подключаем пространство имен sf

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 820), "SFML Works!");
	
	Clock clock; //создаем переменную времени, т.о. привязка ко времени(а не загруженности/мощности процессора).

	
	Button b = Button();
	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asMicroseconds(); //дать прошедшее время в микросекундах
		clock.restart(); //перезагружает время
		time = time / 800; //скорость игры


		// Обрабатываем очередь событий в цикле
		Event event;
		window.setKeyRepeatEnabled(false); // отключаем повторение нажатой клавиши
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				window.close(); // тогда закрываем его
			if (event.type == Event::KeyPressed) {
				switch (event.key.code)
				{
				case Keyboard::Up:
					std::cout << 1 << std::endl;
					break;
				case Keyboard::Down:
					std::cout << 2 << std::endl;
					break;
				default:
					break;
				}
			}
		}
		// Установка цвета фона
		window.clear(Color(250, 220, 100, 0));
		
		// Отрисовка
		window.draw(spt);
		// Отрисовка окна
		window.display();
	}

	return 0;
}