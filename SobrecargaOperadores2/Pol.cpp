#include "Pol.h"
#include <iostream>
using namespace std;

Pol::Pol(){
    r=0;
    ang=0;
}

Pol::Pol(int r,int ang){
    this->r =r;
    this->ang =ang;
}

int Pol:: getR(){
    return r;
}

int Pol::getAng(){
    return ang;
}

void Pol::imprimir(){
    cout << "R: "<< r << " Ang: "<< ang<< endl;
}