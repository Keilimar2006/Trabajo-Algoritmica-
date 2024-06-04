#include<iostream>
using namespace std;

int main(){

    int h,m,s,rs;
        cout << "cCONVERTIDOR DE SEGUNDO A HORA/MINUTOS/SEGUNDO:" << endl;
        cout<<"Ingrese los segundo:\n"<<endl;
        cin>>s;
        h = s / 3600;
        m = (s % 3600) / 60;
        rs = ((s % 3600) % 60);
        cout << "transformado a h/m/s:" << h <<":"<< m <<":" << rs << endl;
        
    cout<<"Programa finalizado correctamente.";

    return 0;
}