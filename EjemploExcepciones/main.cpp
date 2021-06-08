#include <iostream>
#include <vector>
#include "myexception.cpp"

using namespace std;


int main(){

    try{
        int a=10;
        int b= 0;
        cout<< "Estoy ejecutando "<<endl;
        if(b==0){
            throw "No se puede dividir entre 0";
        }     
        int c=a/b;
        cout<< "Estoy ejecutando 2"<<endl;
        cout<< c << endl;        
    }catch(const char* msj){
       cout<< "Entro al catch" <<endl;
       cout<< msj <<endl;
    }

    cout<<"Sigo ejecutanto mi programa"<<endl;

    //Ejemplo con out of range 
    vector<int> vector(10);
    try{
        
        int numero_usuario;
        cin >> numero_usuario;
        vector.at(numero_usuario)=10;
    }catch(const std::out_of_range& exc){
        cout<<"No existe la posición que quieres insertar"<<endl;
    }
    cout<<"Sigo ejecutanto mi programa"<<endl;


    //Ejercicio

    int arreglo[10]={1,2,3,4,5,6,7,8,9,10};
    try{
        for (int i=0;i<100;i++){

            if(i==10){
                throw myex;
            }
            cout<< arreglo[i]<< endl;
        }
    }catch(exception& msj){
        cout<< msj.what() <<endl;
    }



}