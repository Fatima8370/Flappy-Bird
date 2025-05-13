#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;


int main() {

	RenderWindow window(VideoMode(700, 1000), "SFML Window");

	CircleShape shape(50);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		window.clear(Color::Black);
		window.draw(shape);
		window.display();
	}




	return 0;
}