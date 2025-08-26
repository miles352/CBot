#include "Box.hpp"

Box Box::stretch(const Vec3d& scale) const
{
    return this->stretch(scale.x, scale.y, scale.z);
}

Box Box::stretch(double x, double y, double z) const
{
    Box stretched = Box(*this);

    if (x > 0.0)
    {
        stretched.max.x += x;
    }
    else if (x < 0.0)
    {
        stretched.min.x += x;
    }

    if (y > 0.0)
    {
        stretched.max.y += y;
    }
    else if (y < 0.0)
    {
        stretched.min.x += y;
    }

    if (z > 0.0)
    {
        stretched.max.z += z;
    }
    else if (z < 0.0)
    {
        stretched.min.z += z;
    }

    return stretched;
}

Box Box::offset(const Vec3d& offset) const
{
    return this->offset(offset.x, offset.y, offset.z);
}

Box Box::offset(double x, double y, double z) const
{
    return Box({ this->min.x + x, this->min.y + y, this->min.z + z }, { this->max.x + x, this->max.y + y, this->max.z + z });
}

bool Box::intersects(const Box& box) const
{
    return this->min.x < box.max.x && this->max.x > box.min.x && this->min.y < box.max.y && this->max.y > box.min.y && this->min.z < box.max.z && this->max.z > box.min.z;
}

Box Box::expand(double x, double y, double z) const
{
    return Box({
        this->min.x - x,
        this->min.y - y,
        this->min.z - z
    }, {
        this->max.x + x,
        this->max.y + y,
        this->max.z + z
    });
}


Box Box::expand(double value) const
{
    return this->expand(value, value, value);
}
