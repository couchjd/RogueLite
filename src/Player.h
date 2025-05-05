#pragma once

class Player
{
public:
    Player();

    ~Player();

    void setPos(int x, int y);
    void getPos(int& x, int& y);
    
private:
    int m_x;
    int m_y;
};