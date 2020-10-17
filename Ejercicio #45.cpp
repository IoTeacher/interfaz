/*Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Ejercicio #45 para la practica del lenguaje de programacio de C++
el ejercicio pide calcular la el nùmero de metros en un año-luz siendo
de 2.99776*10^8 m/seg la velocidad de la luz.

Autor :Martinez Estrada Ana Karen @nickname karen25-2
Repositorio:https://github.com/Karen25-2/interfaz.git*/


#include <iostream>
using namespace std;

int main() {
    
    float vl = 2.99776e+8 ;
    int D_año = 365;
    int seg_d =86400;
    int añol;
    float año_luz;
    
    cout <<"\tCalculo para determinar a cuantos metros equivale un año luz\n\n";
    
    cout << "Para calcular la cantidad de metros en un año luz intriduce la cantidad de años de la cual deseas sabee\n\n"; cin >>añol;
    
    cout <<"calculando el numero de metros en "<<añol<< "años\n\n";
    
    año_luz = ((vl*seg_d)*D_año)*añol;
    
    cout <<"La cantidad de metros en "<<añol<<" años son:" <<año_luz<<"\n\n";
    
	return 0;
}
