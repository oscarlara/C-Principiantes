//Programa creado por Óscar Lara Romero
//Tuxapptechnology @ 2019. Todos los derechso reservados. 

#include <iostream>
#include <stdlib.h>

float convert (float);

int main(){
  float farenheit;
  float celsius;
  std::cout<<"Por favor introduce la temperatura en farenheit: ";
  std::cin>>farenheit;
  //llamada a la funcion
  celsius=convert(farenheit);
  std::cout<<"\nLa temperatura en celsius es: ";
  std::cout<<celsius<<"\n";
  system("pause");
  return 0;
}

//función que convierte de farenheit a celsius
float convert(float farenheit){
  float celsius;
  celsius=((farenheit-32)*5)/9;
  return celsius;
}