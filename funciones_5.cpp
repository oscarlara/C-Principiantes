// Programando funciones. Elevacion numero

#include <iostream>
#include <conio.h>
using namespace std;

//Prototiopo de la funcion
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
	cout<<"Escribe un numero: "; cin>>base;
	cout<<"Escribe el exponente: "; cin>>exponente;
}
void funpot(long x, long y){
	long resultado;
	for(int i=1; i<=y; i++){
		resultado *= x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
