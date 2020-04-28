//Programa creado por Óscar Lara Romero
//Tuxapptechnology @ 2019. Todos los derechso reservados. 

#include <iostream>
#include <conio.h>

void convert ();
float farenheit;
float celsius;

int main(){
  std::cout<<"Por favor introduce la temperatura en farenheit: ";
  std::cin>>farenheit;
  //llamada a la funcion
  convert();
  std::cout<<"\nLa temperatura en celsius es: ";
  std::cout<<celsius<<"\n";
  system("pause");
  return 0;
}

//función que convierte de farenheit a celsius
void convert(){
  float celsius;
  celsius=((farenheit-32)*5)/9;
}