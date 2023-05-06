#include "HeroChoose.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Button.h"
using namespace sf;

HeroChoose::HeroChoose()
{
    if (!fonts[0].loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}
    if (!textures[0].loadFromFile("Images/warrior.jpg")){std::cout << "Failed to load image" << std::endl;}
    sprites[0].setTexture(textures[0]);
    sprites[0].setScale(Vector2f(0.3, 0.3));
    sprites[0].setPosition(Vector2f(537, 40));

}
HeroChoose::~HeroChoose(){}

HeroChoose::HeroChoose(const sf::RenderWindow &app)
{

}


void HeroChoose::DrawGUI(sf::RenderWindow& app)
{
    app.draw(buttons[0].getButtonRect());
    app.draw(buttons[0].getButtonText());
    app.draw(buttons[1].getButtonRect());
    app.draw(buttons[1].getButtonText());
    app.draw(sprites[0]);
}

sf::RectangleShape HeroChoose::GetRectShape(int id)
{
    return buttons[id].getButtonRect();
}
