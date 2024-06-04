#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num=4;
    
    cout << "serie de numeros de 4 en 4 hasta el 400:" << endl;
    cout << "serie:" << num << endl;
    while(num<400){
    num +=4;
    cout << "serie:" << num << endl;
    }
cout << "programa fianalizado" << endl;
return 0;
}