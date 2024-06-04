#include<iostream>
using namespace std;

int main(){
    int n,i;

    cout<<"Ingrese un numero entero:"<<endl;
    cin>> n;
    for(i=0;i<=10;i++){
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
    cout<<"\n\nPrograma finalizado correctamente."<<endl;
    return 0;
}