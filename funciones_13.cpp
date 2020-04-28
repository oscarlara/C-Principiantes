// Programando funciones. Paso de paramatros de tiopo estructura. 

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona {
	char nombre [30];
	int edad;
}p1;

void datos();
void verEstructura(Persona);

int main(){
	datos();
	verEstructura(p1);
	getch();
	return 0;
}

void datos(){
	cout<<"Escribe el nombre: "; cin.getline(p1.nombre, 30, '\n');
	cout<<"Escribe la edad: "; cin>>p1.edad;
}

// Se declaran los parametros con el nombre de la estructura y una variable que contendra los datos de la estructura
void verEstructura(Persona p){
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
