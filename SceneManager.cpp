#include "SceneManager.h"
#include "HeroChoose.h"
#include "MainMenu.h"
#include "Gui.h"

SceneManager::SceneManager()
{
    current_scene = SceneManager::Scenes::MAIN_MENU;
    scenesArr[0] = new MainMenu();
    scenesArr[1] = new HeroChoose();
}
SceneManager::~SceneManager()
{
    for (int i=0; i<sceneArrSize; i++)
    {
        delete scenesArr[i];
        std::cout << "Scene " << i << " has been deleted" << std::endl;
    }
}

Gui* SceneManager::GetScene()
{
    return scenesArr[current_scene];
}

Gui* SceneManager::GetScene(SceneManager::Scenes num)
{
    return scenesArr[num];
}

SceneManager::Scenes SceneManager::GetSceneID()
{
    return current_scene;
}

void SceneManager::SetScene(SceneManager::Scenes num)
{
    current_scene = num;
}
