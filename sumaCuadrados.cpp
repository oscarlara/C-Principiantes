//Programa creado por Óscar Lara Romero
//Tuxapptechnology @ 2019. Todos los derechso reservados. 

#include<iostream>
#include<stdlib.h>
int main(){
  int suma=0, cuadrado;
  for(int i=1;i<=10;i++){
    cuadrado=i*i;
    suma=suma+cuadrado;//tambien valdria suma+=cuadrado
  }
  std::cout<<"El resultado de la suma es: "<<suma<<"\n";
  system("pause");
  return 0;
}