#include <iostream>
#include "Complex.h"
#include "Fraction.h"

using namespace std;


int main(){
    Complex c1(10, 5), c2(2, 4);
    c1.print();
    c2.print();
    Complex resultado= c1+c2;
    resultado.print();
    Fraction frac(1,2);
    frac.print();
    double resFrac=frac;
    cout << resFrac << endl;
    string resString=frac;
    cout << resString << endl;
    Fraction frac2(2,4);
    cout<<(frac2==frac)<< endl;
    return 0;
}