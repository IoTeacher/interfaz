/*Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Ejercicio #44 para la practica del lenguaje de programacio de C++
el ejercicio pide calcular el precio de un tapete por metro cuadrado 
dando los datos de el precio por yarda cuadrada.

Autor :Martinez Estrada Ana Karen @nickname karen25-2
Repositorio:https://github.com/Karen25-2/interfaz.git*/



#include <iostream>
using namespace std;

int main() {

   float y = 1.19;
   float m ;
   float metros;
   int precio = 9;
   float nuevoPre;
     cout << "Precio de tapete por metro cuadrado cada yarda cuadrada cuesta $9\n\n";
    
   cout<< "Introduce la cantidad de metros que deseas comprar\n\n";cin >>m;
   
  metros = m*y;
  
  nuevoPre = metros * precio ;
     
      cout <<"El precio del tapete para "<<m<<" metro cuadrado es :" <<nuevoPre ;
   

    return 0;
}
