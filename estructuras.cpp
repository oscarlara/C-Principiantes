// Programando estructuras
// Coleccion de datos de diferentes tipos

#include <iostream>
using namespace std;

struct Persona{
    char nombre [20];
    int edad;
}persona1, persona2;
//persona1 = {"Oscar", 20}, persona2 = {"Susana", 20};

int main(){
    // Asi funciona cuando reyenamos los datos fuera de la estructura
    cout<<"Nombre: "; cin.getline(persona1.nombre, 20, '\n');
    cout<<"Edad: "; cin>>persona1.edad;
    cout<<"\nImprimiendo los datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    //Asi funciona cuando ya reyenamos los datos en la estructura
    cout<<"El nombre de la persona uno es: "<<persona1.nombre<<endl;
    cout<<"La edad de la persona unos es: "<<persona1.edad<<endl;
    cout<<"\nEl nombre de la persona dos es: "<<persona2.nombre<<endl;
    cout<<"La edad de la persona dos es: "<<persona2.edad<<endl;

    
    return 0;
}