#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::setPos(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Player::getPos(int &x, int &y)
{
    x = m_x;
    y = m_y;
}
