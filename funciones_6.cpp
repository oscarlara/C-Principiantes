// Programando funciones. Funciones template

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de la funccion template
template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int dato1 = 4;
	float dato2 = 2.3;
	double dato3 = 255.3698;
	char dato4 = 'A';
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	getch();
	return 0;
}

// Definicion de la funcion
template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El datos es: "<<dato<<endl;
}

