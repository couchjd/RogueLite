#include "Game.h"
#include <iostream>
#include <ncurses.h>

Game::Game()
:
    m_run(true)
{

}

Game::~Game()
{

}

void Game::init()
{
    initscr();
    keypad(stdscr, TRUE);
    nonl();
    cbreak();
    echo();
    curs_set(0);

    m_player.setPosition(1, 1);
    m_map.init();
}

void Game::run()
{
    while(m_run)
    {
        int input = getch();
        handleInput(input);
        // UPDATE HERE
        
        clear();
        refresh();
        m_map.draw();

        Vec2DInt player_pos = m_player.getPosition();

        move(player_pos.y, player_pos.x);
        printw("%c", *m_player.getIcon());
    }
}

void Game::shutdown()
{

}

void Game::handleInput(int input)
{
    Vec2DInt player_pos = m_player.getPosition();
    int x = player_pos.x;
    int y = player_pos.y;

    switch(input)
    {
        case 'q':
        {
            m_run = false;
            break;
        }
        case KEY_UP:
        {
            if(m_map.getTile(x, y-1)->getIsPassable())
            {            
                m_player.setPosition(x, y-1);
            }
            break;
        }
        case KEY_DOWN:
        {
            if(m_map.getTile(x, y+1)->getIsPassable())
            {
                m_player.setPosition(x, y+1);
            }
            break;
        }
        case KEY_LEFT:
        {
            if(m_map.getTile(x-1, y)->getIsPassable())
            {
                m_player.setPosition(x-1, y);
            }
            break;
        }
        case KEY_RIGHT:
        {
            if(m_map.getTile(x+1, y)->getIsPassable())
            {
                m_player.setPosition(x+1, y);
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
