#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>

using namespace std;

class Shape{
    private: 
        int x;
        int y;

    public: 
        Shape();
        Shape(int,int);
        string draw();
        int getXValue();
        int getYValue();
        void llamarOtrosMetodos();
};

#endif