class Tile
{
public:
    Tile(const char character);

    bool getIsPassable();
    const char* getCharacter();

private:
    void initPassability(const char& character);

    char m_character;
    bool m_is_passable = false;
};