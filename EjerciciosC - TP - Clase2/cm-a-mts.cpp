#include <iostream>
#include <string>

using namespace std;


int main(){

/*Convertir cm a metros:
Elabore un algoritmo en C++ para convertir cent�metros a metros*/

float valor = 0; //Valor que ingresar�n por teclado.
float conversion = 100; //Valor que se dividir� para obtener los metros

cout << "�Hola! Convierte un valor de centimetros a metros" <<endl << "Ingresa el valor en centimetros" <<endl; //Solicitud de valor en centimetros
while(valor <= 0){ //restricci�n para que se coloquen valores positivos �nicament
cout << "El valor debe ser mayor a 0" << endl; //En caso de ser 0 o valor negativo, deber� volver a cargar otro valor

cin >> valor; //Carga de valor por teclado

}

conversion = valor / conversion; //Divisi�n de valor por teclado / 100;

cout << "El valor obtenido en metros es de: " << conversion <<" mts"; //Muestreo de valor final en MTS.

}

