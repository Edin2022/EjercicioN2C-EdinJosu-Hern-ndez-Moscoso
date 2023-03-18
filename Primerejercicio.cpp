// Primer ejercicio: con un numero ingresado por el usuario calcular el factorial y mostrarlo en pantalla

#include <iostream>
using namespace std;

int main(){

    int num1;
    int i;
    float factrorial= 1;


    cout<<"\nIngresa un numero del factorial:" <<endl;
    cin>>num1;

    for ( i = 1; i <= num1; i++) {
        factrorial = factrorial * i;

    }

    cout<<"\nEl factorial de: " <<num1<<"\nes: "<<factrorial<<endl;

    return 0;
}