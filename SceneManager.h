#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include "Gui.h"
#include "MainMenu.h"
#include "HeroChoose.h"
#include <SFML/Graphics.hpp>

#define sceneArrSize 2

class SceneManager
{
    Gui* scenesArr[sceneArrSize];
public:
    enum Scenes
    {
        MAIN_MENU,
        HERO_CHOOSE,
        MAP,
        BATTLE,
        SHOP
    };

    SceneManager();
    ~SceneManager();

    Gui* GetScene();

    Gui* GetScene(SceneManager::Scenes num);

    SceneManager::Scenes GetSceneID();

    void SetScene(SceneManager::Scenes num);
private:
    SceneManager::Scenes current_scene = SceneManager::Scenes::MAIN_MENU;
};

#endif // SCENEMANAGER_H
