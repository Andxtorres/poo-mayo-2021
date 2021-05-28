#include "Fraction.h"

Fraction::Fraction(double n,double d){
    this->n = n;
    this->d=d;
}


void Fraction::print(){
    cout << n << "/" << d << endl;
}
