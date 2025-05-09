#pragma once

#include "Tile.h"

#define MAP_WIDTH 80
#define MAP_HEIGHT 30

class Map
{
public:
  Map();
  ~Map();

  void init();
  void draw();
  Tile* getTile(int x, int y);

private:
    Tile* m_tiles[MAP_HEIGHT][MAP_WIDTH];
};