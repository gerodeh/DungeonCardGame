#include <SFML/Graphics.hpp>
#include "Gui.h"
#include "MainMenu.h"
#include "HeroChoose.h"
#include <vector>
#include "SceneManager.h"
#include "MainGame.h"

using namespace sf;

//////////////////////////////////////////////////////////
//scene[0] = Main menu   // Scenes::MAINMENU            //
//scene[1] = Hero choose // Scenes::HEROCHOOSE          //
//scene[2] = Difficulty  // Scenes::DIFFICULTYCHOOSE    //
//scene[3] = Map         // Scenes::MAP                 //
//scene[4] = Battle      // Scenes::BATTLE              //
///////////////////////////                             //
// VideoMode(1300, 800)                                 //
//////////////////////////////////////////////////////////

int main()
{
    RenderWindow app(sf::VideoMode(1300, 800), "DCG", Style::Close);
    SceneManager scenemanager;
    gameprocess::MainGame game;

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
                ///////////////////////////////////////////////////// BORDER
                case SceneManager::Scenes::HERO_CHOOSE:
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::HERO_CHOOSE)).GetRectShape(HeroChoose::ButtonName::MAINMENU).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Return to main menu Button Has Been Pressed" << std::endl;
                                scenemanager.SetScene(SceneManager::Scenes::MAIN_MENU);
                            }
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::HERO_CHOOSE)).GetRectShape(HeroChoose::ButtonName::WARRIOR).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Warrior selection Button Has Been Pressed" << std::endl;
                                game.GetPlayer().SetPlayerClass(gameprocess::Player::PlayerClasses::Warrior);
                                scenemanager.SetScene(SceneManager::Scenes::DIFFICULTY_CHOOSE);
                            }
                    break;
                ///////////////////////////////////////////////////// BORDER
                case SceneManager::Scenes::DIFFICULTY_CHOOSE:
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::DIFFICULTY_CHOOSE)).GetRectShape(DifficultyChoose::ButtonName::HEROCHOOSERETURN).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Return to hero selection Button Has Been Pressed" << std::endl;
                                scenemanager.SetScene(SceneManager::Scenes::HERO_CHOOSE);
                            }
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::DIFFICULTY_CHOOSE)).GetRectShape(DifficultyChoose::ButtonName::NORMAL).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Difficulty Normal Button Has Been Pressed" << std::endl;
                                game.SetGameDifficulty(gameprocess::MainGame::Difficulties::Normal);
                                scenemanager.SetScene(SceneManager::Scenes::MAP);
                            }
                    break;
                case SceneManager::Scenes::MAP:
                    if (event.type == Event::MouseButtonPressed)
                        if (event.key.code == Mouse::Left)
                            if ((*scenemanager.GetScene(SceneManager::Scenes::MAP)).GetRectShape(Map::ButtonName::MAINMENU).getGlobalBounds().contains(mousePoz.x, mousePoz.y))
                            {
                                std::cout << "Return to main menu Button Has Been Pressed" << std::endl;
                                scenemanager.SetScene(SceneManager::Scenes::MAIN_MENU);
                            }
                    break;
            }

        }


        app.clear(Color(0, 128, 255));

        scenemanager.GetScene()->DrawGUI(app);

        app.display();
    }

    return EXIT_SUCCESS;
}
