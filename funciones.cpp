// Programando funciones

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de la funcion
int encontrarMax(int x, int y);

int main(){
	int n1, n2;
	//int mayor;
	cout<<"Ecribe un numero: "; cin>>n1;
	cout<<"Escribe un numero: "; cin>>n2;
	//mayor = encontrarMax(n1, n2);
	//cout<<"\nEl mayor de los dos nuemros es: "<<mayor<<endl;
	cout<<"\nEl mayor de los numeros es: "<<encontrarMax(n1,n2)<<endl; // Imprime el resultado sin tener que declara nuevas variables
	
	getch();
	return 0;
}

// Definicion de la fucnion
int encontrarMax(int x, int y){
	int numeroMax;
	if(x>y){
		numeroMax = x;
	}else {
		numeroMax = y;
	}
	return numeroMax;
}
