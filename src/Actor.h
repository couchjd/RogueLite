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

#include <map>
#include <string>

typedef enum
{
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
} actor_type;

class Actor
{
public:
    static std::map<actor_type, char> m_actor_map;
};
