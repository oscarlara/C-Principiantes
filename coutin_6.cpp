//Funciones matematica de la biblioteca math.h

#include <iostream>
//#include <conio.h>
#include <math.h>
//#include <values.h>
using namespace std;

int main() {
    int a;
    float x, y;
    void clrscr();
    cout<<"---Funciones varias incorparadas en la bibiliteca Math.h---\n";
    cout<<"\nNumero para calcular la raiz cuadrada: "; cin>>x;
    cout<<"Raiz cuadrada de "<<x<<" = "<<sqrt(x);
    cout<<"\n\n---A continuacion ejemplo de exponenciación---\n";
    cout<<"Escribe un numero como base: "; cin>>x;
    cout<<"Escribe el exponente: "; cin>>y;
    cout<<" "<<x<<" ^ "<<y<<" = "<<pow(x,y);
    cout<<"\n\n";
    cout<<"Escribe un valor real para de x para obtener e: "; cin>>x;
    cout<<" "<<x<<"\ne = "<<exp(x);
    cout<<"\n\nEl numero e = "<<exp(1);
    cout<<"\n\nEscribe un numero real: "; cin>>x;
    void clrscr();
    cout<<"---Funciones varias incorporadas en la bibiliteca Math.h---\n";
    cout<<"\nNumero real: "<<x;
    cout<<"\nLogaritmo natural = "<<log(x);
    cout<<"\nLogaritmo decimal = "<<log10(x);
    cout<<"\nEl máximo entero es: "<<INT_MAX;
    cout<<"\nEscribe un entero negativo: "; cin>>a;
    cout<<"Su valor absoluto es: "<<abs(a);
    cout<<"\n\nEscribe un numero con decimales: "; cin>>x;
    cout<<"Mayor entero, menor que "<<x<<" = "<<floor(x);
    cout<<"\nMenor entero, mayor que "<<x<<" = "<<ceil(x);
    cout<<"\n\nHipotenusa de un triangulo rectangulo: ";
    cout<<"\nEscribe un cateto: "; cin>>x;
    cout<<"Escribe otro cateto: "; cin>>y;
    cout<<"\nLa hipotenusa es: \n"<<hypot(x,y);
    return 0;
}