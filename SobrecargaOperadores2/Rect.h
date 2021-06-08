class Pol;
#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED
#include <math.h>
#include "Pol.h"
class Rect{

    public:
        int x, y;
    public:    
        Rect();
        Rect(int x,int y);
        int getX();
        int getY();
        void imprimir();
        Rect operator+(const Rect& rect){
            Rect resultado;
            resultado.x=this->x+rect.x;
            resultado.y=this->y+rect.y;
            return resultado;
        }



};

#endif