// @  player
// #  wall
// .  floor
// +  door (closed)
// /  door (open) or wand
// <  stairs up
// >  stairs down
// !  potion
// ?  scroll
// )  weapon
// ]  armor
// =  ring
// :  food
// *  gold
// ^  trap
// "  Amulet
// A-Z monsters

#pragma once

#include "Drawable.h"

#include <map>
#include <string>

class Actor : public Drawable
{
public:
    static std::map<icon_type, char> m_actor_map;
};
