#include <iostream>
#include <string>

using namespace std;


int main(){
/*Calcular el área y el perímetro de un triángulo equilátero:
Elabore un algoritmo en C++ para calcular el área y el perímetro de un triángulo
equilátero solicitando los datos necesarios al usuario.*/

float altura = 0;
float base = 0;
float perimetro = 0;
float area = 0;

cout << "¡Bienvenidos! Hoy veremos el area y perimetro de un triangulo equilatero"<<endl;

cout << "Ingrese la altura del triangulo" << endl;

cin >> altura;

cout << "Ahora ingrese la medida de la base" <<endl;

cin >> base;

perimetro = altura * 3;
area = (base * altura) / 2;
cout <<"--------------------"<<endl;
cout << "Perimetro: " << perimetro <<" mts"<<endl;
cout << "Area: " << area << " mts2" <<endl;
cout <<"--------------------"<<endl;


}
