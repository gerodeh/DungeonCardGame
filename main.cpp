#include <SFML/Graphics.hpp>
#include "Gui.h"
#include "MainMenu.h"
#include "HeroChoose.h"
#include <vector>
#include "SceneManager.h"
using namespace sf;

//////////////////////////////////////////////////
//scene[0] = Main menu   // Scenes::MAINMENU    //
//scene[1] = Hero choose // Scenes::HEROCHOOSE  //
//scene[2] = Map         // Scenes::MAP         //
//scene[3] = Battle      // Scenes::BATTLE      //
///////////////////////////                     //
//                                              //
//                                              //
//////////////////////////////////////////////////

int main()
{
    RenderWindow app(sf::VideoMode(1300, 800), "DCG", Style::Default);
    SceneManager scenemanager;


    int current_scene = 0;

    while (app.isOpen())
    {
        Vector2i mousePoz = Mouse::getPosition(app);

        sf::Event event;
        while (app.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
            {
                app.close();
            }
            switch (scenemanager.GetSceneID())
            {
                case SceneManager::Scenes::MAIN_MENU:
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::MAIN_MENU)).GetRectShape(MainMenu::ButtonName::START).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Start Button Has Been Pressed" << std::endl;
                                scenemanager.SetScene(SceneManager::Scenes::HERO_CHOOSE);
                            }

                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::MAIN_MENU)).GetRectShape(MainMenu::ButtonName::EXIT).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Exit Button Has Been Pressed" << std::endl;
                                app.close();
                            }
                    break;
                case SceneManager::Scenes::HERO_CHOOSE:
                    break;
            }

        }

        app.clear(Color(0, 128, 255));

        scenemanager.GetScene()->DrawGUI(app);

        app.display();
    }

    return EXIT_SUCCESS;
}
