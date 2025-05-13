#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

class UI {

	int screenX, screenY;

	Font font;

	Text text;

	bool isGameOver = false;
	bool isPaused = false;
	bool isStart = false;
	bool isLevel = false;
	bool isWin = false;
	bool isGame = false;
	bool isGameOverDraw = false;
	bool isPauseDraw = false;
	bool isStartDraw = false;
	bool isLevelDraw = false;
	bool isWinDraw = false;

public:
	
	UI(int x, int y): screenX(x), screenY(y) {}
	
	~UI(){}
	
	void drawUI(RenderWindow& window){}
	
	void drawGameOver(RenderWindow& window){}
	
	void drawPause(RenderWindow& window){}
	
	void drawStart(RenderWindow& window){}
	
	void drawLevel(RenderWindow& window){}
	
	void drawWin(RenderWindow& window){}


	void setGameOver(bool gameOver) {
		isGameOver = gameOver;
	}

	void setPause(bool pause) {
		isPaused = pause;
	}

	void setStart(bool start) {
		isStart = start;
	}

	void setLevel(bool level) {
		isLevel = level;
	}

	void setWin(bool win) {
		isWin = win;
	}

	void setGame(bool game) {
		isGame = game;
	}

	void setGameOverDraw(bool gameOverDraw) {
		isGameOverDraw = gameOverDraw;
	}

	void setPauseDraw(bool pauseDraw) {
		isPauseDraw = pauseDraw;
	}

	void setStartDraw(bool startDraw) {
		isStartDraw = startDraw;
	}

	void setLevelDraw(bool levelDraw) {
		isLevelDraw = levelDraw;
	}

	void setWinDraw(bool winDraw) {
		isWinDraw = winDraw;
	}

	void setGameDraw(bool gameDraw) {
		isGame = gameDraw;
	}

	bool getGameOver() {
		return isGameOver;
	}

	bool getPause() {
		return isPaused;
	}

	bool getStart() {
		return isStart;
	}

	bool getLevel() {
		return isLevel;
	}

	bool getWin() {
		return isWin;
	}

	bool getGame() {
		return isGame;
	}

	bool getGameOverDraw() {
		return isGameOverDraw;
	}

	bool getPauseDraw() {
		return isPauseDraw;
	}

	bool getStartDraw() {
		return isStartDraw;
	}

	bool getLevelDraw() {
		return isLevelDraw;
	}

	bool getWinDraw() {
		return isWinDraw;
	}

	bool getGameDraw() {
		return isGame;
	}

	void setFont(const string& fontPath) {
		if (!font.loadFromFile(fontPath)) {
			cerr << "Error loading font" << endl;
		}
		text.setFont(font);
	}

	void setText(const string& str, int size, Color color) {
		text.setString(str);
		text.setCharacterSize(size);
		text.setFillColor(color);
		text.setPosition(screenX / 2 - text.getGlobalBounds().width / 2, screenY / 2 - text.getGlobalBounds().height / 2);
	}

	void setTextPosition(float x, float y) {
		text.setPosition(x, y);
	}

	void setTextColor(Color color) {
		text.setFillColor(color);
	}

	void setTextSize(int size) {
		text.setCharacterSize(size);
	}




};
