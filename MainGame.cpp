#include "MainGame.h"

namespace gameprocess
{
    MainGame::MainGame(){}
    MainGame::~MainGame(){}

    void MainGame::SetGameDifficulty (MainGame::Difficulties newdif)
    {
        this->currentDifficulty = newdif;
    }

    Player MainGame::GetPlayer ()
    {
        return this->player;
    }
}
