#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main(){
    Shape shape1(20,10);    
    cout << " X: " << shape1.getXValue() << " Y:" << shape1.getYValue() << " " << shape1.draw()  << endl;
    Circle shape2(20,10,30);    
    cout << " X: " << shape2.getXValue() << " Y:" << shape2.getYValue() << " " << shape2.draw()  << endl;
    Rectangle shape3(10,20,10,30);    
    cout << " X: " << shape2.getXValue() << " Y:" << shape2.getYValue() << " " << shape2.draw()  << endl;
    return 0;
}