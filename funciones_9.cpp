// Programando funciones. Intercambio de valores

#include <iostream>
#include <conio.h>
using namespace std;

void intercambiar(int&, int&);
int main(){
	int n1 = 10, n2 = 15;
	cout<<"El valor de n1 es: "<<n1<<endl;
	cout<<"el valor de n2 es:"<<n2<<endl;
	intercambiar(n1,n2);
	cout<<"El nuevo valor de n1 es: "<<n1<<endl;
	cout<<"El nuevo valor de n2 es: "<<n2<<endl;
	getch();
	return 0;
}
void intercambiar(int& n1, int& n2){
	int aux;
	aux = n1;
	n1 = n2;
	n2= aux;
}
