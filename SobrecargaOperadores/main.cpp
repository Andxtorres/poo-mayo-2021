#include <iostream>
#include "Complex.h"

using namespace std;


int main(){
    Complex c1(10, 5), c2(2, 4);
    c1.print();
    c2.print();
    Complex resultado= c1+c2;
    resultado.print();
    return 0;
}