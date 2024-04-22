#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//Calcular factorial de un n�mero usando un ciclo
	int valor = 0; //Declaraci�n de variables necesarias
	int factorial = 1; //Declaraci�n de variables necesarias
 	int total = 1; //Declaraci�n de variables necesarias
 	
	cout<<"Ingrese un valor para realizar su factorial"<<endl; //Solicitud de ingreso por teclado un valor
	cin>>valor; //Ingreso por teclado
	
	while(valor<= 0){ //Validaci�n para que no se pueda ingresar 0 o n�meros negativos
		cout<<"El valor es 0 o negativo. No se puede realizar un factorial. Ingrese nuevamente un n�mero"<<endl; //Aviso por pantalla 
		cin>>valor; //Ingreso valor nuevamente si fue err�neo
	
	}
	 	cout<<"Factorial de "<<valor<<endl;
	while (valor>=factorial) //Mientras el valor ingresado sea >= al factorial contin�a ejecut�ndose
	{
		total = total * factorial; //Operación
		if(total<=0){
			cout<<factorial<<" = Este valor es negativo"<<endl; //Muestro resultado negativo
			factorial++; //Aumento factorial
		}else{
		cout<<factorial<<" = "<<total<<endl; //Resultado
		factorial++; //Aumento de factorial en cada vuelta del ciclo
		}
	}
}
