#ifndef POL_H_INCLUDED
#define POL_H_INCLUDED

class Pol{

    private:
        int r,ang;
    public:    
        Pol();
        Pol(int r,int ang);
        int getR();
        int getAng();
        void imprimir();
        Pol operator*(const Pol& rect){
            Pol resultado;
            resultado.r=r*rect.r;
            resultado.ang=ang+rect.ang;
            return resultado;
        }



};

#endif