#pragma once

#include <map>
#include <string>

typedef enum
{
    WALL,
    FLOOR,
    DOOR,
    STAIRS_UP,
    STAIRS_DN
} tile_type;

class Tile
{
public:
    Tile(const char character);

    bool getIsPassable();
    const char* getCharacter();

    static std::map<tile_type, char> m_tile_map;

private:
    void initPassability(const char& character);

    char m_character;
    bool m_is_passable = false;
};
