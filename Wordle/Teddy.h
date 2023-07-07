#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class Teddy {
private:
	RectangleShape frame;
	Vector2f position;
	Vector2f size;
	
public:
	void createTeddy(Vector2f p, Vector2f s, const sf::Texture& t) {
		position = p;
		size = s;

		frame.setSize(size);
		frame.setPosition(position);
		frame.setTexture(&t);
	}
	
	RectangleShape getTeddyPicture() {
		return frame;
	}
};