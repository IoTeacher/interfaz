/*Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Ejercicio #42 para la practica del lenguaje de programacio de C++
el ejercicio pide la convercion de libras y onzas a kiligramos.

Autor :Martinez Estrada Ana Karen @nickname karen25-2
Repositorio:https://github.com/Karen25-2/interfaz.git*/


#include <iostream>
using namespace std;

int main() {  

   float lo ;
   float k ;
   float kilos ;
   
   
     cout << "Conversion de libras y onzas a kilogramos \n\n";
     
     cout <<"Introduce el numero del libras y onzas que desea converir a kilogramos\n\n"; cin >>lo;
       
     cout << "calculando el numero de de kilos  en "<<lo<<" libras\n\n";
     kilos  = lo/2.2;
      
     cout << "calculando el numero de de kilos  en "<<lo<<" onzas\n\n";
     
     k = lo/35.2;
    
      cout <<"El numero de libras en los kilogramos son:" <<kilos <<"\n\n";
      
      
   cout <<"El numero de onzas en los kilogramos son:" <<k ;    
   
     return 0;
}
