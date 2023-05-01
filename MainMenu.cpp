#include "MainMenu.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>


using namespace sf;

//CLASS MAINMENU

MainMenu::MainMenu()
{
    if (!fonts[0].loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}
    rectShapes[0].setSize(Vector2f(235, 50));
    rectShapes[0].setFillColor(sf::Color(0, 76, 153));
    rectShapes[0].setPosition(Vector2f(530, 446));

    rectShapes[1].setSize(Vector2f(235, 50));
    rectShapes[1].setFillColor(sf::Color(0, 51, 102));
    rectShapes[1].setPosition(Vector2f(530, 554));

    rectShapes[2].setSize(Vector2f(235, 50));
    rectShapes[2].setFillColor(sf::Color(0, 76, 153));
    rectShapes[2].setPosition(Vector2f(530, 500));

    texts[0].setFont(fonts[0]);
    texts[0].setString("Dungeon Card Game");
    texts[0].setCharacterSize(35);
    texts[0].setPosition(480, 100);

    texts[1].setFont(fonts[0]);
    texts[1].setString("Start");
    texts[1].setCharacterSize(30);
    texts[1].setPosition(614, 450);

    texts[2].setFont(fonts[0]);
    texts[2].setString("Exit");
    texts[2].setCharacterSize(30);
    texts[2].setPosition(620, 558);

    texts[3].setFont(fonts[0]);
    texts[3].setString("Help & Options");
    texts[3].setCharacterSize(30);
    texts[3].setPosition(545, 505);
}

MainMenu::~MainMenu(){}


void MainMenu::DrawGUI(RenderWindow& app)
{
    app.draw(rectShapes[0]);
    app.draw(rectShapes[1]);
    app.draw(rectShapes[2]);
    app.draw(texts[0]);
    app.draw(texts[1]);
    app.draw(texts[2]);
    app.draw(texts[3]);
}

RectangleShape MainMenu::GetRectShape(int id)
{
    return rectShapes[id];
}



