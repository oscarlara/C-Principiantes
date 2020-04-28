// Programando funciones. Recursividad (funciones que se llaman a si mismas)

#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int);

int main(){
	int num;
	cout<<"Introduce un numero: "; cin>>num;
	cout<<"El factorial de "<<num<<" es: "<<factorial(num)<<endl;
	getch();
	return 0;
}

int factorial(int n){
	if(n == 0){
		n = 1;
	}else {
		n = n * factorial(n-1);
	}
	return n;
}
