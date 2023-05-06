#ifndef DIFFICULTYCHOOSE_H
#define DIFFICULTYCHOOSE_H
#include "SFML/Graphics.hpp"
#include "Gui.h"
#include "Button.h"

#define buttonArrSize 2

class DifficultyChoose : public Gui
{
    Button buttons[buttonArrSize] =
    {
        Button(sf::Vector2f(250, 50), sf::Vector2f(0, 750), sf::String("Return to hero selection"), 20, sf::Color(0, 51, 102)),
        Button(Vector2f(200, 100), Vector2f(550, 350), String("Normal"), 50, Color(255, 165, 0))
    };
    sf::Font font;
    sf::Text text;
public:
    enum ButtonName
    {
        HEROCHOOSERETURN,
        NORMAL
    };

    DifficultyChoose();
    ~DifficultyChoose() override;

    sf::RectangleShape GetRectShape(int id) override;

    void DrawGUI(sf::RenderWindow &app) override;
};

#endif // DIFFICULTYCHOOSE_H
