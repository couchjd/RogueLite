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

    m_player.setPos(0, 0);
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

        int x = 0;
        int y = 0;
        m_player.getPos(x, y);

        move(x, y);
        printw("%c", '@');
    }
}

void Game::shutdown()
{

}

void Game::handleInput(int input)
{
    int x = 0;
    int y = 0;
    
    m_player.getPos(x, y);

    switch(input)
    {
        case KEY_UP:
        {
            m_player.setPos(x-1, y);
            break;
        }
        case KEY_DOWN:
        {
            m_player.setPos(x+1, y);
            break;
        }
        case KEY_LEFT:
        {
            m_player.setPos(x, y-1);
            break;
        }
        case KEY_RIGHT:
        {
            m_player.setPos(x, y+1);
            break;
        }
        default:
        {
            break;
        }
    }
}
