#ifndef MAP_H
#define MAP_H

#include "Gui.h"
#include <SFML/Graphics.hpp>
#include "Button.h"
using namespace sf;

#define buttonArrSize 1

class Map : public Gui
{
    Font font;
    static const int MAP_HEIGHT = 2;
    static const int MAP_WIDTH = 5;
    String tilemap[2] =
    {
        "0X0X0",
        "10X00"
    };
    Button buttons[buttonArrSize] =
    {
        Button(sf::Vector2f(50, 50), sf::Vector2f(0, 0), sf::String("EXIT"), 20, sf::Color(0, 51, 102))
    };
    Button tiles[2][5];
public:
    Map();
    ~Map() override;

    enum ButtonName
    {
        MAINMENU
    };

    void DrawGUI(sf::RenderWindow &app) override;

    sf::RectangleShape GetRectShape(int id);
};

#endif // MAP_H
