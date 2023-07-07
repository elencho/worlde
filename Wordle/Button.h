#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Button {
private:
	RectangleShape button;
	Event e;
	Vector2f position;
	Vector2f size;
	Color fillColor;
	Texture texture;

public:
	//FUNCTION FOR CREATING BUTTON CLASS 
	void createButton(Vector2f Position, Vector2f Size, Color FillColor, const sf::Texture & Texture) {
		size = Size;
		position = Position;
		fillColor = FillColor;

		button.setPosition(position);
		button.setSize(size);
		button.setFillColor(fillColor);
		button.setTexture(&Texture);
	}

	//METHOD TO INDICATE EVENT
	void setEvent(Event E) {
		e = E;
	}

	//METHOD TO GET DRAWABLE BUTTON
	RectangleShape getButton() {
		return button;
	}

	//METHOD TO CHECK IF THE USER CLICKED ON BUTTON
	bool isClicked() {
		if (e.mouseButton.x > position.x && e.mouseButton.x < position.x + size.x && e.mouseButton.y>position.y && e.mouseButton.y < position.y + size.y) return true;
		else return false;
	}
};
