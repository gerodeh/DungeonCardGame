#include "Player.h"

namespace gameprocess
{
    Player::Player(){}
    Player::~Player(){}

    void Player::SetPlayerClass(Player::PlayerClasses plclass)
    {
        this->currentPlayerClass = plclass;
    }
}
