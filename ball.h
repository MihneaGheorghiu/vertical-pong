#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private:
	Vector2f position;

	// A RectangleShape object called ref
	RectangleShape ballShape;

	float xVelocity = 2.2f;
	float yVelocity = 2.2f;

public:
	Ball(float startX, float startY);

	FloatRect getPosition();

	RectangleShape getShape();

	float getXVelocity();

	void speedup();

	void slowdown();

	void reboundSides();

	void reboundBatOrTop();

	void hitBottom();

	void update();

};