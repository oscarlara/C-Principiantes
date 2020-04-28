// Programando funciones. Suma de elementos de un array. 

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int calculaSuma(int vec[], int);
int vec[100], tam; 

int main(){
	pedirDatos();
	cout<<"\nLa suma de los elemntos del array es: "<<calculaSuma(vec, tam)<<endl;
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Escribe los elementos del vector: "; cin>>tam;
	for(int i=0; i<tam; i++){
		cout<<i+1<<" Escribe un numero: "; cin>>vec[i];
	}
}

int calculaSuma(int vec[], int tam){
	int sum = 0;
	for(int i=0; i<tam; i++){
		sum += vec[i];
	}
	return sum;
}
