#ifndef PLAYER_H
#define PLAYER_H

namespace gameprocess
{
    class Player
    {
    public:
        Player();
        ~Player();

        enum class PlayerClasses
        {
            Warrior
        };

        void SetPlayerClass(PlayerClasses plclass);

    private:
        PlayerClasses currentPlayerClass;
    };
}

#endif // PLAYER_H
