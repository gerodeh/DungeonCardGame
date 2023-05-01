#include "HeroChoose.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

HeroChoose::HeroChoose()
{
    if (!fonts[0].loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}

    rectShapes[0].setSize(Vector2f(100, 50));
    rectShapes[0].setFillColor(sf::Color::Green);
    rectShapes[0].setPosition(Vector2f(585, 446));

    texts[0].setFont(fonts[0]);
    texts[0].setString("Return to main menu");
    texts[0].setCharacterSize(35);
    texts[0].setPosition(480, 100);
}
HeroChoose::~HeroChoose(){}


void HeroChoose::DrawGUI(sf::RenderWindow& app)
{
    app.draw(rectShapes[0]);
    app.draw(texts[0]);
}

sf::RectangleShape HeroChoose::GetRectShape(int id)
{
    return rectShapes[id];
}
