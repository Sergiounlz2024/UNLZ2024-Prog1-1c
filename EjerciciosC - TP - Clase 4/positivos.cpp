#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Crear un programa donde los valores sean siempre positivos.

    int valor = 0;     // Declaro variables necesarias
    int suma = 0;      // Declaro variables necesarias
    int contador = 0;  // Declaro de variables necesarias
    while (valor >= 0) // Mientras el valor sea igual o mayor a 0
    {
        cout << "Ingrese un valor" << endl; // Solicito ingresar el valor en pantalla
        cin >> valor;                       // Ingreso de valor por teclado
        if (valor >= 0)                     // Si el valor es >= 0 va a sumar y acumular el valor en la variable "suma"
        {
            suma = suma + valor; //Acumulamos la suma en la variable "suma"
            contador++; //Incrementamos el contador
        }
    }
    cout << "Suma total: " << suma << endl;                                                         // De lo contrario, únicamente va a mostrar el valor final de la suma.
    cout << "Se ingresaron " << contador << " numeros antes de ingresar un valor negativo" << endl; // Muestro la cantidad de valores que se ingresaron previo al valor negativo
}