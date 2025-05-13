#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

class GameEngine {

private:

	const int screenX = 700, screenY = 1000;

	RenderWindow window;

public:

	GameEngine() {
		window.create(VideoMode(screenX, screenY), "SFML Window");
		window.setFramerateLimit(60);
		window.setVerticalSyncEnabled(true);


	
	}

	~GameEngine() {
		window.close();
	}


	void run() {
		while (window.isOpen()) {
			Event event;
			while (window.pollEvent(event)) {

				if (event.type == Event::Closed)
					window.close();

				if (event.type == Event::KeyPressed) {
					if (event.key.code == Keyboard::Escape)
						window.close();
				}
				// event controls
				

			}
			window.clear(Color::Black);
			/// draw here
			draw(window);

			window.display();
		}
	}


	void draw(RenderWindow& window) {
		// draw game objects here
	}



};