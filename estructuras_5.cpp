// Programando estructuras

#include <iostream>
#include <conio.h>
using namespace std;

struct Atleta{
	char nombre [20];
	char pais [20];
	int n_medallas;
}atletas [100];

int main(){
	int n_atletas, mayor = 0, posM = 0;
	cout<<"Escribe el numero de atletas: "; cin>>n_atletas;
	
	// Numero de atletas
	for(int i=0; i<n_atletas; i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(atletas[i].nombre, 20, '\n');
		cout<<"Pais: "; cin.getline(atletas[i].pais, 20, '\n');
		cout<<"Medallas: "; cin>>atletas[i].n_medallas;
		
		//Atletas con mayor numero de medallas
		if(atletas[i].n_medallas>mayor){
			mayor = atletas[i].n_medallas;
			posM = i;
		}
		cout<<"\n\n";
	}
	cout<<"\n--Atletas con el mayor numero de medallas--\n";
	cout<<"Nombre: "<<atletas[posM].nombre<<endl;
	cout<<"Pais: "<<atletas[posM].pais<<endl;
	
	
	
	
	getch();
	return 0;
}
