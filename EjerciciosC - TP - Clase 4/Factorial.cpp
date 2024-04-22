#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//Calcular factorial de un número usando un ciclo
	int valor = 0;
	int factorial = 1;
	int total = 0;
	cout<<"Ingrese un valor para realizar su factorial"<<endl;
	cin>>valor;
	
	while(valor<= 0){
		cout<<"El valor es 0 o negativo. No se puede realizar un factorial. Ingrese nuevamente un número"<<endl;
		cin>>valor;
	
	}
	while (valor>=factorial) 
	{
		total = factorial * valor;
		cout<< "Factorial: "<<valor<<" x "<< factorial<<" = "<<total<<endl;
		factorial++;
	}
}
