#include<iostream>
using namespace std;

int main(){

    int minutos, segundos;
    const int DISTANCIA = 1500;
    float tiempoEnSegundos, velocidad;
    int contador=0;
    float saldo=0;
    float velocidadmedia;

    while(true){
        cout<<"\nIntroduce los minutos "<<endl;
        cin>>minutos;
        cout<<"\nintroduce los segundo"<<endl;
        cin >>segundos;

        if (minutos == 0 && segundos == 0){
            break;
        }

        tiempoEnSegundos = (minutos * 60) + segundos;
        
        velocidad = DISTANCIA / tiempoEnSegundos;
        saldo=saldo+velocidad;
        contador=contador+1;
        velocidadmedia = saldo / contador;

        cout<<"Tiempo: ("<< minutos << ":" << segundos<<")";
        cout<<"\nVelocidad: "<< velocidad<< "m/s"<<endl;
        cout << "velocidad media:" << velocidadmedia << endl;
    }

    cout<<"Programa finalizado correctamente.";

    return 0;
}