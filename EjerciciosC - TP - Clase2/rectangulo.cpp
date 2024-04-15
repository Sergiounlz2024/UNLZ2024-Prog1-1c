#include <iostream>
#include <string>
using namespace std;

int main () {
    
/*Calcular el área y el perímetro de un rectángulo:
Elabore un algoritmo en C++ para calcular el área
 y el perímetro de un rectángulo
solicitando los datos necesarios al usuario.
*/

float alto = 0; //Valor del alto del rectángulo ingresado por teclado
float largo = 0; //Valor del largo del rectángulo ingresado por teclado
float area = 0; //Valor del área del rectánculo calculado debajo.
float perimetro = 0; //Valor del perímetro del rectángulo caldulado debajo.

cout << "¡Bienvenidos! Hoy veremos el rectangulo" <<endl; //Texto de comienzo de programa
cout << "Ingrese el alto del rectangulo" <<endl; //Texto de solicitud de primer valor del rectángulo (ALTO)
while(alto <= 0){ //Restricción para que el valor sea positivo y distinto a 0

cout << "El valor debe ser mayor a 0" <<endl; //En caso de ser 0 o valor negativo solicitará nuevamente el ingreso del valor.
cin >> alto; //Ingreso de valor 
	
}
cout << "Ahora ingrese el largo"<<endl; //Solicitud de valor del LARGO
while(largo <= 0){ //Restricción para que el valor sea positivo y distinto a 0

cout << "El valor debe ser mayor a 0" <<endl;//En caso de ser 0 o valor negativo solicitará nuevamente el ingreso del valor.
cin >> largo;//Ingrso de valor
	
}
area = alto * largo; //Cuenta para calcular el área (ALTO * LARGO);
perimetro = (alto * 2) + (largo *2); //Cuenta para calcular el perímetro ( (ALTO * 2) + (LARGO * 2)


cout << "Los numeros elegidos fueron: " << endl << "Alto: "<<alto << endl << "Largo: " << largo << endl << "El area del rectangulo es de " <<area << " y el perimetro es " << perimetro;
//Muestreo de los valores individuales y del área y perímetro. 

}
