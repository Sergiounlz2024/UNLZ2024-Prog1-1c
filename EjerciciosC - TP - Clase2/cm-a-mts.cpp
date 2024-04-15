#include <iostream>
#include <string>

using namespace std;


int main(){

/*Convertir cm a metros:
Elabore un algoritmo en C++ para convertir centímetros a metros*/

float valor = 0; //Valor que ingresarán por teclado.
float conversion = 100; //Valor que se dividirá para obtener los metros

cout << "¡Hola! Convierte un valor de centimetros a metros" <<endl << "Ingresa el valor en centimetros" <<endl; //Solicitud de valor en centimetros
while(valor <= 0){ //restricción para que se coloquen valores positivos únicament
cout << "El valor debe ser mayor a 0" << endl; //En caso de ser 0 o valor negativo, deberá volver a cargar otro valor

cin >> valor; //Carga de valor por teclado

}

conversion = valor / conversion; //División de valor por teclado / 100;

cout << "El valor obtenido en metros es de: " << conversion <<" mts"; //Muestreo de valor final en MTS.

}

