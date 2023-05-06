#ifndef MAINGAME_H
#define MAINGAME_H
#include "Player.h"

namespace gameprocess
{
    class MainGame
    {
        Player player;
    public:

        enum class Difficulties
        {
            Normal
        };

        MainGame();
        ~MainGame();

        void SetGameDifficulty(Difficulties newdif);
        Player GetPlayer();

    private:
        Difficulties currentDifficulty;
    };
}

#endif // MAINGAME_H
