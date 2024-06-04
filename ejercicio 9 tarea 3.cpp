#include<iostream>
using namespace std;

int main(){

    int n,suma=0;
        cout<<"\nIntrodusca un numero "<<endl;
        cin>>n;
        while(n>0){
        suma = suma + (n % 10);
        n = n / 10;
        }
        cout << "la suma de los dígitos:" << suma << endl;
        
    cout<<"Programa finalizado correctamente.";

    return 0;
}