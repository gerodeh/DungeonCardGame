#ifndef HEROCHOOSE_H
#define HEROCHOOSE_H
#include "Gui.h"
#include <SFML/Graphics.hpp>
#include "Button.h"
using namespace sf;

#define fontsArrSize 1
#define textsArrSize 1
#define buttonArrSize 2
#define textureArrSize 1
#define spriteArrSize 1

class HeroChoose : public Gui
{
    Font fonts[fontsArrSize];
    Text texts[textsArrSize];
    Texture textures[textureArrSize];
    Sprite sprites[spriteArrSize];
    Button buttons[buttonArrSize] =
    {
        Button(Vector2f(230, 50), Vector2f(0, 750), String("Return to main menu"), 20, Color(0, 51, 102)),
        Button(Vector2f(200, 100), Vector2f(550, 350), String("Warrior"), 50, Color(0, 51, 102))
    };
public:
    enum ButtonName
    {
        MAINMENU,
        WARRIOR
    };


    HeroChoose();
    HeroChoose(const RenderWindow &app);
    ~HeroChoose() override;

    sf::RectangleShape GetRectShape(int id) override;

    void DrawGUI(sf::RenderWindow& app) override;

};

#endif // HEROCHOOSE_H
