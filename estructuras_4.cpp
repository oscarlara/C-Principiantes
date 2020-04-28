//Programando estructuras. 

#include <iostream>
#include <conio.h>

using namespace std;

struct Empleado{
	char nombre [20];
	float salario;
}empleados [100];

int main(){
	int n_empleados, mayor = 0, menor = 999999, posM, posm;
	cout<<"Escribe el numero de empleados: ", cin>>n_empleados;
	
	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(empleados[i].nombre, 20, '\n');
		cout<<"Salario: "; cin>>empleados[i].salario;
		
		// Empleado con el mayor salario
		if(empleados[i].salario>mayor){
			mayor = empleados[i].salario;
			posM = i;
		}
		
		// Empleado con el menor salario
		if(empleados[i].salario<menor){
			menor = empleados[i].salario;
			posm = i;
		}
		cout<<"\n\n";
	}
	
	cout<<"\n--Empleados con el mayor salario--"<<endl;
	cout<<"Nombre: "<<empleados[posM].nombre<<endl;
	cout<<"Salario: "<<empleados[posM].salario<<endl;
	
	cout<<"\n--Empleados con el menor salario--"<<endl;
	cout<<"Nombre: "<<empleados[posm].nombre<<endl;
	cout<<"Salario: "<<empleados[posm].salario<<endl;
	
	getch();
	return 0;
}
