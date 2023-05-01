#ifndef GUI_H
#define GUI_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace sf;

class Gui
{
protected:

public:
    Gui();
    virtual ~Gui();

    virtual void DrawGUI(sf::RenderWindow& app) = 0;

    virtual sf::RectangleShape GetRectShape(int id);

};

#endif // GUI_H

