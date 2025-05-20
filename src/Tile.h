#pragma once

#include "Drawable.h"

#include <map>
#include <string>

class Tile : public Drawable
{
public:
    Tile(const char character);

    bool getIsPassable();
    const char* getCharacter();
    const char* getCharacterByTileType(icon_type type);
    icon_type getTileTypeByCharacter(const char* character);

    static std::map<icon_type, char> m_tile_map;

private:
    void initPassability(const char& character);

    char m_character;
    bool m_is_passable = false;
};
