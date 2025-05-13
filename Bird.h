#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Entity.h"

using namespace std;
using namespace sf;

class Bird :  public Entity{

protected:

	float x, y;
	float speedX, speedY;
	float gravity;
	float jumpSpeed;

	Texture texture;
	Sprite sprite;

public:

	Bird() {}

	Bird(float x, float y) : x(x), y(y) {
		speedX = 0;
		speedY = 0;
		gravity = 0.5;
		jumpSpeed = -10;
	}

	~Bird() {}

	void update () override {
		speedY += gravity;
		y += speedY;
	}

	void move(Event& ev) {

		if (ev.type == Event::KeyPressed) {
			if (ev.key.code == Keyboard::Space) {
				speedY = jumpSpeed;
			}
		}

	}

	void draw(RenderWindow& window, float offset) override {
		sprite.setPosition(x, y);
		window.draw(sprite);
	}




};