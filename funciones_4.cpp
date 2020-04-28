// Programando funciones. Elevacion numero.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//Prototipo de la funcion
void pedirDatos();
void funpot(long x, long y);

long base, exponente;

int main(){
	pedirDatos();
	funpot(base, exponente);
	
	getch();
	return 0;
}

// Definicion de la funcion

void pedirDatos(){
	cout<<"Escribe la base: "; cin>>base;
	cout<<"\nEscribe el exponente: "; cin>>exponente;
}

void funpot(long x, long y){
	long potencia;
	potencia = pow( x, y);
	cout<<"\nEl resultado de "<<x<<" elevado a "<<y<<" = "<<potencia<<endl;
}
