#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inicio = 0; //Declaración de valores
    int contador = 1; //Declaración de valores

    cout << "Ingrese un valor inicial" << endl; //Solicito por pantalla el ingreso de un valor
    cin >> inicio; //Ingreso por teclado del valor
    while (inicio > 0) //Mientras el valor "inicio" sea mayor a 0 ingresa a este bucle
    {
        cout << "Valor inicial " << contador << ": " << inicio << endl; //Se muestra el conteo + el valor inicial
        inicio--; //Se resta el valor inicial hasta llegar a 0
        contador++; //Se suma el contador para mostrar la cantidad de impresiones hasta el 0
    }
    while (inicio < 0)//Mientras el valor "inicio" sea menor a 0 ingresa a este bucle
    {
        cout << "Valor inicial " << contador << ": " << inicio << endl; //Se muestra el conteo + el valor inicial
        inicio++; //Se suma el valor inicial hasta llegar a 0
        contador++; //Se resta el contador para mostrar la cantidad de impresiones hasta el 0
    }
}