#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

class Entity {

protected:

	float x, y;
	float speedX, speedY;
	Texture texture;
	Sprite sprite;


public:

	Entity() {}

	Entity(float x, float y) : x(x), y(y) {
		speedX = 0;
		speedY = 0;
	}
	~Entity() {}

	virtual void update() = 0;
	
	virtual void draw(RenderWindow& window, float offset) = 0;


};
