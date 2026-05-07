#pragma once 


void allocationExample();

class Coord {
private:
    double x;
    double y;
public:
    Coord();
    Coord(double a);
    Coord(double a, double b);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    void printCoord();
};


