/*Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Ejercicio #41 para la practica del lenguaje de programacio de C++
el ejercicio pide calcular el nùmero de libras que hay en cierta
cantidad de kilogramos .

Autor :Martinez Estrada Ana Karen @nickname karen25-2
Repositorio:https://github.com/Karen25-2/interfaz.git*/




#include <iostream>
using namespace std;

int main() {
   float p = 2.2;
   float k ;
   float libras ;
   
     cout << "Conversion de kilogramos  a libras\n\n";
     k=212;
     cout << "calculando el numero de libras en "<<k <<" kilogramos\n\n";
     
    libras = k * p;
      
      cout <<"El numero de libras en los kilogramos son:" <<libras ;
     
    return 0;
}
