#include <iostream>
#include "Shape.h"

using namespace std;

class Circle: public Shape 
{
    private: 
        int r;
    
    public:
        Circle();
        Circle(int,int,int);

};