#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#include "Entity.h"

using namespace std;
using namespace sf;

class Obstacle : public Entity{

public :

	Obstacle() {}

	Obstacle(float x, float y) : Entity(x, y) {
		speedX = 0;
		speedY = 0;
	}

	~Obstacle() {}
	
	

};

