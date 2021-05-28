#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class Complex
{
    private: 
        int real;
        int img;
    public:
        Complex operator + (Complex const &obj){
            cout<< "Estoy dentro de la sobrecarga de operadores" << endl;
            int real=this->real+obj.real;
            int img= this->img+ obj.img;
            return Complex(real,img);
        };
        Complex(int real,int img);
        void print();
        Complex sumaComplex(Complex complex2);
};


#endif 
//COMPLEX_H_INCLUDED