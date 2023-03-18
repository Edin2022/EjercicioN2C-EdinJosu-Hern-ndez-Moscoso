// Segundo ejecicio Crear la serie  fibonasci 1,1,2,4

#include <iostream>
using namespace std;
int main ()
{
    int num = 0;
    int x1 = 0;
    int x2 = 1;
    int x3 = 1;
    cout<<"Cantidad de elementos: ";
    cin>>num;
    for (int i = 1; i < num; i++)
    {
        x3 = x1 + x2;
        cout<<x3<<" ";
        x1 = x2;
        x2 = x3;
    }
    return 0;
}