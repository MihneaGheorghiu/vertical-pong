#include "stdafx.h"
//#include "bat.h"

// This the constructor and it is called when we create an object
Bat::Bat(float startX, float startY)
{
	position.x = startX;
	position.y = startY;

	batShape.setSize(sf::Vector2f(50, 15));
	batShape.setPosition(position);
	batShape.setFillColor(sf::Color::Red);
	batShape.setOutlineColor(sf::Color::Black);
	batShape.setOutlineThickness(2);

	
}

FloatRect Bat::getPosition()
{
	return batShape.getGlobalBounds();
}

RectangleShape Bat::getShape()
{
	return batShape;
}

void Bat::moveLeft()
{
	if(position.x > 0)
		position.x -= batSpeed;
}

void Bat::moveRight()
{
	if(position.x < WINDOWWIDTH - 50)//window witdh setat in main
		position.x += batSpeed;
}

void Bat::moveUp()
{
	position.y += batSpeed;
}

void Bat::update()
{
	batShape.setPosition(position);
}