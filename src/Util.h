#pragma once
class Vec2DInt
{
public:
    int x;
    int y;

    Vec2DInt& operator+=(const Vec2DInt& rhs)
    {
        x += rhs.x;
        y += rhs.y;
        return *this;
    }

    Vec2DInt& operator*=(int s)
    {
        x *= s;
        y *= s;
        return *this;
    }

private:
};

inline Vec2DInt operator+(Vec2DInt lhs, const Vec2DInt& rhs)
{
    lhs += rhs;
    return lhs;
}

inline Vec2DInt operator*(Vec2DInt lhs, double s)
{
    lhs *= s;
    return lhs;
}

inline Vec2DInt operator*(double s, Vec2DInt rhs)
{
    rhs *= s;
    return rhs;
}