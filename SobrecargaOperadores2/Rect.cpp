#include "Rect.h"
#include <iostream>
using namespace std;
Rect::Rect(){
    x=0; y=0;
}

Rect::Rect(int x,int y){
    this->x=x;
    this->y=y;
}

int Rect::getX(){
    return x;
}

int Rect::getY(){
    return y;
}

void Rect::imprimir(){
    cout<< "X: " << x << " Y: "<< y << endl;
}