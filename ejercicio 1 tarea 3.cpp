#include<iostream>
using namespace std;

int main(){
    int a,b,suma,resta,multiplicacion,cociente,residuo;

    cout<<"Ingrese un numero entero:"<<endl;
    cin>> a;
    cout<<"ingrese otro numero entero:"<<endl;
    cin>> b;
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    cout << "la suma es:" << suma << endl;
    cout << "la resta es:" << resta << endl;
    cout << "la multiplicacion:" << multiplicacion << endl;
    if(a>0 && a>b)
    {
    cociente=a/b;
    residuo=a-(cociente*b);
    cout<<"el cociente de la divicion es:"<< cociente <<endl;
    cout<<"el resto es:"<< residuo <<endl;
    }
    else
    {cout<<"No se puede realizar la divicion por no dar numero entero"<<endl;
    }
    
    cout<<"\n\nPrograma finalizado correctamente."<<endl;
    return 0;
}