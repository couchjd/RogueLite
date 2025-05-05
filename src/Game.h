#pragma once

#include "Map.h"
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();

    void init();
    void run();
    void shutdown();

private:
    void handleInput(int input);

    Player m_player;
    Map m_map;

    bool m_run;
};