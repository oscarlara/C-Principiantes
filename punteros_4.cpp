// Programando punteros. 

// Con el asterisco delante de la variable puntero señalas lo que hay dentro de la posicion de memoria, en cambio sin el solo muestra la poscion de memoria. 

#include <iostream>
#include <conio.h>
using namespace std;



int main(){
	int n1, *dir_n1;
	cout<<"Escribe un nuemro: "; cin>>n1;
	dir_n1 = &n1; //Guardando la posicion de memoria en la variable puntero
	if(*dir_n1%2 == 0){
		cout<<"El numero "<<*dir_n1<<" es par"<<endl;
		cout<<"Posicion: "<<dir_n1<<endl;
	}else {
		cout<<"El numero: "<<*dir_n1<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_n1<<endl;
	}	
	getch();
	return 0;
}
