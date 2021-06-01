#include <iostream>
#include "Rect.h"
#include "Pol.h"
using namespace std;

int main(){
    Rect rect1(3,4);
    Rect rect2(5,8);
    Rect rect3;
    rect3= rect1+rect2;
    rect3.imprimir();
    Pol pol1(5,30);
    Pol pol2(4,45);
    Pol pol3;
    pol3= pol1*pol2;
    pol3.imprimir();

    Rect rect4;
    rect4=rect1+pol1;
    rect4.imprimir();
    return 0;
}