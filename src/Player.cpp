#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::setPos(const Vec2DInt& pos)
{
    m_pos = pos;
}

void Player::setPos(int x, int y)
{
    m_pos.x = x;
    m_pos.y = y;
}

Vec2DInt Player::getPos()
{
    return m_pos;
}
