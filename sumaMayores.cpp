//Programa creado por Óscar Lara Romero
//Tuxapptechnology @ 2019. Todos los derechso reservados. 

#include<iostream>
#include<stdlib.h>
int main(){
  int numero, suma=0;
  do{
    std::cout<<"Escribe un numero: ";
    std::cin>>numero;
    if (numero>0){
      suma+=numero;
    }
  }while((numero<20 || numero>30 && numero!=0));
  std::cout<<"\nLa suma es: "<<suma<<"\n";
  system("pause");
  return 0;
}