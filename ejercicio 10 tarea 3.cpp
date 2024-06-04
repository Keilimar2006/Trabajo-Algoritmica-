#include<iostream>
using namespace std;

int main(){

    int h,vh,cs,sa;
        cout << "CALCULADOR DE SALARIO:" << endl;
        cout<<"Ingrese las hora de trabajo:"<<endl;
        cin>>h;
        cout << "valor por hora:" << endl;
        cin>>vh;
        sa = h * vh;
        cout << "Salario por dia:" << sa << endl;
        
    cout<<"Programa finalizado correctamente.";

    return 0;
}