#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include "Gui.h"
#include "MainMenu.h"
#include "HeroChoose.h"
#include "DifficultyChoose.h"
#include <SFML/Graphics.hpp>
#include "Map.h"

#define sceneArrSize 4

class SceneManager
{
    Gui* scenesArr[sceneArrSize];
public:
    enum Scenes
    {
        MAIN_MENU,
        HERO_CHOOSE,
        DIFFICULTY_CHOOSE,
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
