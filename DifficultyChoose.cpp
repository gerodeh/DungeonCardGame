#include "DifficultyChoose.h"
#include <SFML/Graphics.hpp>

DifficultyChoose::DifficultyChoose()
{
    if (!font.loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}
    text.setFont(font);
    text.setCharacterSize(30);
    text.setString("Choose Difficulty");
    text.setPosition(Vector2f(525, 700));
}

DifficultyChoose::~DifficultyChoose(){}

void DifficultyChoose::DrawGUI(sf::RenderWindow &app)
{
    for (int i=0; i<buttonArrSize; i++)
    {
        app.draw(buttons[i].getButtonRect());
        app.draw(buttons[i].getButtonText());
    }
    app.draw(text);
}

sf::RectangleShape DifficultyChoose::GetRectShape(int id)
{
    return buttons[id].getButtonRect();
}
