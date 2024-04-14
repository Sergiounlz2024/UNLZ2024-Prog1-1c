#include <iostream>
#include <string>

using namespace std;

int main() {
	/*Desarrollar un programa que determine si un año ingresado por el usuario es bisiesto o
no. Un año es bisiesto si es divisible por 4 pero no por100, o si es divisible por 400.
*/
int anio = 0;

cout << "Escoge un anio para verificar si es bisiesto"<<endl;
cin>>anio;

if(anio%4==0 &&  anio%100 !=0 || anio%400==0){
	cout<< "El anio escogido es bisiesto"<<endl;
	cout<<anio;
}else{
	cout<< "El anio escogido no es bisiesto"<<endl;
	cout<<anio;
}






}
