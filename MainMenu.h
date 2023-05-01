#ifndef MAINMENU_H
#define MAINMENU_H

#include <SFML/Graphics.hpp>

#include "Gui.h"

#define rectShapesArrSize 3
#define fontsArrSize 1
#define textsArrSize 4

class MainMenu : public Gui
{
    RectangleShape rectShapes[rectShapesArrSize]; // 0 - START BUTTON, 1 - EXIT BUTTON
    Font fonts[fontsArrSize];
    Text texts[textsArrSize];
public:

    enum ButtonName
    {
        START,
        EXIT,
        ABOUT
    };


    MainMenu();
    ~MainMenu() override;

    sf::RectangleShape GetRectShape(int id) override;

    void DrawGUI(sf::RenderWindow& app) override;

};

#endif // MAINMENU_H


