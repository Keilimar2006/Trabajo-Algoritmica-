#include<iostream>
#include<string>
using namespace std;

int main() {
    float a,centi,pulgada=2.54;

    cout<<"PROGRAMA CALCULADOR DE CENTRIMETRO A PULGADAS:"<<endl;
    
    cout<<"Ingrese valor en centimetro:"<<endl;
    cin>> centi;
    a = centi / pulgada;
    cout << "el valor en pulgada es:"<< a <<"pulgadas" <<endl;
    

    cout<<"\n\nPrograma finalizado correctamente."<<endl;
    return 0;
}