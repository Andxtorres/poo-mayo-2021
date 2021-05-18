#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle: public Shape 
{
    private: 
        int b;
        int h;
    
    public:
        Rectangle();
        Rectangle(int,int,int,int);

};