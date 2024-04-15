#include <iostream>
#include <string>

using namespace std;

int main(){
	/*. Imprimir datos personales:
Elabore un algoritmo en C++ para imprimir los datos personales del usuario. Se
deben solicitar los datos de Nombres, Apellido, Edad, Dirección, Localidad,
Provincia, País y Teléfono.*/

string nombre, apellido, direccion, localidad, provincia, pais, telefono;
int edad = 0;


cout << "------------------------------------------"<<endl;
cout << "Nombre: "   ;cin >> nombre    ;cout <<endl;
cout << "Apellido: " ;cin >> apellido  ;cout <<endl;
cout << "Edad: "     ;cin >> edad      ;cout <<endl;
cin.ignore(); // Ignora el salto de línea pendiente
cout << "Direccion: ";getline(cin, direccion);cout <<endl;
cout << "Localidad: ";getline(cin, localidad);cout <<endl;
cout << "Provincia: ";getline(cin, provincia);cout <<endl;
cout << "Pais: "     ;getline(cin, pais);cout <<endl;
cout <<"Telefono: "  ;getline(cin, telefono);cout <<endl;
cout << "------------------------------------------"<<endl;









}
