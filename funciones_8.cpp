// Programando funciones. Devolucion de valores multiples.

#include <iostream>
#include <conio.h>
using namespace std;

void calcula(int, int, int&, int&); // Dos parametros por valor y dos parametros por referencia

int main(){
	int n1, n2, sum, pro;
	cout<<"Escribe un numero: "; cin>>n1;
	cout<<"\nEscribe un numero: "; cin>>n2;
	calcula(n1,n2n sum = 0, pro = 0);
	cout<<"El valor de la suma es: "<<sum<<endl;
	cout<<"El valor del producto es: "<<pro<<endl;
	getch();
	return 0;
}

void calcula(int n1, int n2, int& sum, int& pro){
	sum = n1 + n2;
	pro = n1 * n2;
}
