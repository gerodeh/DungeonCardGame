#include "Map.h"

Map::Map()
{
     if (!this->font.loadFromFile("Fonts/sfns-display-bold.ttf")){std::cout << "Failed to load font" << std::endl;}
}
Map::~Map(){}

void Map::DrawGUI(sf::RenderWindow &app)
{
    app.draw(buttons[0].getButtonRect());
    app.draw(buttons[0].getButtonText());
    for (int i=0; i<MAP_HEIGHT; i++)
        for (int j=0; j<MAP_WIDTH; j++)
        {
            if (tilemap[i][j] == '1')
            {
                tiles[i][j].SetButtonSize(Vector2f(50,50));
                tiles[i][j].SetButtonFont(this->font);
                tiles[i][j].SetButtonTextColor(sf::Color::White);
                tiles[i][j].SetButtonColor(sf::Color::Blue);
                tiles[i][j].SetButtonPosition(Vector2f((i+1)*80, (j+1)*80));
                tiles[i][j].SetButtonText("1");
            }
            if (tilemap[i][j] == '0')
            {
                tiles[i][j].SetButtonSize(Vector2f(50,50));
                tiles[i][j].SetButtonFont(this->font);
                tiles[i][j].SetButtonTextColor(sf::Color::White);
                tiles[i][j].SetButtonColor(sf::Color::Blue);
                tiles[i][j].SetButtonPosition(Vector2f((i+1)*80, (j+1)*80));
                tiles[i][j].SetButtonText("0");
            }
            if (tilemap[i][j] == 'X')
            {
                tiles[i][j].SetButtonSize(Vector2f(50,50));
                tiles[i][j].SetButtonFont(this->font);
                tiles[i][j].SetButtonTextColor(sf::Color::White);
                tiles[i][j].SetButtonColor(sf::Color::Blue);
                tiles[i][j].SetButtonPosition(Vector2f((i+1)*80, (j+1)*80));
                tiles[i][j].SetButtonText("X");
            }

            app.draw(tiles[i][j].getButtonRect());
            app.draw(tiles[i][j].getButtonText());


        }
}

sf::RectangleShape Map::GetRectShape(int id)
{
    return buttons[id].getButtonRect();
}
