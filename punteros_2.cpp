//Programando con punteros
#include <iostream>
using namespace std;
int main() {
    int valor1 = 5, valor2 = 15;
    int *p1, *p2;
    p1 = &valor1; //p1 es igual a la direccion de valor1
    p2 = &valor2; //p2 es igual a la direccion de valor2
    *p1 = 10; //El valar apuntado por p1 es 10
    *p2 = *p1; //El valor apuntado por p2 es igual al valor apuntado por p1
    p1 = p2;
    *p1 = 20;
    cout<<"El primer valor equivale a: "<<valor1<<endl;
    cout<<"El segundo valor equivale a: "<<valor2<<endl;
    return 0; 
}