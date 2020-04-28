// Programando funciones

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de la funcion
void pedirDatos();
void multiplica(float x, float y);

float num1, num2; // Variable globales

int main(){
	pedirDatos();
	multiplica(num1, num2);

	getch();
	return 0;
}

// Definicion de la funcion
void pedirDatos(){
	cout<<"Escribe un numero decimal: "; cin>>num1;
	cout<<"\nEscribe un numero decimal: "; cin>>num2;	
}

void multiplica(float x, float y){
	float multiplicacion = x * y;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
}
