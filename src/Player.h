#pragma once

#include "Util.h"

class Player
{
public:
    Player();

    ~Player();

    void setPos(const Vec2DInt& pos);
    void setPos(int x, int y);
    
    Vec2DInt getPos();

private:
    Vec2DInt m_pos;
};