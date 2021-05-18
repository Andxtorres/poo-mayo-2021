#include "Rectangle.h"

Rectangle::Rectangle()
{
    b=0;
    h=0;
}

Rectangle::Rectangle(int b,int h,int x,int y):Shape(x,y)
{
    this->b=b;
    this->h=h;
}

