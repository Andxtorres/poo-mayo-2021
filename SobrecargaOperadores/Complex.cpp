#include "Complex.h"

Complex::Complex(int real,int img){
    this->real = real;
    this->img=img;
}


void Complex::print(){
    cout << real << " + i" << img << endl;
}

Complex Complex::sumaComplex(Complex complex2){
    int real=this->real+complex2.real;
    int img= this->img+ complex2.img;
    return Complex(real,img);
}