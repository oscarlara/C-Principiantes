//Programando con punteros

#include <iostream>
using namespace std; 
int main () {
    int valor1, valor2;
    int *miPuntero;
    miPuntero = &valor1;
    *miPuntero = 10;
    miPuntero = &valor2;
    *miPuntero = 20;
    cout<<"El primer valor equivale a: "<<valor1<<endl;
    cout<<"El segundo valor equivale a: "<<valor2<<endl;
    return 0;
}