#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED
#include "Pol.h"
#include <math.h>

class Rect{

    private:
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
        Rect operator+(const Pol& pol){
            Rect resultado(0,0);
            //Todo 
            return resultado;
        }



};

#endif