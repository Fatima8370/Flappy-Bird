#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "UI.h"

class Level {

private:

	int levelNumber;
	int score;
	int lives;
	int timeLimit;
	int currentTime;
	float offsetX;

	bool isLevelComplete;
	bool isLevelFailed;


public:

	Level() {}

	Level(int level) : levelNumber(level) {

	}

	~Level() {}

	void updateGame() {

		// update game entities

	}

	void drawGame(RenderWindow& window) {

		// draw UI 
		// draw game entities

	}

	void drawLevel(RenderWindow& window) {


		updateGame();
		drawGame(window);

	}

	int getScore() {
		return score;
	}

	int getLives() {
		return lives;
	}



};