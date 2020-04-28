// Programando punteros. Declaracion de punteros. Un puntero es una variable que almacena la direccion de memoria donde se guarda otra variable. 
//&n = La direccion de n.
//*n = La variable cuya direccion esta almacenada en n.

#include <iostream>
#include <conio.h>
using namespace std;



int main(){
	
	int n1 = 20;
	cout<<"Numero: "<<n1<<endl;
	
	//Direccion de memoria donde se guarda la variable
	cout<<"Direccion: "<<&n1<<endl;
	
	// Variable donde se guarda la direccion de memoria.
	int *dirn1;
	dirn1 = &n1;
	cout<<"Variable: "<<*dirn1<<endl;
	
	
	getch();
	return 0;
}
