// Programando estructuras

#include <iostream>
#include <string.h>
using namespace std; 

struct Corredor{
    char nombre [20];
    int edad;
    char sexo [10];
    char club [20];
}corredor1;

int main(){
    char categoria [20];
    cout<<"Nombre: "; cin.getline(corredor1.nombre, 20, '\n');
    cout<<"Edad: "; cin>>corredor1.edad;
    fflush(stdin);
    cout<<"Sexo: "; cin.getline(corredor1.sexo, 10, '\n');
    cout<<"Club: "; cin.getline(corredor1.club, 20, '\n');

    if(corredor1.edad<=18){
        strlcpy(categoria, "Juvenil"); // Funcion para copiar cadenas de caracteres
    }else if (corredor1<=40) {
        strlcpy(categoria, "Senior");
    }else {
        strlcpy(categoria, "Veterano");
    }

    cout<<"\n\nDatos del corredor"<<endl;
    cout<<"Nombre: "<<corredor1.nombre<<endl;
    cout<<"Edad: "<<corredor1.edad<<endl;
    cout<<"Sexo: "<<corredor1.sexo<<<end;
    cout<<"Club: "<<corredor1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    return 0;
}