#include <iostream> 
#include <string>

using namespace std;


int main() { 
/*. Desarrollar un programa que solicite el año de nacimiento de una persona, calcular su
edad: Si la edad es mayor o igual a 18 años, imprimir "La persona es mayor de edad",
de lo contrario, imprimir "La persona es menor de edad".
*/
int edad = 0;
int anio = 0;
int anioActual = 2024;


cout<<"Ingrese su anio de nacimiento"<<endl;
cin>>anio;
edad = anioActual - anio;
if(edad>=18){
	cout<< "Tiene "<<edad<<" anios, es mayor de edad"<<endl;
}else{
	cout<< "Tiene "<<edad<<" anios, todavia no es mayor de edad"<<endl;
}










}
