#include "Circle.h"

Circle::Circle()
{
    r=0;
}

Circle::Circle(int r,int x,int y):Shape(x,y)
{
    this->r=r;
}

