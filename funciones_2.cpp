// Programando funciones (generales)

#include <iostream>
#include <conio.h>
using namespace std;

//Ptototio de la funcion general
template <class TIPOD>
void mostrarAbs(TIPOD numero);


int main(){
	int num1 = 4;
	float num2 = 56.67;
	double num3 = 123.5689;
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

// Definicion de la funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
