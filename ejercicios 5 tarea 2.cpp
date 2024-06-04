#include<iostream>
using namespace std;

int main(){
    int sueldohora,diashoras,remudiaria,remuSemanal,diastraba;

    cout<<"Ingrese sueldo por hora:"<<endl;
    cin>>sueldohora;
    cout<<"Ingrese cuantos dias trabaja a la semana:"<<endl;
    cin>>diastraba;
    cout<<"Ingrese las horas trabajo diario"<<endl;
    cin>>diashoras;

    remudiaria = sueldohora * diashoras;
    remuSemanal = remudiaria * diastraba;

    cout<<"\nAl dia le corresponden: "<<remudiaria ;
    cout<<"\nA la semana le corresponden: "<<remuSemanal;

    cout<<"\n\nPrograma finalizado correctamente."<<endl;
    return 0;
}