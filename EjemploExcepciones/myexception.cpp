#include <iostream>
#include <exception>

using namespace std;

class myexception:public exception{
    public:
        virtual const char* what() const throw(){
            return "Ocurrio un my exception";
        }
} myex;