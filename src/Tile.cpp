#include "Tile.h"

Tile::Tile(const char character)
:
    m_character(character)
{
    initPassability(m_character);
}

bool Tile::getIsPassable()
{
    return m_is_passable;
}

const char* Tile::getCharacter()
{
    return &m_character;
}

void Tile::initPassability(const char &character)
{
    switch(character)
    {
        case '.':
        {
            m_is_passable = true;
            break;
        }
        default:
        {
            m_is_passable = false;
            break;
        }
    }
}