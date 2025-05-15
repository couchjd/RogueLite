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

const char* Tile::getCharacterByTileType(tile_type type)
{
    return &m_tile_map[type];
}

tile_type Tile::getTileTypeByCharacter(const char *character)
{
    tile_type type = VOID;

    for (const auto& [key, value] : m_tile_map)
    {
        if (value == *character)
        {
            type = key;
        }
    }

    return type;
}

void Tile::initPassability(const char &character)
{
    tile_type type = getTileTypeByCharacter(&character);
    
    switch(type)
    {
        case FLOOR:
        case STAIRS_UP:
        case STAIRS_DN:
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

std::map<tile_type, char> Tile::m_tile_map =
{
    {VOID, ' '},
    {WALL, '#'},
    {FLOOR, '.'},
    {DOOR, '+'},
    {STAIRS_UP, '<'},
    {STAIRS_DN, '>'}
};