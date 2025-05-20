#include "Actor.h"

std::map<icon_type, char> Actor::m_actor_map =
{
    {PLAYER, '@',},
    {POTION, '!'},
    {SCROLL, '?'},
    {WAND, '/'},
    {WEAPON, ')'},
    {ARMOR, ']'},
    {RING, '='},
    {FOOD, ':'},
    {GOLD, '*'},
    {TRAP, '^'},
    {AMULET, '"'}
};