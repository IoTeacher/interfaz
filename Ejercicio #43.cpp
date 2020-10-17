/*Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Ejercicio #43 para la practica del lenguaje de programacio de C++
el ejercicio pide calcular la rapidez de una impresora en m/seg 
dando su rapides de 1,000 ft por minuto

Autor :Martinez Estrada Ana Karen @nickname karen25-2
Repositorio:https://github.com/Karen25-2/interfaz.git*/




#include <iostream>
using namespace std;

int main() {

   int p = 1000;
   float c ;
   float m ;
   float s ;
   float piezas;
 
     cout << "Una impresora mueve papel con una rapidez de 1,000 piezas por minuto, ¿Cual es su rapidez en centimetro por segundo?\n\n";
     m = 1 ;
     
     c = p * 30.48;
     s = m * 60;
     
     piezas  = c/s;
     
     
     
    
   cout<< "la rapidez es " << piezas<< "\tpiezas por segundo" ;
   
  
    return 0;
}
