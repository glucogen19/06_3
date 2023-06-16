#include "road.h"

Road::Road()
{
    length = 100.0;
    width = 5;
}

double Road::getLength() const
{
    return length;
}

int Road::getWidth() const
{
    return width;
}
