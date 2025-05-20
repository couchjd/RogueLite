#pragma once

#include "Util.h"

#include <ncurses.h>

typedef enum
{
    VOID,
    WALL,
    FLOOR,
    DOOR,
    STAIRS_UP,
    STAIRS_DN,
    PLAYER,
    POTION,
    SCROLL,
    WAND,
    WEAPON,
    ARMOR,
    RING,
    FOOD,
    GOLD,
    TRAP,
    AMULET
} icon_type;

class Drawable
{
public:
    void setPosition(int x, int y) { m_pos.x = x; m_pos.y = y; }
    void setPosition(const Vec2DInt& pos) { m_pos = pos; }
    const Vec2DInt& getPosition() const { return m_pos; }

    void setIcon(char* icon) { m_icon = icon; }
    const char* getIcon() const { return m_icon; }

    void draw();

protected:
    char* m_icon;

private:
    Vec2DInt m_pos;
};