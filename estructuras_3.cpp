#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Alumno {
	char nombre [30];
	int edad;
	float promedio;
}alumnos [3];

int main(){
	int mayor = 0;
	int pos = 0;
	for(int i=1; i<3; i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 30, '\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;
		cout<<"Promedio: "; cin>>alumnos[i].promedio;
		cout<<"\n";
		if(alumnos[i].promedio>mayor){
		mayor = alumnos[i].promedio; //Obtenemos el mayor promedio
		pos = i; // Guardamos la posicion del mayor
		}
	}
	cout<<"\n";
	
	//Imprimiendo los datos de los alumnos
	cout<<"\n--Alumnos con el mejor promedio--\n";
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<alumnos[pos].promedio<<endl;
	
	
	getch();
	return 0;
}
