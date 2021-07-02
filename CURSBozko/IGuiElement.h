#pragma once
#include <SFML/Graphics.hpp>
class IGuiElement
{
public:
	virtual void Update() = 0;
	virtual void Draw(sf::RenderWindow& window) = 0;
};

