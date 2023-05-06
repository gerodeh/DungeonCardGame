#ifndef BUTTON_H
#define BUTTON_H
#include "SFML/Graphics.hpp"
using namespace sf;

class Button
{
    Font btn_font;
    Text btn_text;
    RectangleShape btn_rect;

public:
    Button();

    Button(Vector2f btn_rect_size, Vector2f btn_rect_position, String btn_string, unsigned btn_text_size, Color btn_rect_color = Color::White, Color btn_text_color = Color::White);
    ~Button();

    void SetButtonPosition(Vector2f pos);
    void SetButtonSize(Vector2f newsize);
    void SetButtonText(String str);
    void SetButtonColor(const Color &color);
    void SetButtonTextColor(const Color &color);
    void SetButtonFont(const Font &font);

    RectangleShape getButtonRect();
    Text getButtonText();
};

#endif // BUTTON_H
