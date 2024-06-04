#include<iostream>
using namespace std;

int main(){

    int i=1,n,c=0;
        cout<<"\nIntrodusca un numero "<<endl;
        cin>>n;
        while(i <= n){
        if(n % i == 0){
        c++;
        }
        i++;
        }
        if(c == 2){
        cout << "el numero es primo:1" << endl;}
        else{
        cout << "El numero no es primo:0" << endl;}
        
        

    

    cout<<"Programa finalizado correctamente.";

    return 0;
}