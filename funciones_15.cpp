// Programando funciones. funcion recursiva que suma los primero n positivos.

#include <iostream>
#include <conio.h>
using namespace std;

int sumar(int);

int main(){
	int elementos;
	do{
		cout<<"Escribe el numero de elementos (solo enteros positivos): "; cin>>elementos;
	}while(elementos <= 0);
	cout<<"\nLa suma es: "<<sumar(elementos)<<endl;
	getch();
	return 0;
}

// Funcion recursiva.
int sumar(int n){
	int suma = 0;
	if(n == 1){
		suma = 1;
	}else {
		suma = n + sumar(n - 1);
	}
	return suma;
}
