#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*Calcular el área y el perímetro de una circunferencia:
   Elabore un algoritmo en C++ para calcular el área y el perímetro de una circunferencia. 
   Se debe solicitar al usuario el dato del radio y se debe definir la constante PI=3.141592.*/

const float pi = 3.14159265359;
float radio = 0;
float area = 0;
float perimetro = 0;
float diametro = 0;

cout << "¡Bienvenidos! hoy veremos las circunferencias" <<endl;
cout <<"Ingrese el radio del circulo"<<endl;

cin >> radio;

diametro = radio * 2;
cout <<"El radio es: " <<radio<<endl;
perimetro = pi * diametro;
cout <<"El perimetro es: "<<perimetro<<endl;
area = pi * (radio * radio);
cout <<"El area es: " <<area<<endl;








}
