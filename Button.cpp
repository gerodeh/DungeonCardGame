#include "Button.h"
#include "iostream"
#include "SFML/Graphics.hpp"
using namespace sf;

Button::Button()
{
    if (!this->btn_font.loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}
}

Button::Button(Vector2f btn_rect_size, Vector2f btn_rect_position, String btn_string, unsigned btn_text_size, Color btn_rect_color, Color btn_text_color)
{
    if (!this->btn_font.loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}


    this->btn_rect.setPosition(btn_rect_position);
    this->btn_rect.setSize(btn_rect_size);
    this->btn_rect.setFillColor(btn_rect_color);

    this->btn_text.setFont(this->btn_font);
    this->btn_text.setString(btn_string);
    this->btn_text.setCharacterSize(btn_text_size);
    this->btn_text.setFillColor(btn_text_color);

    float xPos = (this->btn_rect.getPosition().x + this->btn_rect.getSize().x / 2) - (this->btn_text.getLocalBounds().width / 2);
    float yPos = (this->btn_rect.getPosition().y + this->btn_rect.getSize().y / 2) - (this->btn_text.getLocalBounds().height / 2);

    this->btn_text.setPosition(Vector2f(xPos, yPos));
}

Button::~Button(){}

RectangleShape Button::getButtonRect()
{
    return this->btn_rect;
}

Text Button::getButtonText()
{
    return this->btn_text;
}

void Button::SetButtonPosition(Vector2f pos)
{
    this->btn_rect.setPosition(pos);
    float xPos = (this->btn_rect.getPosition().x + this->btn_rect.getSize().x / 2) - (this->btn_text.getLocalBounds().width / 2);
    float yPos = (this->btn_rect.getPosition().y + this->btn_rect.getSize().y / 2) - (this->btn_text.getLocalBounds().height / 2);
    this->btn_text.setPosition(Vector2f(xPos, yPos));
}

void Button::SetButtonSize(Vector2f newsize)
{
    this->btn_rect.setSize(newsize);
    float xPos = (this->btn_rect.getPosition().x + this->btn_rect.getSize().x / 2) - (this->btn_text.getLocalBounds().width / 2);
    float yPos = (this->btn_rect.getPosition().y + this->btn_rect.getSize().y / 2) - (this->btn_text.getLocalBounds().height / 2);
    this->btn_text.setPosition(Vector2f(xPos, yPos));
}

void Button::SetButtonText(String str)
{
    this->btn_text.setString(str);
    float xPos = (this->btn_rect.getPosition().x + this->btn_rect.getSize().x / 2) - (this->btn_text.getLocalBounds().width / 2);
    float yPos = (this->btn_rect.getPosition().y + this->btn_rect.getSize().y / 2) - (this->btn_text.getLocalBounds().height / 2);
    this->btn_text.setPosition(Vector2f(xPos, yPos));
}

void Button::SetButtonColor(const Color &color)
{
    this->btn_rect.setFillColor(color);
}

void Button::SetButtonTextColor(const Color &color)
{
    this->btn_text.setFillColor(color);
}
void Button::SetButtonFont(const Font &font)
{
    this->btn_font = font;
    this->btn_text.setFont(font);
}
