#pragma once

#define MAP_WIDTH 80
#define MAP_HEIGHT 30

class Map
{
public:
  Map();
  ~Map();

  void init();
  void draw();
private:
    char m_tiles[MAP_HEIGHT][MAP_WIDTH];
};