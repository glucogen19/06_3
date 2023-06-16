#ifndef ROAD_H
#define ROAD_H

class Road
{
public:
    Road();

    double getLength() const;
    int getWidth() const;

private:
    double length;
    int width;
};

#endif // ROAD_H
