#include <iostream>
#include <string>
using namespace std;

int main () {
    
/*Calcular el �rea y el per�metro de un rect�ngulo:
Elabore un algoritmo en C++ para calcular el �rea
 y el per�metro de un rect�ngulo
solicitando los datos necesarios al usuario.
*/

float alto = 0; //Valor del alto del rect�ngulo ingresado por teclado
float largo = 0; //Valor del largo del rect�ngulo ingresado por teclado
float area = 0; //Valor del �rea del rect�nculo calculado debajo.
float perimetro = 0; //Valor del per�metro del rect�ngulo caldulado debajo.

cout << "�Bienvenidos! Hoy veremos el rectangulo" <<endl; //Texto de comienzo de programa
cout << "Ingrese el alto del rectangulo" <<endl; //Texto de solicitud de primer valor del rect�ngulo (ALTO)
while(alto <= 0){ //Restricci�n para que el valor sea positivo y distinto a 0

cout << "El valor debe ser mayor a 0" <<endl; //En caso de ser 0 o valor negativo solicitar� nuevamente el ingreso del valor.
cin >> alto; //Ingreso de valor 
	
}
cout << "Ahora ingrese el largo"<<endl; //Solicitud de valor del LARGO
while(largo <= 0){ //Restricci�n para que el valor sea positivo y distinto a 0

cout << "El valor debe ser mayor a 0" <<endl;//En caso de ser 0 o valor negativo solicitar� nuevamente el ingreso del valor.
cin >> largo;//Ingrso de valor
	
}
area = alto * largo; //Cuenta para calcular el �rea (ALTO * LARGO);
perimetro = (alto * 2) + (largo *2); //Cuenta para calcular el per�metro ( (ALTO * 2) + (LARGO * 2)


cout << "Los numeros elegidos fueron: " << endl << "Alto: "<<alto << endl << "Largo: " << largo << endl << "El area del rectangulo es de " <<area << " y el perimetro es " << perimetro;
//Muestreo de los valores individuales y del �rea y per�metro. 

}
