// Programando funciones. Pasando parametros de tipo matriz.

#include <iostream>
#include <conio.h>
using namespace std;

// Los parametros enviados a una funcion para una matriz siempre son primero el tipo de datos, el nombre, y entre corchetes el numero de filas y de columnas
// El valos para lña filas puede esta vacio pero el de columnas es obligatorio. Luego el numero de filas y el numero de columnas. 
void mostrar(int m[][3], int, int);
void elevacionCuadrado(int m[][3], int, int);
void mostrarResultado(int m[][3], int, int);

int main(){
	const int NFILAS = 2;
	const int NCOLUMNAS = 3;
	int m[NFILAS][NCOLUMNAS] = {{1, 2, 3}, {4, 5, 6}};
	mostrar(m, NFILAS, NCOLUMNAS);
	elevacionCuadrado(m, NFILAS, NCOLUMNAS);
	mostrarResultado(m, NFILAS, NCOLUMNAS);
	getch();
	return 0;
}

void mostrar(int m[][3], int nfilas, int ncolumnas){
	cout<<"Mostrando matriz original: \n\n";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncolumnas; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void elevacionCuadrado(int m[][3], int nfilas, int ncolumnas){
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncolumnas; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarResultado(int m[][3], int nfilas, int ncolumnas){
	cout<<"\n--Matriz elevada al cuadrado--\n\n";
		for(int i=0; i<nfilas; i++){
			for(int j=0; j<ncolumnas; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

