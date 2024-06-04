#include<iostream>
#include<string>
using namespace std;

int main() {
    float a,b,c,suma,resta,multiplicacion;

    cout<<"Ingrese un numero :"<<endl;
    cin>> a;
    cout<<"ingrese otro numero :"<<endl;
    cin>> b;
    cout<<"ingrese otro numero :"<<endl;
    cin>> c; 
    suma=a+b+c;
    resta=a-b-c;
    multiplicacion=a*b*c;
    cout << "la suma es:" << suma << endl;
    cout << "la resta es:" << resta << endl;
    cout << "la multiplicacion:" << multiplicacion << endl;
    

    cout<<"\n\nPrograma finalizado correctamente."<<endl;
    return 0;
}