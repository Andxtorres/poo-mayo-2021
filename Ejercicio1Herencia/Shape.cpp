#include "Shape.h"

Shape::Shape(){
    x=0;
    y=0;
}

Shape::Shape(int x,int y){
    this->x=x;
    this->y=y;
}

int Shape::getXValue(){
    return x;
}
int Shape::getYValue(){
    return y;
}
string Shape::draw(){
    return "Estoy pintando una Shape";
}
void Shape::llamarOtrosMetodos(){
    cout << "La x es: " << " " << getXValue() << endl;
}


