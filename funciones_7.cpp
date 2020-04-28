// Programando funciones. Parametros por referencia

#include <iostream>
#include <conio.h>
using namespace std;

void valNuevo(int&, int&);
int main(){
	int num1, num2;
	cout<<"Escribe un numero: "; cin>>num1;
	cout<<"\nEscribe otro numero: "; cin>>num2;
	valNuevo(num1, num2);
	cout<<"\nEl valor del primer numero es: "<<num1<<endl;
	cout<<"\nEl valor del segundo numero es: "<<num2<<endl;
	getch();
	return 0;
}
//El simbolo & significa que le estamos pasando valores por referencia. Apuntamos a la direccion de memoria donde esta el valor. 
void valNuevo(int& numx, int& numy){

	// Acceso a la direccion de memoria y cambiando el valor de los datos
	numx = 89;
	numy = 45;
	cout<<"\nEl nuevo valor por referencia del primer numero es: "<<numx<<endl;
	cout<<"\nEl nuevo valor por referencia del segundo numero es: "<<numy<<endl;
}
