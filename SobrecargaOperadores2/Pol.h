#ifndef POL_H_INCLUDED
#define POL_H_INCLUDED
#include "Rect.h"
class Pol{

    private:
        int r,ang;
    public:    
        Pol();
        Pol(int r,int ang);
        int getR();
        int getAng();
        void imprimir();
        Pol operator*(const Pol& pol){
            Pol resultado;
            resultado.r=r*pol.r;
            resultado.ang=ang+pol.ang;
            return resultado;
        }
        Pol operator*(const Rect& rect){
            Pol resultado;
            //Todo
            
            return resultado;
        }


};

#endif