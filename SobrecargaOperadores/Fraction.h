#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

#include <iostream>
#include <string.h>
using namespace std;

class Fraction
{
    private: 
        double n;
        double d;
    public:

        Fraction(double n,double d);
        void print();

        operator double() const {
            return n/d;
        }

        operator string() const {
            string miString="El numerador es: "+to_string(n);
            string denominadorString=" Y el denominador es: "+ to_string(d);
            return miString+denominadorString;
        }

        bool operator == (Fraction &obj1){
            string obj1Str=obj1;
            string obj2Str=Fraction(n,d);
            cout << "Estamos comparando objetos tipo fraction " << obj1Str << " con "<< obj2Str << endl;
            return false;
        }
};


#endif 
//COMPLEX_H_INCLUDED