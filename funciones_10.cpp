// Programando funciones. Paso de parametros de tipo array (vector o arreglo)

#include <iostream>
#include <conio.h>
using namespace std;

void cuadrado(int vec[], int);
void mostrar(int vec[], int);

int main(){
	const int TAM = 5;
	int vec[TAM]= {1, 2, 3, 4, 5};
	cuadrado(vec, TAM);
	mostrar(vec, TAM);
	getch();
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] = vec[i] * vec[i];
	}
}

void mostrar(int vec[], int tam){
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
	
}
