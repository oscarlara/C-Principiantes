// Programando punteros. Arrays

#include <iostream>
#include <conio.h>
using namespace std;



int main(){
	int n1 [] = {1, 2, 3, 4 ,5};
	int *dir_n1;
	dir_n1 = &n1[0]; // Igualar la direccion de n1 a la primera posicion del array. Tambien vale dir_n1 = n1;
	for(int i=0; i<5; i++){
		cout<<"\nElemento del array ["<<i<<"]: "<<*dir_n1++<<endl;
		cout<<"\nPosiciones en la memoria "<<n1[i]<<" es "<<dir_n1<<endl;
	}
	
	getch();
	return 0;
}
