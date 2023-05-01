#ifndef HEROCHOOSE_H
#define HEROCHOOSE_H
#include "Gui.h"
#include <SFML/Graphics.hpp>

#define rectShapesArrSize 1
#define fontsArrSize 1
#define textsArrSize 1

class HeroChoose : public Gui
{
    RectangleShape rectShapes[rectShapesArrSize]; //
    Font fonts[fontsArrSize];
    Text texts[textsArrSize];
public:
    enum ButtonName
    {
        MAINMENU
    };


    HeroChoose();
    ~HeroChoose() override;

    sf::RectangleShape GetRectShape(int id) override;

    void DrawGUI(sf::RenderWindow& app) override;

};

#endif // HEROCHOOSE_H
