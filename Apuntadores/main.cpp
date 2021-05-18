#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout << "El valor de a dentro de swap: " << a << endl;
    cout << "El valor de b dentro de swap: " << b << endl;
}

int main(){
    
    int a=10;
    int b=20;
    int& aRef=a;
    int& bRef=b;
    swap(aRef,bRef);
    cout << "El valor de a: " << a << endl;
    cout << "El valor de b: " << b << endl;
}